#include "macros.hpp"

class CfgWeapons {
    class InventoryFlashLightItem_Base_F {
        class Flashlight;
        class Pointer;
    };
    class ItemCore;
    class acc_pointer_IR: ItemCore {
        displayName="Steiner DBAL A2 (Laser)";
        model="BettIR_Attachments\data\models\DBAL.p3d";

        class ItemInfo: InventoryFlashLightItem_Base_F {
            class Pointer: Pointer {
                irDotSize=0.03;
            };
        };
    };

    class acc_pointer_IR_LO: acc_pointer_IR {
        scope=1;
        model="BettIR_Attachments\data\models\dbal_lo.p3d";
        displayName="Steiner DBAL A2 (Laser, LO)";

        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                // TODO: this will not work for now: T175507 in Feedback Tracker
                isIR=0;
                irDotSize=0.015;
                beamThickness=0;
                beamColor[]={0,0,0};
                dotColor[]={1,0,0};
            };
        };
    };

    class acc_pointer_VIS: acc_pointer_IR {
        scope=1;
        model="BettIR_Attachments\data\models\DBAL_vis_hi.p3d";
        displayName="Steiner DBAL A2 (Laser, Red)";
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

    class acc_pointer_VIS_LO: acc_pointer_VIS {
        displayName="Steiner DBAL A2 (Laser, Red, LO)";
        model="BettIR_Attachments\data\models\DBAL_vis_lo.p3d";
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

    BETTIR_ITEM_DBALA2_ILLUMINATOR_HI(25)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_HI(50)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_HI(75)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_HI(100)

    BETTIR_ITEM_DBALA2_ILLUMINATOR_LO(25)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_LO(50)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_LO(75)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_LO(100)

    BETTIR_ITEM_DBALA2_ILLUMINATOR_HI_LASER(25)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_HI_LASER(50)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_HI_LASER(75)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_HI_LASER(100)

    BETTIR_ITEM_DBALA2_ILLUMINATOR_LO_LASER(25)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_LO_LASER(50)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_LO_LASER(75)
    BETTIR_ITEM_DBALA2_ILLUMINATOR_LO_LASER(100)
};