class CfgPatches {
    class BettIR_Attachments_Compat_MCC_Extended {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with MCC Extended";
        units[]={};
        weapons[]={};
        requiredVersion=2.14;
        requiredAddons[]={"MCC_ERD"};
        skipWhenMissingDependencies = 1;
    };
};


class CfgWeapons {
    class ItemCore;
    class InventoryOpticsItem_Base_F {
        class OpticsModes;
    };

    class MCC_GBRS_T2_FDE: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes: OpticsModes {};
            class Pointer;
        };
    };

    class MCC_GBRS_T2_BLK: MCC_GBRS_T2_FDE {};

    class MCC_GBRS_T2_BLK_vis_hi : MCC_GBRS_T2_BLK {
        scope=1;
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                isIR=0;
                irDotSize=0.015;
                beamThickness=0.00005;
                beamColor[]={50000000,0,0};
                dotColor[]={5000,0,0};
            };
        };
    };

    class MCC_GBRS_T2_BLK_vis_lo : MCC_GBRS_T2_BLK_vis_hi {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                isIR=0;
                irDotSize=0.003;
                beamThickness=0;
                beamColor[]={0,0,0};
                dotColor[]={3000,0,0};
            };
        };
    };
};



class BettIR_Config {
    class CompatibleAttachments {
        class BettIR_Base_NGAL;
        class MCC_GBRS_T2_BLK: BettIR_Base_NGAL {
            macroClass="MCC_GBRS_T2_BLK";

            classParser="BettIR_Compat_MCC_Ext_OpticNGAL_fnc_parseClass";
            classComposer="BettIR_Compat_MCC_Ext_OpticNGAL_fnc_composeClass";
        };

        class MCC_GBRS_T2_BLK_vis_hi: MCC_GBRS_T2_BLK {};
        class MCC_GBRS_T2_BLK_vis_lo: MCC_GBRS_T2_BLK {};
    };
};


class CfgFunctions {
    class BettIR_Compat_MCC_Ext_OpticNGAL {
        class Core {
            class composeClass {
                file = "\BettIR_Attachments\compat\mcc_ext\functions\fnc_opticalNGAL_composeClass.sqf";
            };

            class parseClass {
                file = "\BettIR_Attachments\compat\mcc_ext\functions\fnc_opticalNGAL_parseClass.sqf";
            };
        };
    };
};

class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail {
    class compatibleItems {
        MCC_GBRS_T2_BLK_vis_hi = 1;
        MCC_GBRS_T2_BLK_vis_lo = 1;
    };
};

class asdg_OpticRail1913_long: asdg_OpticRail1913 {
    class compatibleItems: compatibleItems {
        MCC_GBRS_T2_BLK_vis_hi = 1;
        MCC_GBRS_T2_BLK_vis_lo = 1;
    };
};

class asdg_OpticRail1913_short: asdg_OpticRail1913 {
    class compatibleItems: compatibleItems {
        MCC_GBRS_T2_BLK_vis_hi = 1;
        MCC_GBRS_T2_BLK_vis_lo = 1;
    };
};


class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        MCC_GBRS_T2_BLK_vis_hi = 1;
        MCC_GBRS_T2_BLK_vis_lo = 1;
    };
};
