#include "..\..\include\presets\peq15.hpp"
#include "..\..\include\presets\dbal_a2.hpp"

// ============================================================
//  CfgWeapons state-class generators
//  BASE = the AH (IR-hi) class, already declared with its Pointer preset.
//  Light/illuminator memory points: position="flash dir", direction="flash".
// ============================================================

// IR-low aim
#define BETTIR_CUP_STATE_AL(BASE) \
    class BASE##_al: BASE { \
        class ItemInfo: ItemInfo { class Pointer: Pointer { BETTIR_IR_LASER_PRESET_DBAL_A2_LO }; }; \
    };

// Visible (red) — PEQ-15 / LLM01 only
#define BETTIR_CUP_STATE_VIS(BASE) \
    class BASE##_vis: BASE { \
        class ItemInfo: ItemInfo { class Pointer: Pointer { BETTIR_VIS_LASER_PRESET_DBAL_A2_RED }; }; \
    };

// Illuminator-high (no laser) at one MRAD
#define BETTIR_CUP_STATE_IH(BASE,MRAD) \
    class BASE##_ih_##MRAD##MRAD: BASE { \
        class ItemInfo: ItemInfo { \
            class Pointer {}; \
            class Flashlight: Flashlight { BETTIR_ILLUMINATOR_PRESET_PEQ15(MRAD,"flash dir","flash",1) }; \
        }; \
    };

// Dual-high (IR-hi laser + illuminator) at one MRAD
#define BETTIR_CUP_STATE_DH(BASE,MRAD) \
    class BASE##_dh_##MRAD##MRAD: BASE { \
        class ItemInfo: ItemInfo { \
            class Pointer; \
            class Flashlight: Flashlight { BETTIR_ILLUMINATOR_PRESET_PEQ15(MRAD,"flash dir","flash",1) }; \
        }; \
    };

// Dual-low (IR-lo laser + illuminator) at one MRAD
#define BETTIR_CUP_STATE_DL(BASE,MRAD) \
    class BASE##_dl_##MRAD##MRAD: BASE { \
        class ItemInfo: ItemInfo { \
            class Pointer: Pointer { BETTIR_IR_LASER_PRESET_DBAL_A2_LO }; \
            class Flashlight: Flashlight { BETTIR_ILLUMINATOR_PRESET_PEQ15(MRAD,"flash dir","flash",0) }; \
        }; \
    };

// All illuminator/dual MRAD steps (25/50/75/100) for one BASE
#define BETTIR_CUP_STATES_ILLUM(BASE) \
    BETTIR_CUP_STATE_IH(BASE,25) BETTIR_CUP_STATE_IH(BASE,50) BETTIR_CUP_STATE_IH(BASE,75) BETTIR_CUP_STATE_IH(BASE,100) \
    BETTIR_CUP_STATE_DH(BASE,25) BETTIR_CUP_STATE_DH(BASE,50) BETTIR_CUP_STATE_DH(BASE,75) BETTIR_CUP_STATE_DH(BASE,100) \
    BETTIR_CUP_STATE_DL(BASE,25) BETTIR_CUP_STATE_DL(BASE,50) BETTIR_CUP_STATE_DL(BASE,75) BETTIR_CUP_STATE_DL(BASE,100)

// Full PEQ-15 grammar (with VIS)
#define BETTIR_CUP_PEQ15_STATES(BASE) \
    BETTIR_CUP_STATE_AL(BASE) BETTIR_CUP_STATE_VIS(BASE) BETTIR_CUP_STATES_ILLUM(BASE)

// IR-only grammar (PEQ-2 — no VIS)
#define BETTIR_CUP_PEQ2_STATES(BASE) \
    BETTIR_CUP_STATE_AL(BASE) BETTIR_CUP_STATES_ILLUM(BASE)

// ============================================================
//  BettIR_Config registration generators (empty subclasses)
//  HEAD = the registered head class that declares macroClass/parser/composer.
// ============================================================
#define BETTIR_CUP_REG_ILLUM(BASE,HEAD) \
    class BASE##_ih_25MRAD: HEAD {}; class BASE##_ih_50MRAD: HEAD {}; class BASE##_ih_75MRAD: HEAD {}; class BASE##_ih_100MRAD: HEAD {}; \
    class BASE##_dh_25MRAD: HEAD {}; class BASE##_dh_50MRAD: HEAD {}; class BASE##_dh_75MRAD: HEAD {}; class BASE##_dh_100MRAD: HEAD {}; \
    class BASE##_dl_25MRAD: HEAD {}; class BASE##_dl_50MRAD: HEAD {}; class BASE##_dl_75MRAD: HEAD {}; class BASE##_dl_100MRAD: HEAD {};

#define BETTIR_CUP_PEQ15_REG(BASE,HEAD) \
    class BASE##_al: HEAD {}; class BASE##_vis: HEAD {}; BETTIR_CUP_REG_ILLUM(BASE,HEAD)

#define BETTIR_CUP_PEQ2_REG(BASE,HEAD) \
    class BASE##_al: HEAD {}; BETTIR_CUP_REG_ILLUM(BASE,HEAD)

// ============================================================
//  rails.hpp entry generators
// ============================================================
#define BETTIR_CUP_RAIL_ILLUM(BASE) \
    BASE##_ih_25MRAD = 1; BASE##_ih_50MRAD = 1; BASE##_ih_75MRAD = 1; BASE##_ih_100MRAD = 1; \
    BASE##_dh_25MRAD = 1; BASE##_dh_50MRAD = 1; BASE##_dh_75MRAD = 1; BASE##_dh_100MRAD = 1; \
    BASE##_dl_25MRAD = 1; BASE##_dl_50MRAD = 1; BASE##_dl_75MRAD = 1; BASE##_dl_100MRAD = 1;

#define BETTIR_CUP_PEQ15_RAIL(BASE) \
    BASE##_al = 1; BASE##_vis = 1; BETTIR_CUP_RAIL_ILLUM(BASE)

#define BETTIR_CUP_PEQ2_RAIL(BASE) \
    BASE##_al = 1; BETTIR_CUP_RAIL_ILLUM(BASE)
