#include "macros.hpp"

class CfgPatches {
    class BettIR_Attachments_Compat_Tier1 {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with Tier 1 Weapons";
        units[]={};
        weapons[]={};
        requiredVersion=2.14;
        requiredAddons[]={"Tier1_Weapons_cfg", "BettIR_Attachments"};
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgFunctions.hpp"

class BettIR_Config {
    class CompatibleAttachments {
        #include "bettirconfig\bettir_inheritance.hpp"
        #include "bettirconfig\NGAL.hpp"
        #include "bettirconfig\LA5.hpp"
    };
};

/*class cfgWeapons {
    #include "cfgWeapons\inheritance.hpp"
    #include "cfgWeapons\NGAL.hpp"
    #include "cfgWeapons\LA5.hpp"
};*/

#include "rails\rails.hpp"


class cfgWeapons {
    #include "cfgWeapons\inheritance.hpp"
    TIERONE_CFG_WEAPONS_LA5(Tier1_145_LA5_Top)
};