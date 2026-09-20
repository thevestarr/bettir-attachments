#include "macros.hpp"

// ============================================================
//  Mirror of CUP's real class tree
//
//  Principle: NEVER re-parent a real CUP class. Every re-open below declares
//  the class's REAL parent, so the engine merges additively (no "Updating
//  base class" rewiring). The only deliberate touches on real classes are:
//    1. HEAD_ROOT / HEAD_REBEAM merge the BettIR IR-hi beam preset into the
//       head's Pointer (the composers map AH to the bare real class). CUP's
//       memory points (irLaserPos / irLaserEnd) are left alone.
//    2. BETTIR_CUP_MRT_OFF nulls CBA-MRT accessory switching on managed heads,
//       so CUP's own IR / _V / _F cycle can't swap to an unmanaged class.
//       The real _V classes stay untouched (scope=1, now unreachable).
//
//  Every BettIR-generated variant derives from its real head (inheriting
//  model / displayName / mass) and is hidden (scope=1, scopeArsenal=1).
//
//  Placement of the head macros follows the dump: standalone colour / top
//  heads inherit their family root's ItemInfo (one HEAD_ROOT covers them),
//  while every combo _L redefines ItemInfo per colour (each gets HEAD_ROOT).
//  The real combo _F lights only need MRT nulled (HEAD).
// ============================================================
class CfgWeapons {
    class ItemCore;
    class InventoryFlashLightItem_Base_F {
        class Flashlight;
        class Pointer;
    };
    class InventoryOpticsItem_Base_F;

    // ---- AN/PEQ-15 standalone ----
    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_15, ItemCore, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Black, CUP_acc_ANPEQ_15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Black)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_OD, CUP_acc_ANPEQ_15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_OD)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Tan_Top, CUP_acc_ANPEQ_15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Tan_Top)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Black_Top, CUP_acc_ANPEQ_15_Black)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Black_Top)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_OD_Top, CUP_acc_ANPEQ_15_OD)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_OD_Top)

    // ---- AN/PEQ-2 standalone ----
    // CUP's hidden root inherits the (patched) AN/PEQ-15 ItemInfo, so it swaps
    // the beam to the AN/PEQ-2 preset; the colour heads inherit that.
    BETTIR_CUP_HEAD_REBEAM(CUP_acc_ANPEQ_2, CUP_acc_ANPEQ_15, BETTIR_IR_LASER_PRESET_PEQ2)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_grey, CUP_acc_ANPEQ_2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_grey)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_desert, CUP_acc_ANPEQ_2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_desert)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_camo, CUP_acc_ANPEQ_2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_camo)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_Black_Top, CUP_acc_ANPEQ_2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_Black_Top)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_Coyote_Top, CUP_acc_ANPEQ_2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_Coyote_Top)

    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_OD_Top, CUP_acc_ANPEQ_2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_OD_Top)

    // ---- AN/PEQ-15 + flashlight combos (side) ----
    // _L = laser head (AH state), _F = real CUP white light.
    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_15_Flashlight_Tan_L, ItemCore, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Flashlight_Tan_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Flashlight_Tan_F, CUP_acc_ANPEQ_15_Flashlight_Tan_L)

    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_15_Flashlight_OD_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Flashlight_OD_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Flashlight_OD_F, CUP_acc_ANPEQ_15_Flashlight_OD_L)

    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_15_Flashlight_Black_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Flashlight_Black_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Flashlight_Black_F, CUP_acc_ANPEQ_15_Flashlight_Black_L)

    // ---- AN/PEQ-15 + flashlight combos (top) ----
    // All three top _L variants really inherit the SIDE Tan _L in CUP.
    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F, CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L)

    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Top_Flashlight_OD_F, CUP_acc_ANPEQ_15_Top_Flashlight_OD_L)

    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L, CUP_acc_ANPEQ_15_Flashlight_Tan_L, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_CFGWEAPONS_PEQ15(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_15_Top_Flashlight_Black_F, CUP_acc_ANPEQ_15_Top_Flashlight_Black_L)

    // ---- AN/PEQ-2 + flashlight combos ----
    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_2_Flashlight_Black_L, ItemCore, BETTIR_IR_LASER_PRESET_PEQ2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_Flashlight_Black_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_Flashlight_Black_F, CUP_acc_ANPEQ_2_Flashlight_Black_L)

    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_2_Flashlight_Coyote_L, CUP_acc_ANPEQ_2_Flashlight_Black_L, BETTIR_IR_LASER_PRESET_PEQ2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_Flashlight_Coyote_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_Flashlight_Coyote_F, CUP_acc_ANPEQ_2_Flashlight_Coyote_L)

    BETTIR_CUP_HEAD_ROOT(CUP_acc_ANPEQ_2_Flashlight_OD_L, CUP_acc_ANPEQ_2_Flashlight_Black_L, BETTIR_IR_LASER_PRESET_PEQ2)
    BETTIR_CUP_CFGWEAPONS_PEQ2(CUP_acc_ANPEQ_2_Flashlight_OD_L)
    BETTIR_CUP_HEAD(CUP_acc_ANPEQ_2_Flashlight_OD_F, CUP_acc_ANPEQ_2_Flashlight_OD_L)

    // ---- LLM01 (standalone: laser + integrated light) ----
    // The _L head is the IR laser; the white light is only used as part of the
    // generated DVIS state. CUP's own _F / _V classes are left untouched.
    BETTIR_CUP_HEAD_ROOT(CUP_acc_LLM01_L, ItemCore, BETTIR_IR_LASER_PRESET_LLM01)
    BETTIR_CUP_CFGWEAPONS_LLM01(CUP_acc_LLM01_L)

    BETTIR_CUP_HEAD(CUP_acc_LLM01_coyote_L, CUP_acc_LLM01_L)
    BETTIR_CUP_CFGWEAPONS_LLM01(CUP_acc_LLM01_coyote_L)

    BETTIR_CUP_HEAD(CUP_acc_LLM01_desert_L, CUP_acc_LLM01_L)
    BETTIR_CUP_CFGWEAPONS_LLM01(CUP_acc_LLM01_desert_L)

    BETTIR_CUP_HEAD(CUP_acc_LLM01_hex_L, CUP_acc_LLM01_L)
    BETTIR_CUP_CFGWEAPONS_LLM01(CUP_acc_LLM01_hex_L)

    BETTIR_CUP_HEAD(CUP_acc_LLM01_od_L, CUP_acc_LLM01_L)
    BETTIR_CUP_CFGWEAPONS_LLM01(CUP_acc_LLM01_od_L)

    // ---- LLM MKIII (standalone: laser + integrated light) ----
    BETTIR_CUP_HEAD_ROOT(CUP_acc_LLM, ItemCore, BETTIR_IR_LASER_PRESET_MKIII)
    BETTIR_CUP_CFGWEAPONS_MKIII(CUP_acc_LLM)

    BETTIR_CUP_HEAD(CUP_acc_LLM_black, CUP_acc_LLM)
    BETTIR_CUP_CFGWEAPONS_MKIII(CUP_acc_LLM_black)

    BETTIR_CUP_HEAD(CUP_acc_LLM_od, CUP_acc_LLM)
    BETTIR_CUP_CFGWEAPONS_MKIII(CUP_acc_LLM_od)

    // ============================================================
    //  Optics with an integrated laser. Only managed when the side rail is
    //  empty (fnc_onLoadoutUpdated prefers the pointer slot).
    // ============================================================

    // ---- Insight ISM-IR (CUP_optic_ISM1400A7) ----
    // Root, real _V (visible) and real _F (illuminator only) all define their
    // own ItemInfo in CUP; the colour classes only inherit them.
    BETTIR_CUP_OPTIC_ROOT(CUP_optic_ISM1400A7, ItemCore, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_OPTIC_VIS(CUP_optic_ISM1400A7_V, CUP_optic_ISM1400A7, ISM_LASER_VIS)
    BETTIR_CUP_OPTIC_ILLUM(CUP_optic_ISM1400A7_F, CUP_optic_ISM1400A7, ISM_ILLUM(100,1))
    BETTIR_CUP_CFGWEAPONS_ISM(CUP_optic_ISM1400A7)

    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_green, CUP_optic_ISM1400A7)
    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_green_V, CUP_optic_ISM1400A7_V)
    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_green_F, CUP_optic_ISM1400A7_F)
    BETTIR_CUP_CFGWEAPONS_ISM(CUP_optic_ISM1400A7_green)

    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_OD, CUP_optic_ISM1400A7)
    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_OD_V, CUP_optic_ISM1400A7_V)
    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_OD_F, CUP_optic_ISM1400A7_F)
    BETTIR_CUP_CFGWEAPONS_ISM(CUP_optic_ISM1400A7_OD)

    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_tan, CUP_optic_ISM1400A7)
    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_tan_V, CUP_optic_ISM1400A7_V)
    BETTIR_CUP_HEAD(CUP_optic_ISM1400A7_tan_F, CUP_optic_ISM1400A7_F)
    BETTIR_CUP_CFGWEAPONS_ISM(CUP_optic_ISM1400A7_tan)

    // ---- MARS (CUP_optic_MARS) ----
    // Every colour's _V re-declares its own Pointer in CUP, so each gets OPTIC_VIS.
    BETTIR_CUP_OPTIC_ROOT(CUP_optic_MARS, ItemCore, BETTIR_IR_LASER_PRESET_PEQ15)
    BETTIR_CUP_OPTIC_VIS(CUP_optic_MARS_V, CUP_optic_MARS, MARS_LASER_VIS)

    BETTIR_CUP_HEAD(CUP_optic_MARS_OD, CUP_optic_MARS)
    BETTIR_CUP_OPTIC_VIS(CUP_optic_MARS_OD_V, CUP_optic_MARS_OD, MARS_LASER_VIS)

    BETTIR_CUP_HEAD(CUP_optic_MARS_tan, CUP_optic_MARS)
    BETTIR_CUP_OPTIC_VIS(CUP_optic_MARS_tan_V, CUP_optic_MARS_tan, MARS_LASER_VIS)

    // ---- AIMM MARS magnifier (CUP_optic_AIMM_MARS_*) ----
    // UNSUPPORTED: CUP is missing memory points for lasers in this variant
    // Up and down are separate ItemCore roots in CUP. MRT stays on (magnifier flip).
    // No spaces after the commas: the names are stringified for baseWeapon / MRT.
    //BETTIR_CUP_CFGWEAPONS_AIMM(CUP_optic_AIMM_MARS_BLK,CUP_optic_AIMM_MARS_BLK_DWN,CUP_optic_AIMM_MARS_BLK_vis,CUP_optic_AIMM_MARS_BLK_DWN_vis)
    //BETTIR_CUP_CFGWEAPONS_AIMM(CUP_optic_AIMM_MARS_TAN,CUP_optic_AIMM_MARS_TAN_DWN,CUP_optic_AIMM_MARS_TAN_vis,CUP_optic_AIMM_MARS_TAN_DWN_vis)
    //BETTIR_CUP_CFGWEAPONS_AIMM(CUP_optic_AIMM_MARS_OD,CUP_optic_AIMM_MARS_OD_DWN,CUP_optic_AIMM_MARS_OD_vis,CUP_optic_AIMM_MARS_OD_DWN_vis)
};
