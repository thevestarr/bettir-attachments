#include "macros.hpp"

// ============================================================
//  Real CUP device classes are re-opened and re-parented to the local
//  `acc_pointer_IR` stub, which provides a resolvable `ItemInfo > Pointer`
//  (and, via InventoryFlashLightItem_Base_F, `Flashlight`) base.
//
//  WHY: the BettIR state-generator macros emit
//      class <state>: <head> { class ItemInfo: ItemInfo { class Pointer: Pointer { ... }; }; };
//  The inner `ItemInfo`/`Pointer`/`Flashlight` references only resolve if the
//  head class inherits something that actually declares those inner classes.
//  A no-parent re-open (`class CUP_acc_ANPEQ_15 { ... }`) leaves the inner
//  ItemInfo with nothing to inherit from -> base class undefined.
//
//  This mirrors the rhsusf compat module exactly (see ../rhsusf/CfgWeapons.hpp).
//  CUP's real parents are ItemCore / each other, so re-parenting to
//  acc_pointer_IR produces benign "base class mismatch" rpt warnings (the same
//  ones rhsusf already produces); the device keeps its own model/picture/
//  displayName because re-opening an existing class is additive.
// ============================================================
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
    class CUP_acc_ANPEQ_15: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15)

    class CUP_acc_ANPEQ_15_Black: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Black)

    class CUP_acc_ANPEQ_15_OD: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_OD)

    class CUP_acc_ANPEQ_15_Tan_Top: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Tan_Top)

    class CUP_acc_ANPEQ_15_Black_Top: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Black_Top)

    class CUP_acc_ANPEQ_15_OD_Top: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer { irLaserEnd = "laser dir"; irLaserPos = "laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 };
        };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_OD_Top)

    // ---- AN/PEQ-15 + white-light combos ----
    // _L = laser-active head (gets full PEQ-15 laser grammar).
    // _F = real CUP white-light state; re-parented so the invented _F_ir sibling resolves.
    class CUP_acc_ANPEQ_15_Flashlight_Tan_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    class CUP_acc_ANPEQ_15_Flashlight_Tan_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_Tan_F)

    class CUP_acc_ANPEQ_15_Flashlight_OD_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_OD_L)
    class CUP_acc_ANPEQ_15_Flashlight_OD_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_OD_F)

    class CUP_acc_ANPEQ_15_Flashlight_Black_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_Black_L)
    class CUP_acc_ANPEQ_15_Flashlight_Black_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_Black_F)

    class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L)
    class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F)

    class CUP_acc_ANPEQ_15_Top_Flashlight_OD_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L)
    class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_OD_F)

    class CUP_acc_ANPEQ_15_Top_Flashlight_Black_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L)
    class CUP_acc_ANPEQ_15_Top_Flashlight_Black_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_Black_F)

    // ---- AN/PEQ-2 standalone (IR-only) ----
    class CUP_acc_ANPEQ_2_grey: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_grey)
    class CUP_acc_ANPEQ_2_desert: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_desert)
    class CUP_acc_ANPEQ_2_camo: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_camo)
    class CUP_acc_ANPEQ_2_Black_Top: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Black_Top)
    class CUP_acc_ANPEQ_2_Coyote_Top: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Coyote_Top)
    class CUP_acc_ANPEQ_2_OD_Top: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_OD_Top)

    // ---- AN/PEQ-2 + white-light combos ----
    class CUP_acc_ANPEQ_2_Flashlight_Black_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_Black_L)
    class CUP_acc_ANPEQ_2_Flashlight_Black_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_Black_F)
    class CUP_acc_ANPEQ_2_Flashlight_OD_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_OD_L)
    class CUP_acc_ANPEQ_2_Flashlight_OD_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_OD_F)
    class CUP_acc_ANPEQ_2_Flashlight_Coyote_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_Coyote_L)
    class CUP_acc_ANPEQ_2_Flashlight_Coyote_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_Coyote_F)

    // ---- LLM01 laser+light combos (green VIS) ----
    class CUP_acc_LLM01_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_L)
    class CUP_acc_LLM01_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_F)

    class CUP_acc_LLM01_coyote_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_coyote_L)
    class CUP_acc_LLM01_coyote_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_coyote_F)

    class CUP_acc_LLM01_desert_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_desert_L)
    class CUP_acc_LLM01_desert_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_desert_F)

    class CUP_acc_LLM01_hex_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_hex_L)
    class CUP_acc_LLM01_hex_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_hex_F)

    class CUP_acc_LLM01_od_L: acc_pointer_IR {
        class ItemInfo: ItemInfo { class Pointer: Pointer { irLaserEnd="laser dir"; irLaserPos="laser pos"; BETTIR_IR_LASER_PRESET_DBAL_A2 }; };
    };
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_od_L)
    class CUP_acc_LLM01_od_F: acc_pointer_IR {};
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_od_F)

    // ---- LLM MKIII weapon light (White/IR) ----
    // NOTE: model under review. CUP_acc_LLM is actually the IR-laser base of a
    // laser+light combo (CUP_acc_LLM / _V visible / _Flashlight white), not a
    // standalone flashlight. Inheritance is made valid here; the device model
    // is being reconciled with the user (see task #2).
    class CUP_acc_LLM: acc_pointer_IR {};
    BETTIR_CUP_FLASHLIGHT_IR(CUP_acc_LLM)
    class CUP_acc_LLM_black: acc_pointer_IR {};
    BETTIR_CUP_FLASHLIGHT_IR(CUP_acc_LLM_black)
    class CUP_acc_LLM_od: acc_pointer_IR {};
    BETTIR_CUP_FLASHLIGHT_IR(CUP_acc_LLM_od)
};
