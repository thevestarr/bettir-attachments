#include "macros.hpp"

class CfgWeapons {
    class ItemCore;
    class InventoryFlashLightItem_Base_F {
        class Flashlight;
        class Pointer;
    };
    class acc_pointer_IR: ItemCore {
        class ItemInfo: InventoryFlashLightItem_Base_F {
            class Pointer;
        };
    };
    // ---- AN/PEQ-15 standalone (side) ----
    class CUP_acc_ANPEQ_15: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                irLaserEnd = "laser dir";
                irLaserPos = "laser pos";
                BETTIR_IR_LASER_PRESET_DBAL_A2
            };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15)

    class CUP_acc_ANPEQ_15_Black: CUP_acc_ANPEQ_15 {};
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Black)

    class CUP_acc_ANPEQ_15_OD: CUP_acc_ANPEQ_15 {};
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_OD)

    // ---- AN/PEQ-15 standalone (top) ----
    class CUP_acc_ANPEQ_15_Tan_Top: CUP_acc_ANPEQ_15 {};
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Tan_Top)

    class CUP_acc_ANPEQ_15_Black_Top: CUP_acc_ANPEQ_15 {};
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Black_Top)

    class CUP_acc_ANPEQ_15_OD_Top: CUP_acc_ANPEQ_15 {};
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_OD_Top)
};
