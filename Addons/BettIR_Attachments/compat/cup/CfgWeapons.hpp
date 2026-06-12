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

    // ---- AN/PEQ-15 + white-light combos ----
    class CUP_acc_ANPEQ_15_Flashlight_Tan_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    class CUP_acc_ANPEQ_15_Flashlight_Tan_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_Tan_F)

    class CUP_acc_ANPEQ_15_Flashlight_OD_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_OD_L)
    class CUP_acc_ANPEQ_15_Flashlight_OD_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_OD_F)

    class CUP_acc_ANPEQ_15_Flashlight_Black_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_Black_L)
    class CUP_acc_ANPEQ_15_Flashlight_Black_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_Black_F)

    class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L)
    class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F)

    class CUP_acc_ANPEQ_15_Top_Flashlight_OD_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L)
    class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_OD_F)

    class CUP_acc_ANPEQ_15_Top_Flashlight_Black_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L)
    class CUP_acc_ANPEQ_15_Top_Flashlight_Black_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_Black_F)

    // ---- AN/PEQ-2 standalone (IR-only) ----
    class CUP_acc_ANPEQ_2_grey {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_grey)
    class CUP_acc_ANPEQ_2_desert {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_desert)
    class CUP_acc_ANPEQ_2_camo {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_camo)
    class CUP_acc_ANPEQ_2_Black_Top {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Black_Top)
    class CUP_acc_ANPEQ_2_Coyote_Top {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Coyote_Top)
    class CUP_acc_ANPEQ_2_OD_Top {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_OD_Top)

    // ---- AN/PEQ-2 + white-light combos ----
    class CUP_acc_ANPEQ_2_Flashlight_Black_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_Black_L)
    class CUP_acc_ANPEQ_2_Flashlight_Black_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_Black_F)
    class CUP_acc_ANPEQ_2_Flashlight_OD_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_OD_L)
    class CUP_acc_ANPEQ_2_Flashlight_OD_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_OD_F)
    class CUP_acc_ANPEQ_2_Flashlight_Coyote_L {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_Coyote_L)
    class CUP_acc_ANPEQ_2_Flashlight_Coyote_F;
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_Coyote_F)
};
