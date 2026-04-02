#include "macros.hpp"

class CfgPatches {
    class BettIR_Attachments_Compat_Core {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with base game";
        units[]={};
        weapons[]={"acc_pointer_IR"};
        requiredVersion=2.14;
        requiredAddons[]={"A3_Weapons_F_Acc"};
        skipWhenMissingDependencies = 1;
    };
};

#include "rails.hpp"
#include "CfgFunctions.hpp"
#include "CfgWeapons.hpp"

class BettIR_Config {
    class CompatibleAttachments {
        class BettIR_Base_DBALA2;

        class acc_pointer_IR: BettIR_Base_DBALA2 {
            macroClass = "acc_pointer_IR";
            classParser="BettIR_DBALA2_fnc_parseClass";
            classComposer="BettIR_DBALA2_fnc_composeClass";
        };

        class acc_pointer_IR_LO: acc_pointer_IR {};
        class acc_pointer_VIS: acc_pointer_IR {};
        class acc_pointer_VIS_LO: acc_pointer_IR {};

        BETTIR_DBALA2_MACRO_COMPAT(25)
        BETTIR_DBALA2_MACRO_COMPAT(50)
        BETTIR_DBALA2_MACRO_COMPAT(75)
        BETTIR_DBALA2_MACRO_COMPAT(100)
    };
};
