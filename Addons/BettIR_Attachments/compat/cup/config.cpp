class CfgPatches {
    class BettIR_Attachments_Compat_CUP {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with CUP Weapons";
        units[]={};
        weapons[]={};
        requiredVersion=2.14;
        requiredAddons[]={"BettIR_Attachments", "CUP_Weapons_West_Attachments"};
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"
#include "rails.hpp"

class BettIR_Config {
    class CompatibleAttachments {
        class BettIR_Base_DBALA2;
        class BettIR_Base_PEQ15: BettIR_Base_DBALA2 {
            class Configurable;
        };
        class BettIR_Base_PEQ15_GenericFlashlightCombo: BettIR_Base_PEQ15 {
            class Configurable: Configurable {
                class Device;
            };
        };

        // ============================================================
        //  CUP device families. Each head registers itself as its own
        //  macroClass through the BETTIR_CUP_CONFIG_* macros (macros.hpp)
        //  and inherits parser / composer / settings from one of these.
        // ============================================================

        // AN/PEQ-15: VIS / AL / DL / AH / IH / DH + Focus (from BettIR_Base_PEQ15)
        class BettIR_CUP_PEQ15: BettIR_Base_PEQ15 {
            classParser="BettIR_Compat_CUP_PEQ15_fnc_parseClass";
            classComposer="BettIR_Compat_CUP_PEQ15_fnc_composeClass";
        };

        // AN/PEQ-15 + white flashlight: primary button = laser (double tap),
        // secondary button = momentary flashlight, Ctrl+L = Device
        class BettIR_CUP_PEQ15_Combo: BettIR_Base_PEQ15_GenericFlashlightCombo {
            classParser="BettIR_Compat_CUP_PEQ15_Combo_fnc_parseClass";
            classComposer="BettIR_Compat_CUP_PEQ15_Combo_fnc_composeClass";

            class Configurable: Configurable {
                class Device: Device {
                    class Laser { displayName="AN/PEQ-15"; };
                    class Flashlight { displayName="Flashlight"; };
                };
            };
        };

        // AN/PEQ-2: IR only. The illuminator never runs on its own.
        class BettIR_CUP_PEQ2: BettIR_Base_PEQ15 {
            classParser="BettIR_Compat_CUP_PEQ2_fnc_parseClass";
            classComposer="BettIR_Compat_CUP_PEQ2_fnc_composeClass";

            class Configurable: Configurable {
                class MasterMode {
                    displayName="Master Mode";
                    defaultValue="AH";
                    class AL  { displayName="Aim Low"; };
                    class AH  { displayName="Aim High"; };
                    class DL  { displayName="Dual Low"; };            // laser low + illuminator low
                    class DLH { displayName="Dual Low / High"; };     // laser low + illuminator high
                    class DH  { displayName="Dual High"; };           // laser high + illuminator high
                };
            };
        };

        // AN/PEQ-2 + white flashlight
        class BettIR_CUP_PEQ2_Combo: BettIR_CUP_PEQ2 {
            classParser="BettIR_Compat_CUP_PEQ2_Combo_fnc_parseClass";
            classComposer="BettIR_Compat_CUP_PEQ2_Combo_fnc_composeClass";

            onToggleModeSecondary="[_this select 0, 'Device'] spawn BettIR_Attachments_fnc_defaultToggleMode";
            onActivate="_this spawn BettIR_Attachments_fnc_defaultActivateCombo";
            onDeactivate="_this spawn BettIR_Attachments_fnc_defaultDeactivateCombo";

            class Configurable: Configurable {
                class Device {
                    displayName="Device";
                    defaultValue="Laser";
                    class Laser { displayName="AN/PEQ-2"; };
                    class Flashlight { displayName="Flashlight"; };
                };
            };
        };

        // LLM01 / LLM MKIII: one device with laser and an integrated light that
        // is either white or IR (same lamp, no divergence setting, so no Focus
        // group). Only the primary button is used; Ctrl+L does nothing (inherited "").
        class BettIR_CUP_LLM: BettIR_Base_PEQ15 {
            classParser="BettIR_Compat_CUP_LLM_fnc_parseClass";
            classComposer="BettIR_Compat_CUP_LLM_fnc_composeClass";

            // fresh Configurable (not ": Configurable") so Focus is not inherited
            class Configurable {
                class MasterMode {
                    displayName="Master Mode";
                    defaultValue="AH";
                    class AH   { displayName="IR Laser"; };
                    class DH   { displayName="IR Laser + IR Light"; };
                    class VIS  { displayName="Visible Laser"; };
                    class DVIS { displayName="Visible Laser + Light"; };
                };
            };
        };

        // ===== AN/PEQ-15 standalone =====
        BETTIR_CUP_CONFIG_PEQ15(CUP_acc_ANPEQ_15)
        BETTIR_CUP_CONFIG_PEQ15(CUP_acc_ANPEQ_15_Black)
        BETTIR_CUP_CONFIG_PEQ15(CUP_acc_ANPEQ_15_OD)
        BETTIR_CUP_CONFIG_PEQ15(CUP_acc_ANPEQ_15_Tan_Top)
        BETTIR_CUP_CONFIG_PEQ15(CUP_acc_ANPEQ_15_Black_Top)
        BETTIR_CUP_CONFIG_PEQ15(CUP_acc_ANPEQ_15_OD_Top)

        // ===== AN/PEQ-15 + flashlight combos =====
        BETTIR_CUP_CONFIG_PEQ15_COMBO(CUP_acc_ANPEQ_15_Flashlight_Tan_L, CUP_acc_ANPEQ_15_Flashlight_Tan_F)
        BETTIR_CUP_CONFIG_PEQ15_COMBO(CUP_acc_ANPEQ_15_Flashlight_OD_L, CUP_acc_ANPEQ_15_Flashlight_OD_F)
        BETTIR_CUP_CONFIG_PEQ15_COMBO(CUP_acc_ANPEQ_15_Flashlight_Black_L, CUP_acc_ANPEQ_15_Flashlight_Black_F)
        BETTIR_CUP_CONFIG_PEQ15_COMBO(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L, CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F)
        BETTIR_CUP_CONFIG_PEQ15_COMBO(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L, CUP_acc_ANPEQ_15_Top_Flashlight_OD_F)
        BETTIR_CUP_CONFIG_PEQ15_COMBO(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L, CUP_acc_ANPEQ_15_Top_Flashlight_Black_F)

        // ===== AN/PEQ-2 standalone =====
        BETTIR_CUP_CONFIG_PEQ2(CUP_acc_ANPEQ_2_grey)
        BETTIR_CUP_CONFIG_PEQ2(CUP_acc_ANPEQ_2_desert)
        BETTIR_CUP_CONFIG_PEQ2(CUP_acc_ANPEQ_2_camo)
        BETTIR_CUP_CONFIG_PEQ2(CUP_acc_ANPEQ_2_Black_Top)
        BETTIR_CUP_CONFIG_PEQ2(CUP_acc_ANPEQ_2_Coyote_Top)
        BETTIR_CUP_CONFIG_PEQ2(CUP_acc_ANPEQ_2_OD_Top)

        // ===== AN/PEQ-2 + flashlight combos =====
        BETTIR_CUP_CONFIG_PEQ2_COMBO(CUP_acc_ANPEQ_2_Flashlight_Black_L, CUP_acc_ANPEQ_2_Flashlight_Black_F)
        BETTIR_CUP_CONFIG_PEQ2_COMBO(CUP_acc_ANPEQ_2_Flashlight_Coyote_L, CUP_acc_ANPEQ_2_Flashlight_Coyote_F)
        BETTIR_CUP_CONFIG_PEQ2_COMBO(CUP_acc_ANPEQ_2_Flashlight_OD_L, CUP_acc_ANPEQ_2_Flashlight_OD_F)

        // ===== LLM01 =====
        BETTIR_CUP_CONFIG_LLM(CUP_acc_LLM01_L)
        BETTIR_CUP_CONFIG_LLM(CUP_acc_LLM01_coyote_L)
        BETTIR_CUP_CONFIG_LLM(CUP_acc_LLM01_desert_L)
        BETTIR_CUP_CONFIG_LLM(CUP_acc_LLM01_hex_L)
        BETTIR_CUP_CONFIG_LLM(CUP_acc_LLM01_od_L)

        // ===== LLM MKIII =====
        BETTIR_CUP_CONFIG_LLM(CUP_acc_LLM)
        BETTIR_CUP_CONFIG_LLM(CUP_acc_LLM_black)
        BETTIR_CUP_CONFIG_LLM(CUP_acc_LLM_od)
    };
};
