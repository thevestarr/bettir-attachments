#include "macros.hpp"

// ============================================================
//  Truthful mirror of CUP's real class tree, verified line-by-line against a
//  full config dump of CUP_Weapons_West_Attachments (cup_config.cpp).
//
//  Principle: NEVER re-parent a real CUP class. Every re-open below declares
//  the class's REAL parent, so the engine merges additively — no "Updating
//  base class" rewiring, and CUP behaves identically for everything BettIR
//  does not deliberately touch. The only deliberate touches are:
//    1. BETTIR_CUP_HEAD_PATCH — merge the BettIR AH beam preset into the real
//       head's existing parentless Pointer (compose maps MasterMode AH to the
//       bare real class). CUP's memory points (irLaserPos/irLaserEnd) are
//       already correct and are left alone.
//    2. BETTIR_CUP_MRT_TAKEOVER — null CBA-MRT accessory switching on managed
//       heads. CUP natively cycles its IR / _V / _F sibling classes via the
//       MRT keybind, which would swap a managed attachment to an unregistered
//       class; BettIR's interaction system replaces that cycle. The real _V
//       classes themselves stay untouched (scope=1, now unreachable).
//
//  BettIR-invented states derive from the real heads (inheriting model /
//  displayName / mass normally) and are scope=1 + MRT-inert.
//
//  HEAD_PATCH vs HEAD_TAKEOVER placement is dictated by the dump: standalone
//  color/top variants inherit their family root's ItemInfo (one root patch
//  covers them), while every combo _L redefines ItemInfo per color (each gets
//  its own patch).
// ============================================================
class CfgWeapons {
    class ItemCore;
    class InventoryFlashLightItem_Base_F {
        class Flashlight;
        class Pointer;
    };

    // ---- AN/PEQ-15 standalone ----
    // Root patch covers _Black/_OD/_*_Top AND the whole PEQ-2 standalone
    // family below (CUP_acc_ANPEQ_2: CUP_acc_ANPEQ_15) via CUP's own chain.
    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_15, ItemCore)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Black, CUP_acc_ANPEQ_15)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Black)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_OD, CUP_acc_ANPEQ_15)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_OD)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Tan_Top, CUP_acc_ANPEQ_15)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Tan_Top)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Black_Top, CUP_acc_ANPEQ_15_Black)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Black_Top)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_OD_Top, CUP_acc_ANPEQ_15_OD)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_OD_Top)

    // ---- AN/PEQ-2 standalone (IR-only) ----
    // Hidden real base; the colors inherit its (already patched) ItemInfo and
    // nulled MRT through CUP's own chain, so plain truthful re-opens suffice —
    // they exist only to give the state macros a resolvable local parent.
    class CUP_acc_ANPEQ_2: CUP_acc_ANPEQ_15 {};
    class CUP_acc_ANPEQ_2_grey: CUP_acc_ANPEQ_2 {};
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_grey)
    class CUP_acc_ANPEQ_2_desert: CUP_acc_ANPEQ_2 {};
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_desert)
    class CUP_acc_ANPEQ_2_camo: CUP_acc_ANPEQ_2 {};
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_camo)
    class CUP_acc_ANPEQ_2_Black_Top: CUP_acc_ANPEQ_2 {};
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Black_Top)
    class CUP_acc_ANPEQ_2_Coyote_Top: CUP_acc_ANPEQ_2 {};
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Coyote_Top)
    class CUP_acc_ANPEQ_2_OD_Top: CUP_acc_ANPEQ_2 {};
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_OD_Top)

    // ---- AN/PEQ-15 + white-light combos (side) ----
    // _L = laser head (AH state), _F = real CUP white light, _F_ir = invented
    // IR sibling. Every color _L redefines ItemInfo in CUP -> each is patched.
    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_15_Flashlight_Tan_L, ItemCore)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Flashlight_Tan_F, CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_Tan_F)

    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_15_Flashlight_OD_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_OD_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Flashlight_OD_F, CUP_acc_ANPEQ_15_Flashlight_OD_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_OD_F)

    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_15_Flashlight_Black_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Flashlight_Black_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Flashlight_Black_F, CUP_acc_ANPEQ_15_Flashlight_Black_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Flashlight_Black_F)

    // ---- AN/PEQ-15 + white-light combos (top) ----
    // All three top _L variants really inherit the SIDE Tan _L in CUP.
    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F, CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F)

    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Top_Flashlight_OD_F, CUP_acc_ANPEQ_15_Top_Flashlight_OD_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_OD_F)

    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_15_Top_Flashlight_Black_F, CUP_acc_ANPEQ_15_Top_Flashlight_Black_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_15_Top_Flashlight_Black_F)

    // ---- AN/PEQ-2 + white-light combos (IR-only laser side) ----
    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_2_Flashlight_Black_L, ItemCore)
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_Black_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_2_Flashlight_Black_F, CUP_acc_ANPEQ_2_Flashlight_Black_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_Black_F)

    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_2_Flashlight_Coyote_L, CUP_acc_ANPEQ_2_Flashlight_Black_L)
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_Coyote_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_2_Flashlight_Coyote_F, CUP_acc_ANPEQ_2_Flashlight_Coyote_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_Coyote_F)

    BETTIR_CUP_HEAD_PATCH(CUP_acc_ANPEQ_2_Flashlight_OD_L, CUP_acc_ANPEQ_2_Flashlight_Black_L)
    BETTIR_CUP_PEQ2_STATES(CUP_acc_ANPEQ_2_Flashlight_OD_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_ANPEQ_2_Flashlight_OD_F, CUP_acc_ANPEQ_2_Flashlight_OD_L)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_ANPEQ_2_Flashlight_OD_F)

    // ---- LLM01 laser+light combos (green VIS) ----
    // Colors inherit the _L root's ItemInfo (one patch) and the _F root's
    // white light; both roots are ItemCore children in CUP.
    BETTIR_CUP_HEAD_PATCH(CUP_acc_LLM01_L, ItemCore)
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_L)
    // White-light root: own ItemInfo, no Pointer — declared truthfully so the
    // _ir generator can resolve ItemInfo locally. No laser patch here.
    class CUP_acc_LLM01_F: ItemCore {
        BETTIR_CUP_MRT_TAKEOVER
        class ItemInfo: InventoryFlashLightItem_Base_F {};
    };
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_F)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM01_coyote_L, CUP_acc_LLM01_L)
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_coyote_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM01_coyote_F, CUP_acc_LLM01_F)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_coyote_F)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM01_desert_L, CUP_acc_LLM01_L)
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_desert_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM01_desert_F, CUP_acc_LLM01_F)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_desert_F)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM01_hex_L, CUP_acc_LLM01_L)
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_hex_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM01_hex_F, CUP_acc_LLM01_F)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_hex_F)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM01_od_L, CUP_acc_LLM01_L)
    BETTIR_CUP_LLM01_STATES(CUP_acc_LLM01_od_L)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM01_od_F, CUP_acc_LLM01_F)
    BETTIR_CUP_COMBO_FLASHLIGHT_IR(CUP_acc_LLM01_od_F)

    // ---- LLM MKIII laser+light combo (red VIS, white/IR light) ----
    // CUP_acc_LLM is the bare IR-laser head; _Flashlight is the real white
    // light (fresh ItemInfo without Pointer, so the root patch cannot leak
    // into it). Colors inherit the roots' ItemInfo through CUP's own chain.
    BETTIR_CUP_HEAD_PATCH(CUP_acc_LLM, ItemCore)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_LLM)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM_Flashlight, CUP_acc_LLM)
    BETTIR_CUP_FLASHLIGHT_IR(CUP_acc_LLM_Flashlight)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM_black, CUP_acc_LLM)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_LLM_black)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM_black_Flashlight, CUP_acc_LLM_Flashlight)
    BETTIR_CUP_FLASHLIGHT_IR(CUP_acc_LLM_black_Flashlight)

    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM_od, CUP_acc_LLM)
    BETTIR_CUP_PEQ15_STATES(CUP_acc_LLM_od)
    BETTIR_CUP_HEAD_TAKEOVER(CUP_acc_LLM_od_Flashlight, CUP_acc_LLM_Flashlight)
    BETTIR_CUP_FLASHLIGHT_IR(CUP_acc_LLM_od_Flashlight)
};
