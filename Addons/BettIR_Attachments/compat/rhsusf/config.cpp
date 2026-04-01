class CfgPatches {
    class BettIR_Attachments_Compat_RHSUSF {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with core game";
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
    class CompatibleLightAttachments {
        class BettIR_Base_DBALA2 {};
        class BettIR_Base_PEQ15: BettIR_Base_DBALA2 {
            class Configurable;
        };

        // PEQ-15
        class rhsusf_acc_anpeq15side: BettIR_Base_PEQ15 {
            macroClass = "rhsusf_acc_anpeq15side";
            classParser="BettIR_Compat_RHSUSF_peq15_fnc_parseClass";
            classComposer="BettIR_Compat_RHSUSF_peq15_fnc_composeClass";

            onActivate="BettIR_Attachments_fnc_defaultActivateDoubleTap";
            onDeactivate="BettIR_Attachments_fnc_defaultDeactivateDoubleTap";
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

        // // PEQ-15 combo 
        // class rhsusf_acc_anpeq15;
        // class rhsusf_acc_anpeq15_light; - light variant
        class rhsusf_acc_anpeq15: BettIR_Base_PEQ15 {
            macroClass = "rhsusf_acc_anpeq15";

            classParser="BettIR_Compat_RHSUSF_peq15_m952_fnc_parseClass";
            classComposer="BettIR_Compat_RHSUSF_peq15_m952_fnc_composeClass";

            onActivate="BettIR_Compat_RHSUSF_peq15_m952_fnc_onActivate";
            onDeactivate="BettIR_Compat_RHSUSF_peq15_m952_fnc_onDeactivate";

            onToggleModeSecondary="[_this select 0, 'Device'] spawn BettIR_Attachments_fnc_defaultToggleMode";

            class Configurable: Configurable {
                class Device {
                    displayName="Device";
                    defaultValue="PEQ";
                    class PEQ {
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
        

        // TODO:
        // class rhsusf_acc_anpeq15_wmx;

        // class rhsusf_acc_anpeq16a;
        // class rhsusf_acc_anpeq16a_top;

        // // VIS/IR Flashlights
        // // TODO: VMX activate modes
        // // hold: activate light, deactivate when released
        // // double tap: activate light and keep on
        // // tap + hold: strobe
        // class rhsusf_acc_wmx;
        // class rhsusf_acc_wmx_bk;

        // class rhsusf_acc_M952V;
    };
};
