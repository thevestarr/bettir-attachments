# BettIR Attachments — agent notes

Arma 3 mod (SQF + config `.cpp/.hpp`). Author: Vestarr. Depends on CBA (`cba_common`); ACE interaction menu is optional.
It adds many **variant classes** of weapon attachments (lasers/illuminators/flashlights) to `CfgWeapons`. It also provides a runtime framework that swaps the equipped attachment between those variants when the player changes a "setting" (mode, power, focus, device…).

No build scripts, tests or HEMTT in the repo. `*.p3d` models are git-ignored, so `data\models\*.p3d` referenced by configs are not in git. You can't compile or run anything here: check changes by reading them carefully.

## Layout

```
Addons/BettIR_Attachments/
  config.cpp                 main CfgPatches + BettIR_Config base device classes
  include/
    core.hpp                 BETTIR_DEBUG (true → systemChat debug), MRADTODEG()
    CfgFunctions.hpp         BettIR_Attachments_fnc_* registration
    CfgUserActions.hpp       keybinds: PowerButton_1/2, ToggleMode_1/2 (Shift+L / Ctrl+L)
    presets/*.hpp            light/laser property macros for hardware shared between mods: dbal_a2, peq15, peq2, ngal, general
                             (mod-only devices keep their presets next to the compat, e.g. compat/cup/presets.hpp)
  functions/                 core framework (fnc_*.sqf)
  compat/<mod>/              one sub-addon per supported mod, each with its own config.cpp
    core/     vanilla acc_pointer_IR → DBAL A2          (BettIR_DBALA2_fnc_*)
    ace/      ACE green DBAL + ACE SPIR                  (BettIR_ACE_Compat_fnc_*)
    rhsusf/   PEQ-15 (side/top/combo/WMX), PEQ-16A, M952V, WMX (BettIR_Compat_RHSUSF_*_fnc_*)
    tierone/  Tier1 NGAL + LA5 (many handguard variants, macro-generated) (BettIR_tierOne_Compat_fnc_*)
    cup/      PEQ-15 (+flashlight combo), PEQ-2 (+combo), LLM01, LLM MKIII (BettIR_Compat_CUP_*_fnc_*), see bottom
```

Each compat `config.cpp` has its own `CfgPatches` with `skipWhenMissingDependencies = 1`, so it only loads when the target mod is present. The standard compat file set is `config.cpp`, `CfgWeapons.hpp`, `CfgFunctions.hpp`, `rails.hpp`, `macros.hpp` and `functions/`.

## Core concepts

### `BettIR_Config >> CompatibleAttachments >> <CfgWeapons classname>`
Every variant classname that the framework should recognise needs an entry here, with the **same name as the CfgWeapons class**. Fields:

| field | meaning |
|---|---|
| `macroClass` | String naming the device "family". It must itself be a class in `CompatibleAttachments`. Usually it is the family's base variant. All variants of one physical device share it. |
| `classParser` | Name of the SQF function (compiled with `call compile`): `[className] → HashMap` of settings |
| `classComposer` | Name of the SQF function: `[HashMap] → className` |
| `onActivate` / `onDeactivate` | Code string for power button press/release. Params `[_unit, _buttonIndex]` |
| `onToggleModePrimary` / `onToggleModeSecondary` | Code string for Shift+L / Ctrl+L. Params `[_unit]` |
| `onStepperUp/Down` | unused |
| `class Configurable` | Setting groups. Each group has `displayName` and `defaultValue`, and one subclass per value (each with `displayName`) |

Variants normally just do `class foo_variant: foo_base {};` to inherit everything.

Base classes in the main `config.cpp`:
- `BettIR_Base_DBALA2`: MasterMode (IRLaser/VisLaser/IRLaserIlluminator/IRIlluminator), PowerMode (HI/LO), Focus (25/50/75/100MRAD). Double-tap activate. Primary toggle is MasterMode, secondary is PowerMode.
- `BettIR_Base_PEQ15`: MasterMode VIS/AL/DL/AH/IH/DH and Focus. No secondary toggle.
- `BettIR_Base_NGAL`: MasterMode VisAH/VisAL/AL/DL/AH/IH/DH, Focus with 105MRAD.
- `*_GenericFlashlightCombo`: adds a `Device` group (Laser/Flashlight), the combo activate scripts, and a secondary toggle that switches Device.

Compat configs forward-declare these (`class BettIR_Base_PEQ15: BettIR_Base_DBALA2 { class Configurable; };`) before inheriting.

### Settings map
- This is a HashMap of setting name → value (a string matching a `Configurable` subclass name). It also holds the reserved key `"__BETTIR_MACRO"` (the macroClass).
- It is stored on the unit as `_unit setVariable ["BettIR_primaryWeaponAttachment", toArray _map]`, i.e. `[[keys],[values]]`. Read it back with `(_a#0) createHashMapFromArray (_a#1)`.
- The parser only returns the settings that it can read from the classname. The framework merges that result over the defaults and previous values, so settings that don't appear in the name (e.g. Focus while in AH mode) are kept.
- Composers usually build `_macro + "_" + mode [+ "_" + focus] [+ suffix]` and return `_macro` itself for the default mode.

### Runtime flow (primary weapon only)
1. `fnc_postInit` (client only) sets the default activate scripts in `localNamespace` (`BETTIR_PRIMARY_POWER_ACTIVATE_SCRIPT` / `_DEACTIVATE_SCRIPT`), registers the CBA `loadout` player EH, and hooks the vanilla `headlights` user action.
2. `fnc_onLoadoutUpdated` looks at primary weapon pointer slot (`loadout#0#2`), or the optic slot (`#3`) only when the pointer slot is empty. If the item is compatible and its macro differs from the previous one, it:
   - prefills the settings map from `defaultValue`s
   - compiles and stores `onActivate`/`onDeactivate` from the *item's* entry
   - rebuilds the ACE self-interactions (`BettIR > Primary > <group> > <value>`).
   Then it merges the parser output and saves the map.
3. Power key → `fnc_onPowerButtonActivate`: toggles `IRLaserOn`/`GunLightOn` for button 0 when vanilla L isn't held, then calls the stored activate script. Double-tap (≤0.35 s) keeps the device on (`BettIR_keepPrimaryDeviceOn`).
4. Mode key → `fnc_onModeToggle` reads `onToggleMode*` from the **macro's** entry. `fnc_defaultToggleMode [unit, groupName]` cycles to the next value.
5. `fnc_changeConfigurableAttachment [unit, key, value, reenable, announce]` updates the map, runs the composer, hints, then calls `fnc_switchAttachmentVariant`. That function turns the device off, calls `addPrimaryWeaponItem newClass`, sleeps 0.1 s (the engine won't refresh laser params in the same frame) and turns the device back on.

Other helpers:
- `fnc_getMacro`, `fnc_isCompatibleAttachment`, `fnc_getConfigurableClasses/Values`: config lookups.
- `fnc_generateCombinations [className]`: dev tool. Enumerates all composer outputs and copies them to the clipboard. Useful for checking that CfgWeapons, rails and CompatibleAttachments list the same classes.
- `fnc_canUnitUseLaserDevice`: alive, primary weapon selected, not on an underbarrel muzzle.

### Adding a device (checklist)
For every variant classname, all three of these must stay in sync:
1. **CfgWeapons**: the variant class, usually inheriting from the base item, overriding `ItemInfo >> Pointer` and/or `Flashlight` with a `presets/*.hpp` macro. Set `baseWeapon` to the base item. Hide it with `scope=1` / `scopeArsenal=1`. Clear `MRT_SwitchItem*` (ACE/MRT switching) so it doesn't fight BettIR.
2. **rails.hpp**: add it to `asdg_FrontSideRail >> compatibleItems` and `PointerSlot_Rail >> compatibleItems` (plus any mod-specific slot classes), or the weapon will reject the swapped item.
3. **CompatibleAttachments** entry pointing at the right macroClass.

Then:
- Write a parser and composer that round-trip every variant (compose(parse(x)) == x).
- Register them in the compat `CfgFunctions.hpp`; the function name is `<Tag>_fnc_<class>`.
- Illuminators use `ItemInfo >> Flashlight` with `irLight=1`, and `class Pointer {};` when there's no laser. Dual modes keep both.

## SQF / config gotchas used throughout
- String `==` is **case-insensitive**, but `in`, `find`, `isEqualTo` and HashMap keys are **case-sensitive**. That's why parsers call `toUpper`/`toLower` before `in [...]` checks. Config class lookups are case-insensitive.
- Code uses non-`private` `_vars` at the top level of functions. Match the surrounding style.
- Preprocessor: `##` for token pasting, `QUOTE()` is defined locally in tierone macros. Multi-line macros need a trailing `\` on every line.
- Height/handguard suffixes: RHS uses `_h`/`_sc` at the *end* of the classname (`fnc_getHeightVariant`), and PEQ-16A adds `_top` before them. Composers have to strip these and re-append them.
- `rhsusf/functions/fnc_peq15_railfix.sqf` overrides RHS's own `RHS_fnc_anpeq15_rail` so RHS stops swapping the item back to the base class.

## Known issues / oddities (observed, not fixed; verify before acting)
- `presets/dbal_a2.hpp` illuminator swaps `position = DIR; direction = POS;`, unlike peq15/ngal. It may be intentional, since engine flashlights use `position="flash dir"`.
- `compat/core/functions/fnc_onActivate/onDeactivate.sqf` are unregistered duplicates of the default double-tap scripts.
- Parsers store mode values in upper case (e.g. `"VISAH"`, not the `VisAH` class name). That works because `defaultToggleMode` compares with `toLower`, and config lookups and classnames ignore case. Any new `in [...]` check against these values has to use the upper-case form.
- `BETTIR_DEBUG` is `true` in `include/core.hpp`.

Rules that came out of earlier fixes (keep new code consistent with them):
- Every compat `CfgPatches` lists `"BettIR_Attachments"` in `requiredAddons`, because the compat configs inherit the base classes defined there.
- Height or handguard variants (e.g. `_h`/`_sc`) must inherit from their *own* suffixed macro class, not from the unsuffixed base. Otherwise `macroClass` resolves to the wrong family.
- Every `defaultValue` must name an existing subclass of its `Configurable` group.
- Rail macros must list every variant that the CfgWeapons and CompatibleAttachments macros generate. Compare them focus by focus (25/50/75/100 or 105).
- `macroClass` must name a class that exists in `CompatibleAttachments` (normally the head itself: `macroClass = QUOTE(BASE)` inside the registration macro). Every runtime lookup (`onModeToggle`, `changeConfigurableAttachment`, `defaultToggleMode`, `generateInteractions`) goes through `CompatibleAttachments >> macro`, so a made-up family name silently disables the whole device.
- `fnc_generateInteractions` reads the macro from the unit's stored settings map, so `fnc_onLoadoutUpdated` has to save the map before (re)generating the ACE menu. Keep that order.
- Illuminator memory points: use the laser's points (`"laser pos","laser dir"`) unless the model has real flashlight points that CUP/RHS themselves use (LLM01/MKIII use `"flash dir","flash"`). Points that don't exist on the p3d give an invisible light.

## CUP compat (`compat/cup/`)
Branch `feat/cup-compat`. Mirrors CUP's real class tree: every real class is re-opened with its REAL parent (`BETTIR_CUP_HEAD*` in `macros.hpp`), never re-parented; the reference dump `cup-original-config.cpp` is git-ignored and only exists locally. Families and their `BettIR_Config` bases (all in `config.cpp`):
- `BettIR_CUP_PEQ15` / `BettIR_CUP_PEQ15_Combo`: standard PEQ-15 grammar; combos use the real `_L` head as macro and CUP's real `_F` white light as the Flashlight device (composer swaps the trailing `_L` for `_F`). No IR flashlight.
- `BettIR_CUP_PEQ2` / `_Combo`: IR only, MasterMode AL/AH/DL/DLH/DH (DLH = laser low + illuminator high), no illuminator-only mode.
- `BettIR_CUP_LLM`: LLM01 and LLM MKIII, standalone. MasterMode AH (IR laser, bare class), DH (+ IR light), VIS, DVIS (visible laser + CUP's white light). The light is one lamp with a white or IR diode: the IR preset is CUP's flashlight preset plus `irLight=1`, and there is no divergence, so the family shadows `Configurable` (no `: Configurable`) to drop the inherited Focus group. No Device group, secondary toggle unused.
Per device there is one macro per file kind (`BETTIR_CUP_CFGWEAPONS_*`, `BETTIR_CUP_CONFIG_*`, `BETTIR_CUP_RAILS_*`) with the suffix list written out explicitly; keep the three lists identical. `_check_consistency.sh` is a rough static checker, not proof of correctness.
