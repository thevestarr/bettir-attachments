class CfgPatches {
    class BettIR_Attachments_Compat_RHSUSF {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with RHS USAF";
        units[]={};
        weapons[]={"acc_pointer_IR"};
        requiredVersion=2.14;
        requiredAddons[]={"rhsusf_main_loadorder"};
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

        // PEQ-15
        class rhsusf_acc_anpeq15side: BettIR_Base_PEQ15 {
            macroClass = "rhsusf_acc_anpeq15side";
            classParser="BettIR_Compat_RHSUSF_peq15_fnc_parseClass";
            classComposer="BettIR_Compat_RHSUSF_peq15_fnc_composeClass";

            onActivate="_this spawn BettIR_Attachments_fnc_defaultActivateDoubleTap";
            onDeactivate="_this spawn BettIR_Attachments_fnc_defaultDeactivateDoubleTap";
        };

        class rhsusf_acc_anpeq15side_al: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_vis: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_ih_25MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_ih_50MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_ih_75MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_ih_100MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_dh_25MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_dh_50MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_dh_75MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_dh_100MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_dl_25MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_dl_50MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_dl_75MRAD: rhsusf_acc_anpeq15side {};
        class rhsusf_acc_anpeq15side_dl_100MRAD: rhsusf_acc_anpeq15side {};

        class rhsusf_acc_anpeq15side_bk: rhsusf_acc_anpeq15side {
            macroClass = "rhsusf_acc_anpeq15side_bk";
        };
        class rhsusf_acc_anpeq15side_bk_al: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_vis: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_ih_25MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_ih_50MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_ih_75MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_ih_100MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_dh_25MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_dh_50MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_dh_75MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_dh_100MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_dl_25MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_dl_50MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_dl_75MRAD: rhsusf_acc_anpeq15side_bk {};
        class rhsusf_acc_anpeq15side_bk_dl_100MRAD: rhsusf_acc_anpeq15side_bk {};

        
        class rhsusf_acc_anpeq15_top: rhsusf_acc_anpeq15side {
            macroClass = "rhsusf_acc_anpeq15_top";
        };
        class rhsusf_acc_anpeq15_top_al: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_vis: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_ih_25MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_ih_50MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_ih_75MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_ih_100MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_dh_25MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_dh_50MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_dh_75MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_dh_100MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_dl_25MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_dl_50MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_dl_75MRAD: rhsusf_acc_anpeq15_top {};
        class rhsusf_acc_anpeq15_top_dl_100MRAD: rhsusf_acc_anpeq15_top {};

        // _h and _sc variants for rhsusf_acc_anpeq15_top
        class rhsusf_acc_anpeq15_top_h: rhsusf_acc_anpeq15_top {
            macroClass="rhsusf_acc_anpeq15_top_h";
        };
        class rhsusf_acc_anpeq15_top_al_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_vis_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_ih_25MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_ih_50MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_ih_75MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_ih_100MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_dh_25MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_dh_50MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_dh_75MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_dh_100MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_dl_25MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_dl_50MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_dl_75MRAD_h: rhsusf_acc_anpeq15_top_h {};
        class rhsusf_acc_anpeq15_top_dl_100MRAD_h: rhsusf_acc_anpeq15_top_h {};

        class rhsusf_acc_anpeq15_top_sc: rhsusf_acc_anpeq15_top {
            macroClass="rhsusf_acc_anpeq15_top_sc";
        };
        class rhsusf_acc_anpeq15_top_al_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_vis_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_ih_25MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_ih_50MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_ih_75MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_ih_100MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_dh_25MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_dh_50MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_dh_75MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_dh_100MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_dl_25MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_dl_50MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_dl_75MRAD_sc: rhsusf_acc_anpeq15_top_sc {};
        class rhsusf_acc_anpeq15_top_dl_100MRAD_sc: rhsusf_acc_anpeq15_top_sc {};

        class rhsusf_acc_anpeq15_bk_top: rhsusf_acc_anpeq15_top {
            macroClass = "rhsusf_acc_anpeq15_bk_top";
        };
        class rhsusf_acc_anpeq15_bk_top_al: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_vis: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_ih_25MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_ih_50MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_ih_75MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_ih_100MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_dh_25MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_dh_50MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_dh_75MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_dh_100MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_dl_25MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_dl_50MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_dl_75MRAD: rhsusf_acc_anpeq15_bk_top {};
        class rhsusf_acc_anpeq15_bk_top_dl_100MRAD: rhsusf_acc_anpeq15_bk_top {};

        // _h and _sc variants for rhsusf_acc_anpeq15_bk_top
        class rhsusf_acc_anpeq15_bk_top_h: rhsusf_acc_anpeq15_bk_top {
            macroClass="rhsusf_acc_anpeq15_bk_top_h";
        };
        class rhsusf_acc_anpeq15_bk_top_al_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_vis_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_ih_25MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_ih_50MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_ih_75MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_ih_100MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_dh_25MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_dh_50MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_dh_75MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_dh_100MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_dl_25MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_dl_50MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_dl_75MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};
        class rhsusf_acc_anpeq15_bk_top_dl_100MRAD_h: rhsusf_acc_anpeq15_bk_top_h {};

        class rhsusf_acc_anpeq15_bk_top_sc: rhsusf_acc_anpeq15_bk_top {
            macroClass="rhsusf_acc_anpeq15_bk_top_sc";
        };
        class rhsusf_acc_anpeq15_bk_top_al_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_vis_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_ih_25MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_ih_50MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_ih_75MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_ih_100MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_dh_25MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_dh_50MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_dh_75MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_dh_100MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_dl_25MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_dl_50MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_dl_75MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};
        class rhsusf_acc_anpeq15_bk_top_dl_100MRAD_sc: rhsusf_acc_anpeq15_bk_top_sc {};

        // // PEQ-15 combo 
        // class rhsusf_acc_anpeq15;
        // class rhsusf_acc_anpeq15_light; - light variant
        class BettIR_Base_PEQ15_GenericFlashlightCombo: BettIR_Base_PEQ15 {
            class Configurable: Configurable {
                class Device;
            };
        };

        class rhsusf_acc_anpeq15: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass = "rhsusf_acc_anpeq15";

            classParser="BettIR_Compat_RHSUSF_peq15_combo_fnc_parseClass";
            classComposer="BettIR_Compat_RHSUSF_peq15_combo_fnc_composeClass";

            class Configurable: Configurable {
                // rename the display names, but keep classnames the same to keep using the generic handler
                class Device: Device {
                    class Laser {
                        displayName="AN/PEQ-15";
                    };
                    class Flashlight {
                        displayName="M952V";
                    };
                };

                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White {
                        displayName="White";
                    };

                    class IR {
                        displayName="Infrared";
                    };
                };
            };
        };

        class rhsusf_acc_anpeq15_al: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_vis: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_ih_25MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_ih_50MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_ih_75MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_ih_100MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_dh_25MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_dh_50MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_dh_75MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_dh_100MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_dl_25MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_dl_50MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_dl_75MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_dl_100MRAD: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15 {};
        class rhsusf_acc_anpeq15_light_ir: rhsusf_acc_anpeq15 {};

        class rhsusf_acc_anpeq15_h: rhsusf_acc_anpeq15 {
            macroClass="rhsusf_acc_anpeq15_h";
        };
        class rhsusf_acc_anpeq15_al_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_vis_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_ih_25MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_ih_50MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_ih_75MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_ih_100MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_dh_25MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_dh_50MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_dh_75MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_dh_100MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_dl_25MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_dl_50MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_dl_75MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_dl_100MRAD_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_light_h: rhsusf_acc_anpeq15_h {};
        class rhsusf_acc_anpeq15_light_ir_h: rhsusf_acc_anpeq15_h {};

        class rhsusf_acc_anpeq15_sc: rhsusf_acc_anpeq15 {
            macroClass="rhsusf_acc_anpeq15_sc";
        };
        class rhsusf_acc_anpeq15_al_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_vis_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_ih_25MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_ih_50MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_ih_75MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_ih_100MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_dh_25MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_dh_50MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_dh_75MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_dh_100MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_dl_25MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_dl_50MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_dl_75MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_dl_100MRAD_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_light_sc: rhsusf_acc_anpeq15_sc {};
        class rhsusf_acc_anpeq15_light_ir_sc: rhsusf_acc_anpeq15_sc {};


        class rhsusf_acc_anpeq15_bk: rhsusf_acc_anpeq15 {
            macroClass="rhsusf_acc_anpeq15_bk";
        };
        class rhsusf_acc_anpeq15_bk_al: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_vis: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_ih_25MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_ih_50MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_ih_75MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_ih_100MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_dh_25MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_dh_50MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_dh_75MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_dh_100MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_dl_25MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_dl_50MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_dl_75MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_dl_100MRAD: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_light: rhsusf_acc_anpeq15_bk {};
        class rhsusf_acc_anpeq15_bk_light_ir: rhsusf_acc_anpeq15_bk {};

        class rhsusf_acc_anpeq15_bk_h: rhsusf_acc_anpeq15_bk {
            macroClass="rhsusf_acc_anpeq15_bk_h";
        };
        class rhsusf_acc_anpeq15_bk_al_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_vis_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_ih_25MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_ih_50MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_ih_75MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_ih_100MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_dh_25MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_dh_50MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_dh_75MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_dh_100MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_dl_25MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_dl_50MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_dl_75MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_dl_100MRAD_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_light_h: rhsusf_acc_anpeq15_bk_h {};
        class rhsusf_acc_anpeq15_bk_light_ir_h: rhsusf_acc_anpeq15_bk_h {};

        class rhsusf_acc_anpeq15_bk_sc: rhsusf_acc_anpeq15_bk {
            macroClass="rhsusf_acc_anpeq15_bk_sc";
        };
        class rhsusf_acc_anpeq15_bk_al_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_vis_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_ih_25MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_ih_50MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_ih_75MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_ih_100MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_dh_25MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_dh_50MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_dh_75MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_dh_100MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_dl_25MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_dl_50MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_dl_75MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_dl_100MRAD_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_light_sc: rhsusf_acc_anpeq15_bk_sc {};
        class rhsusf_acc_anpeq15_bk_light_ir_sc: rhsusf_acc_anpeq15_bk_sc {};


        class rhsusf_acc_anpeq16a: BettIR_Base_PEQ15 {   // adjust base if needed
            macroClass = "rhsusf_acc_anpeq16a";
            classParser = "BettIR_Compat_RHSUSF_peq16_fnc_parseClass";
            classComposer = "BettIR_Compat_RHSUSF_peq16_fnc_composeClass";
        
            class Configurable: Configurable {
                class MasterMode {
                    displayName = "Master Mode";
                    defaultValue = "AH";
                    // O and P modes omitted
                    class VIS   { displayName = "VIS Laser HI"; };
                    class LIGHT { displayName = "VIS Light"; };
                    class DVIS  { displayName = "VIS Dual"; };
                    class AL    { displayName = "Aim Low"; };
                    class DL    { displayName = "Dual Low"; };
                    class AH    { displayName = "Aim High"; };
                    class DH    { displayName = "Dual High"; };
                };
                class Focus {
                    displayName = "Illuminator Divergence";
                    defaultValue = "105MRAD";
    
                    class 25MRAD  { displayName = "25 MRAD"; };
                    class 50MRAD  { displayName = "50 MRAD"; };
                    class 75MRAD  { displayName = "75 MRAD"; };
                    class 105MRAD { displayName = "105 MRAD"; };
                };
            };
        };

        class rhsusf_acc_anpeq16a_vis: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_light: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dvis: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_al: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dl_25MRAD: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dl_50MRAD: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dl_75MRAD: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dl_105MRAD: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dh_25MRAD: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dh_50MRAD: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dh_75MRAD: rhsusf_acc_anpeq16a {};
        class rhsusf_acc_anpeq16a_dh_105MRAD: rhsusf_acc_anpeq16a {};

        class rhsusf_acc_anpeq16a_top: rhsusf_acc_anpeq16a {
            macroClass="rhsusf_acc_anpeq16a_top";
        };
        class rhsusf_acc_anpeq16a_vis_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_light_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dvis_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_al_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dl_25MRAD_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dl_50MRAD_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dl_75MRAD_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dl_105MRAD_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dh_25MRAD_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dh_50MRAD_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dh_75MRAD_top: rhsusf_acc_anpeq16a_top {};
        class rhsusf_acc_anpeq16a_dh_105MRAD_top: rhsusf_acc_anpeq16a_top {};

        class rhsusf_acc_anpeq16a_top_h: rhsusf_acc_anpeq16a_top {
            macroClass="rhsusf_acc_anpeq16a_top_h";
        };
        class rhsusf_acc_anpeq16a_vis_top_h:        rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_light_top_h:      rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dvis_top_h:       rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_al_top_h:         rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dl_25MRAD_top_h:  rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dl_50MRAD_top_h:  rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dl_75MRAD_top_h:  rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dl_105MRAD_top_h: rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dh_25MRAD_top_h:  rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dh_50MRAD_top_h:  rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dh_75MRAD_top_h:  rhsusf_acc_anpeq16a_top_h {};
        class rhsusf_acc_anpeq16a_dh_105MRAD_top_h: rhsusf_acc_anpeq16a_top_h {};

        class rhsusf_acc_anpeq16a_top_sc: rhsusf_acc_anpeq16a_top {
            macroClass="rhsusf_acc_anpeq16a_top_sc";
        };
        class rhsusf_acc_anpeq16a_vis_top_sc:        rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_light_top_sc:      rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dvis_top_sc:       rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_al_top_sc:         rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dl_25MRAD_top_sc:  rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dl_50MRAD_top_sc:  rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dl_75MRAD_top_sc:  rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dl_105MRAD_top_sc: rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dh_25MRAD_top_sc:  rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dh_50MRAD_top_sc:  rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dh_75MRAD_top_sc:  rhsusf_acc_anpeq16a_top_sc {};
        class rhsusf_acc_anpeq16a_dh_105MRAD_top_sc: rhsusf_acc_anpeq16a_top_sc {};

        class rhsusf_acc_M952V {
            macroClass="rhsusf_acc_M952V";
            classParser="BettIR_Compat_RHSUSF_irFlashlights_fnc_parseClass";
            classComposer="BettIR_Compat_RHSUSF_irFlashlights_fnc_composeClass";

            onActivate="_this spawn BettIR_Attachments_fnc_defaultActivateDoubleTap";
            onDeactivate="_this spawn BettIR_Attachments_fnc_defaultDeactivateDoubleTap";

            onToggleModePrimary="[_this select 0, 'Output'] spawn BettIR_Attachments_fnc_defaultToggleMode";
            onToggleModeSecondary="[_this select 0, 'Output'] spawn BettIR_Attachments_fnc_defaultToggleMode";
            
            onStepperUp="";
            onStepperDown="";

            class Configurable {
                class Output {
                    displayName="Output";
                    defaultValue="VIS";

                    class White {
                        displayName="White";
                    };

                    class IR {
                        displayName="Infrared";
                    };
                };
            };
        };

        class rhsusf_acc_M952V_ir: rhsusf_acc_M952V {};

        class rhsusf_acc_wmx: rhsusf_acc_M952V {
            macroClass="rhsusf_acc_wmx";
            
            onActivate="_this spawn BettIR_Compat_RHSUSF_wmx_fnc_onActivate";
            onDeactivate="_this spawn BettIR_Compat_RHSUSF_wmx_fnc_onDeactivate";
        };
        class rhsusf_acc_wmx_ir: rhsusf_acc_wmx {};

        class rhsusf_acc_wmx_bk: rhsusf_acc_wmx {
            macroClass="rhsusf_acc_wmx_bk";
        };
        class rhsusf_acc_wmx_bk_ir: rhsusf_acc_wmx_bk {};
    
        class rhsusf_acc_anpeq15_wmx: BettIR_Base_PEQ15_GenericFlashlightCombo {
            macroClass    = "rhsusf_acc_anpeq15_wmx";
            classParser   = "BettIR_Compat_RHSUSF_peq15_combo_fnc_parseClass";
            classComposer = "BettIR_Compat_RHSUSF_peq15_combo_fnc_composeClass";

            onActivate="[_this select 0, _this select 1, BettIR_Attachments_fnc_defaultActivateDoubleTap, BettIR_Compat_RHSUSF_wmx_fnc_onActivate] spawn BettIR_Attachments_fnc_defaultActivateCombo";
            onDeactivate="[_this select 0, _this select 1, BettIR_Attachments_fnc_defaultDeactivateDoubleTap, BettIR_Compat_RHSUSF_wmx_fnc_onDeactivate] spawn BettIR_Attachments_fnc_defaultDeactivateCombo";
        
            class Configurable: Configurable {
                class FlashlightOutput {
                    displayName="Flashlight Output";
                    defaultValue="White";
                    class White {
                        displayName="White";
                    };

                    class IR {
                        displayName="Infrared";
                    };
                };
            };
        };
        
        class rhsusf_acc_anpeq15_wmx_vis: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_al: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_25MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_50MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_75MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_100MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_25MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_50MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_75MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_100MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_25MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_50MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_75MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_100MRAD: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_light: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_light_ir: rhsusf_acc_anpeq15_wmx {};

        class rhsusf_acc_anpeq15_wmx_h: rhsusf_acc_anpeq15_wmx {
            macroClass="rhsusf_acc_anpeq15_wmx_h";
        };
        class rhsusf_acc_anpeq15_wmx_vis_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_al_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_25MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_50MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_75MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_100MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_25MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_50MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_75MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_100MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_25MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_50MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_75MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_100MRAD_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_light_h: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_light_ir_h: rhsusf_acc_anpeq15_wmx {};


        class rhsusf_acc_anpeq15_wmx_sc: rhsusf_acc_anpeq15_wmx {
            macroClass="rhsusf_acc_anpeq15_wmx_sc";
        };
        class rhsusf_acc_anpeq15_wmx_vis_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_al_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_25MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_50MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_75MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_ih_100MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_25MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_50MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_75MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dh_100MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_25MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_50MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_75MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_dl_100MRAD_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_light_sc: rhsusf_acc_anpeq15_wmx {};
        class rhsusf_acc_anpeq15_wmx_light_ir_sc: rhsusf_acc_anpeq15_wmx {};
    };
};
