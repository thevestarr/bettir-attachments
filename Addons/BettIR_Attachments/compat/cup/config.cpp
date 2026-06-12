class CfgPatches {
    class BettIR_Attachments_Compat_CUP {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with CUP Weapons";
        units[]={};
        weapons[]={};
        requiredVersion=2.14;
        requiredAddons[]={"CUP_Weapons_West_Attachments"};
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
        // ===== AN/PEQ-15 standalone =====
        class CUP_acc_ANPEQ_15: BettIR_Base_PEQ15 {
            macroClass = "CUP_acc_ANPEQ_15";
            classParser="BettIR_Compat_CUP_PEQ15_fnc_parseClass";
            classComposer="BettIR_Compat_CUP_PEQ15_fnc_composeClass";
            onActivate="_this spawn BettIR_Attachments_fnc_defaultActivateDoubleTap";
            onDeactivate="_this spawn BettIR_Attachments_fnc_defaultDeactivateDoubleTap";
        };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15, CUP_acc_ANPEQ_15)

        class CUP_acc_ANPEQ_15_Black: CUP_acc_ANPEQ_15 { macroClass = "CUP_acc_ANPEQ_15_Black"; };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Black, CUP_acc_ANPEQ_15_Black)

        class CUP_acc_ANPEQ_15_OD: CUP_acc_ANPEQ_15 { macroClass = "CUP_acc_ANPEQ_15_OD"; };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_OD, CUP_acc_ANPEQ_15_OD)

        class CUP_acc_ANPEQ_15_Tan_Top: CUP_acc_ANPEQ_15 { macroClass = "CUP_acc_ANPEQ_15_Tan_Top"; };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Tan_Top, CUP_acc_ANPEQ_15_Tan_Top)

        class CUP_acc_ANPEQ_15_Black_Top: CUP_acc_ANPEQ_15 { macroClass = "CUP_acc_ANPEQ_15_Black_Top"; };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Black_Top, CUP_acc_ANPEQ_15_Black_Top)

        class CUP_acc_ANPEQ_15_OD_Top: CUP_acc_ANPEQ_15 { macroClass = "CUP_acc_ANPEQ_15_OD_Top"; };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_OD_Top, CUP_acc_ANPEQ_15_OD_Top)

        // ===== AN/PEQ-15 combos =====
        class CUP_acc_ANPEQ_15_Flashlight_Tan_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_15_Flashlight_Tan";
            classParser   = "BettIR_Compat_CUP_PEQ15_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ15_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class Device: Device {
                    class Laser { displayName="AN/PEQ-15"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Flashlight_Tan_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L)
        class CUP_acc_ANPEQ_15_Flashlight_Tan_F: CUP_acc_ANPEQ_15_Flashlight_Tan_L {};
        class CUP_acc_ANPEQ_15_Flashlight_Tan_F_ir: CUP_acc_ANPEQ_15_Flashlight_Tan_L {};

        class CUP_acc_ANPEQ_15_Flashlight_OD_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_15_Flashlight_OD";
            classParser   = "BettIR_Compat_CUP_PEQ15_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ15_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class Device: Device {
                    class Laser { displayName="AN/PEQ-15"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Flashlight_OD_L, CUP_acc_ANPEQ_15_Flashlight_OD_L)
        class CUP_acc_ANPEQ_15_Flashlight_OD_F: CUP_acc_ANPEQ_15_Flashlight_OD_L {};
        class CUP_acc_ANPEQ_15_Flashlight_OD_F_ir: CUP_acc_ANPEQ_15_Flashlight_OD_L {};

        class CUP_acc_ANPEQ_15_Flashlight_Black_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_15_Flashlight_Black";
            classParser   = "BettIR_Compat_CUP_PEQ15_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ15_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class Device: Device {
                    class Laser { displayName="AN/PEQ-15"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Flashlight_Black_L, CUP_acc_ANPEQ_15_Flashlight_Black_L)
        class CUP_acc_ANPEQ_15_Flashlight_Black_F: CUP_acc_ANPEQ_15_Flashlight_Black_L {};
        class CUP_acc_ANPEQ_15_Flashlight_Black_F_ir: CUP_acc_ANPEQ_15_Flashlight_Black_L {};

        class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_15_Top_Flashlight_Tan";
            classParser   = "BettIR_Compat_CUP_PEQ15_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ15_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class Device: Device {
                    class Laser { displayName="AN/PEQ-15"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L, CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L)
        class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L {};
        class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F_ir: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L {};

        class CUP_acc_ANPEQ_15_Top_Flashlight_OD_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_15_Top_Flashlight_OD";
            classParser   = "BettIR_Compat_CUP_PEQ15_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ15_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class Device: Device {
                    class Laser { displayName="AN/PEQ-15"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L, CUP_acc_ANPEQ_15_Top_Flashlight_OD_L)
        class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L {};
        class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F_ir: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L {};

        class CUP_acc_ANPEQ_15_Top_Flashlight_Black_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_15_Top_Flashlight_Black";
            classParser   = "BettIR_Compat_CUP_PEQ15_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ15_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class Device: Device {
                    class Laser { displayName="AN/PEQ-15"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ15_REG(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L, CUP_acc_ANPEQ_15_Top_Flashlight_Black_L)
        class CUP_acc_ANPEQ_15_Top_Flashlight_Black_F: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L {};
        class CUP_acc_ANPEQ_15_Top_Flashlight_Black_F_ir: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L {};

        // ===== AN/PEQ-2 standalone (IR-only) =====
        class CUP_acc_ANPEQ_2_grey: BettIR_Base_PEQ15 {
            macroClass = "CUP_acc_ANPEQ_2_grey";
            classParser="BettIR_Compat_CUP_PEQ2_fnc_parseClass";
            classComposer="BettIR_Compat_CUP_PEQ2_fnc_composeClass";
            onActivate="_this spawn BettIR_Attachments_fnc_defaultActivateDoubleTap";
            onDeactivate="_this spawn BettIR_Attachments_fnc_defaultDeactivateDoubleTap";
            class Configurable: Configurable {
                class MasterMode {
                    displayName = "Master Mode";
                    defaultValue = "AH";
                    class AH { displayName = "Aim High"; };
                    class AL { displayName = "Aim Low"; };
                    class IH { displayName = "Illuminator"; };
                    class DH { displayName = "Dual High"; };
                    class DL { displayName = "Dual Low"; };
                };
            };
        };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_grey, CUP_acc_ANPEQ_2_grey)
        class CUP_acc_ANPEQ_2_desert: CUP_acc_ANPEQ_2_grey { macroClass="CUP_acc_ANPEQ_2_desert"; };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_desert, CUP_acc_ANPEQ_2_desert)
        class CUP_acc_ANPEQ_2_camo: CUP_acc_ANPEQ_2_grey { macroClass="CUP_acc_ANPEQ_2_camo"; };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_camo, CUP_acc_ANPEQ_2_camo)
        class CUP_acc_ANPEQ_2_Black_Top: CUP_acc_ANPEQ_2_grey { macroClass="CUP_acc_ANPEQ_2_Black_Top"; };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_Black_Top, CUP_acc_ANPEQ_2_Black_Top)
        class CUP_acc_ANPEQ_2_Coyote_Top: CUP_acc_ANPEQ_2_grey { macroClass="CUP_acc_ANPEQ_2_Coyote_Top"; };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_Coyote_Top, CUP_acc_ANPEQ_2_Coyote_Top)
        class CUP_acc_ANPEQ_2_OD_Top: CUP_acc_ANPEQ_2_grey { macroClass="CUP_acc_ANPEQ_2_OD_Top"; };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_OD_Top, CUP_acc_ANPEQ_2_OD_Top)

        // ===== AN/PEQ-2 combos (IR-only laser side) =====
        class CUP_acc_ANPEQ_2_Flashlight_Black_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_2_Flashlight_Black";
            classParser   = "BettIR_Compat_CUP_PEQ2_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ2_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class MasterMode {
                    displayName="Master Mode";
                    defaultValue="AH";
                    class AH { displayName="Aim High"; };
                    class AL { displayName="Aim Low"; };
                    class IH { displayName="Illuminator"; };
                    class DH { displayName="Dual High"; };
                    class DL { displayName="Dual Low"; };
                };
                class Device: Device {
                    class Laser { displayName="AN/PEQ-2"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_Flashlight_Black_L, CUP_acc_ANPEQ_2_Flashlight_Black_L)
        class CUP_acc_ANPEQ_2_Flashlight_Black_F: CUP_acc_ANPEQ_2_Flashlight_Black_L {};
        class CUP_acc_ANPEQ_2_Flashlight_Black_F_ir: CUP_acc_ANPEQ_2_Flashlight_Black_L {};

        class CUP_acc_ANPEQ_2_Flashlight_OD_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_2_Flashlight_OD";
            classParser   = "BettIR_Compat_CUP_PEQ2_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ2_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class MasterMode {
                    displayName="Master Mode";
                    defaultValue="AH";
                    class AH { displayName="Aim High"; };
                    class AL { displayName="Aim Low"; };
                    class IH { displayName="Illuminator"; };
                    class DH { displayName="Dual High"; };
                    class DL { displayName="Dual Low"; };
                };
                class Device: Device {
                    class Laser { displayName="AN/PEQ-2"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_Flashlight_OD_L, CUP_acc_ANPEQ_2_Flashlight_OD_L)
        class CUP_acc_ANPEQ_2_Flashlight_OD_F: CUP_acc_ANPEQ_2_Flashlight_OD_L {};
        class CUP_acc_ANPEQ_2_Flashlight_OD_F_ir: CUP_acc_ANPEQ_2_Flashlight_OD_L {};

        class CUP_acc_ANPEQ_2_Flashlight_Coyote_L: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "CUP_acc_ANPEQ_2_Flashlight_Coyote";
            classParser   = "BettIR_Compat_CUP_PEQ2_Combo_fnc_parseClass";
            classComposer = "BettIR_Compat_CUP_PEQ2_Combo_fnc_composeClass";
            class Configurable: Configurable {
                class MasterMode {
                    displayName="Master Mode";
                    defaultValue="AH";
                    class AH { displayName="Aim High"; };
                    class AL { displayName="Aim Low"; };
                    class IH { displayName="Illuminator"; };
                    class DH { displayName="Dual High"; };
                    class DL { displayName="Dual Low"; };
                };
                class Device: Device {
                    class Laser { displayName="AN/PEQ-2"; };
                    class Flashlight { displayName="Flashlight"; };
                };
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White { displayName="White"; };
                    class IR { displayName="Infrared"; };
                };
            };
        };
        BETTIR_CUP_PEQ2_REG(CUP_acc_ANPEQ_2_Flashlight_Coyote_L, CUP_acc_ANPEQ_2_Flashlight_Coyote_L)
        class CUP_acc_ANPEQ_2_Flashlight_Coyote_F: CUP_acc_ANPEQ_2_Flashlight_Coyote_L {};
        class CUP_acc_ANPEQ_2_Flashlight_Coyote_F_ir: CUP_acc_ANPEQ_2_Flashlight_Coyote_L {};
    };
};
