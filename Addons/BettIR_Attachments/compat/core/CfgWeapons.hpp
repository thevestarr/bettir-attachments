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
                BETTIR_IR_LASER_PRESET_DBAL_A2
            };
        };
    };

    class acc_pointer_IR_LO: acc_pointer_IR {
        baseWeapon="acc_pointer_IR";
        model="BettIR_Attachments\data\models\dbal_lo.p3d";
        displayName="Steiner DBAL A2 (Laser, LO)";

        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class acc_pointer_VIS: acc_pointer_IR {
        baseWeapon="acc_pointer_IR";
        model="BettIR_Attachments\data\models\DBAL_vis_hi.p3d";
        displayName="Steiner DBAL A2 (Laser, Red)";
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    class acc_pointer_VIS_LO: acc_pointer_VIS {
        baseWeapon="acc_pointer_IR";
        displayName="Steiner DBAL A2 (Laser, Red, LO)";
        model="BettIR_Attachments\data\models\DBAL_vis_lo.p3d";
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED_LO
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