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
    // ---- AN/PEQ-15 standalone ----
    // Real CUP classes are PATCHED with NO parent (open-and-extend): specifying a base
    // would risk a base-class mismatch (CUP inherits ItemCore, not acc_pointer_IR) and
    // would resolve the inner ItemInfo against the wrong (stub) class. The BettIR-invented
    // state classes from BETTIR_CUP_PEQ15_STATES keep their ": BASE" parent (they're new).
    class CUP_acc_ANPEQ_15 {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15)

    class CUP_acc_ANPEQ_15_Black {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Black)

    class CUP_acc_ANPEQ_15_OD {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_OD)

    class CUP_acc_ANPEQ_15_Tan_Top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Tan_Top)

    class CUP_acc_ANPEQ_15_Black_Top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Black_Top)

    class CUP_acc_ANPEQ_15_OD_Top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_OD_Top)
};
