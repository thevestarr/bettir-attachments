params ["_composableMap"];

_device = _composableMap get "Device";

if (_device == "Laser") exitWith {
    [_composableMap] call BettIR_Compat_RHSUSF_peq15_fnc_composeClass;
};

_macro = _composableMap get "__BETTIR_MACRO";
_flashlightOutput = _composableMap getOrDefault ["FlashlightOutput", "White"];
([_macro] call BettIR_Compat_RHSUSF_fnc_getHeightVariant) params ["_baseMacro", "_suffix"];

// RHS uses three variants of PEQ-15 (with no, _h and _sc suffix)
// which accounts for diffent handguard shapes
// sadly it needs to be at the end so it needs a little charade

_splitMacro = _baseMacro splitString "_";
_lastEntry = _splitMacro # ((count _splitMacro) - 1);

_finalClassNameArray = [
    _baseMacro,
    "light"
];

if (_flashlightOutput == "IR") then {
    _finalClassNameArray pushBack "ir";
};

if (_suffix != "") then {
    _finalClassNameArray pushBack _suffix;
};

_finalClassName = _finalClassNameArray joinString "_";

_finalClassName;
