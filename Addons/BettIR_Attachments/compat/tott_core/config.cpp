class CfgPatches {
    class BettIR_Attachments_Compat_TOTT_Core {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with TOTT";
        units[]={};
        weapons[]={};
        requiredVersion=2.14;
        requiredAddons[]={"tott_core"};
        skipWhenMissingDependencies = 1;
    };
};

class BettIR_Config {
    class CompatibleAttachments {
        class BettIR_Base_DBALA2;
        class BettIR_Base_PEQ15: BettIR_Base_DBALA2 {
            class Configurable;
        };

        class BettIR_Base_NGAL: BettIR_Base_DBALA2 {
            class Configurable;
        };

        class BettIR_Base_PEQ15_GenericFlashlightCombo: BettIR_Base_PEQ15 {};
        class BettIR_Base_NGAL_GenericFlashlightCombo: BettIR_Base_NGAL {};

        class TOTT_Base_PEQ15: BettIR_Base_PEQ15 {
            classParser="BettIR_Attachments_Compat_TOTT_Core_fnc_peq15_parseClass";
            classComposer="BettIR_Attachments_Compat_TOTT_Core_fnc_peq15_composeClass";
        };

        class TOTT_Base_NGAL: BettIR_Base_NGAL {
            classParser="BettIR_Attachments_Compat_TOTT_Core_fnc_ngal_parseClass";
            classComposer="BettIR_Attachments_Compat_TOTT_Core_fnc_ngal_composeClass";
        };

        class TOTT_Base_PEQ15_Combo: BettIR_Base_PEQ15_GenericFlashlightCombo {
            classParser="BettIR_Attachments_Compat_TOTT_Core_fnc_peq15_combo_parseClass";
            classComposer="BettIR_Attachments_Compat_TOTT_Core_fnc_peq15_combo_composeClass";
        };

        class TOTT_Base_NGAL_Combo: BettIR_Base_NGAL_GenericFlashlightCombo {
            classParser="BettIR_Attachments_Compat_TOTT_Core_fnc_ngal_combo_parseClass";
            classComposer="BettIR_Attachments_Compat_TOTT_Core_fnc_ngal_combo_composeClass";
        };
    };
};
