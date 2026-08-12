#include "..\..\include\presets\dbal_a2.hpp"
#include "..\..\include\presets\ngal.hpp"
#include "..\..\include\presets\peq15.hpp"
#include "..\mcc\macros.hpp"

#define MRTCONFIG_NGAL_IH(BASECLASS) \
    MRT_switchItemHintText="IR Illuminator (Close)"; \
    MRT_SwitchItemNextClass = QUOTE(GLUE(BASECLASS,_IRC)); \
    MRT_SwitchItemPrevClass = QUOTE(GLUE(BASECLASS,_IRL));

#define MRTCONFIG_NGAL_DH_CLOSE(BASECLASS) \
    MRT_switchItemHintText="IR Dual mode (Close)"; \
    MRT_SwitchItemNextClass = QUOTE(GLUE(BASECLASS,_DH_25MRAD)); \
    MRT_SwitchItemPrevClass = QUOTE(GLUE(BASECLASS,_IH_105MRAD));

#define MRTCONFIG_NGAL_DH_FAR(BASECLASS) \
    MRT_switchItemHintText="IR Dual mode (Far)"; \
    MRT_SwitchItemNextClass = QUOTE(GLUE(BASECLASS,_visAH)); \
    MRT_SwitchItemPrevClass = QUOTE(GLUE(BASECLASS,_DH_105MRAD));

class CfgPatches {
    class MCC_Core_Attachment_Revamp {
        addonRootClass="BettIR_Attachments";
        name="MCC Core changes required";
        units[]={};
        weapons[]={};
        requiredVersion=2.14;
        requiredAddons[]={"MCC_ACC", "BettIR_Attachments"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {
    class ItemCore;

    class MCC_AR_NGAL_M600V_BLK_IRL: ItemCore {
        class ItemInfo;

        MRT_SwitchItemNextClass = "MCC_AR_NGAL_M600V_BLK_IH_105MRAD";
        // prev class is VISC - class itself will persist in the BettIR compat but won't be accessible
    };

    class MCC_AR_NGAL_M600V_BLK_WL: ItemCore {
        MRT_SwitchItemNextClass = "MCC_AR_NGAL_M600V_BLK_VISC";
        MRT_SwitchItemPrevClass = "MCC_AR_NGAL_M600V_BLK_visAH";

        class ItemInfo;
    };

    class MCC_AR_NGAL_M600V_BLK_VISC: MCC_AR_NGAL_M600V_BLK_IRL {
        // MRT values are valid (IRL and WL)
        class ItemInfo: ItemInfo {
            class Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    class MCC_AR_NGAL_M600V_BLK_VISL: MCC_AR_NGAL_M600V_BLK_IRL {};

    class MCC_AR_NGAL_M600V_BLK_visAH: MCC_AR_NGAL_M600V_BLK_VISL { 
        MRT_SwitchItemPrevClass = "MCC_AR_NGAL_M600V_BLK_DH_25MRAD";
    };

    MCC_WEAPONCONFIG_NGAL_MRAD(MCC_AR_NGAL_M600V_BLK,IH,105,MRTCONFIG_NGAL_IH(MCC_AR_NGAL_M600V_BLK),NOLASER,NGALCONF(105,1))
    MCC_WEAPONCONFIG_NGAL_MRAD(MCC_AR_NGAL_M600V_BLK,DH,25,MRTCONFIG_NGAL_DH_FAR(MCC_AR_NGAL_M600V_BLK),LASERHI,NGALCONF(25,1))
    MCC_WEAPONCONFIG_NGAL_MRAD(MCC_AR_NGAL_M600V_BLK,DH,105,MRTCONFIG_NGAL_DH_CLOSE(MCC_AR_NGAL_M600V_BLK),LASERHI,NGALCONF(105,1))
};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        MCC_AR_NGAL_M600V_BLK_visAH=1;
        MCC_AR_NGAL_M600V_BLK_IH_105MRAD=1;
        MCC_AR_NGAL_M600V_BLK_DH_105MRAD=1;
        MCC_AR_NGAL_M600V_BLK_DH_25MRAD=1;
    };
};
