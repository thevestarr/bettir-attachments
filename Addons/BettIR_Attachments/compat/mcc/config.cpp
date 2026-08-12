class CfgPatches {
    class BettIR_Attachments_Compat_MCC {
        addonRootClass="BettIR_Attachments";
        name="";
        units[]={};
        weapons[]={};
        requiredVersion=2.14;
        requiredAddons[]={"NEVER_LOAD_THIS", "BettIR_Attachments"};
        skipWhenMissingDependencies = 1;
    };
};

#include "macros.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"

class BettIR_Config {
    class CompatibleAttachments {
        class BettIR_Base_DBALA2;
        class BettIR_Base_PEQ15: BettIR_Base_DBALA2 {
            class Configurable;
        };
        class BettIR_Base_PEQ15_GenericFlashlightCombo: BettIR_Base_PEQ15 {
            class Configurable;
        };
        class BettIR_Base_NGAL: BettIR_Base_DBALA2 {
            class Configurable;
        };
        class BettIR_Base_NGAL_GenericFlashlightCombo: BettIR_Base_NGAL {
            class Configurable;
        };
    

        MCC_CONFIG_NGAL_WL(MCC_AR_NGAL_M600V_BLK)
    };
};