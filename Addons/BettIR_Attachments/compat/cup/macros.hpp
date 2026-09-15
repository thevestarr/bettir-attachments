#include "..\..\include\presets\peq15.hpp"
#include "..\..\include\presets\peq2.hpp"
#include "presets.hpp"

// ============================================================
//  Layout of this file
//
//  1. Shared fragments (MRT takeover, hidden-variant boilerplate, Pointer /
//     illuminator fragments per device).
//  2. CfgWeapons: re-opens of real CUP heads, the generic variant generators,
//     and one BETTIR_CUP_CFGWEAPONS_<device>(BASE) per device.
//  3. BettIR_Config: one BETTIR_CUP_CONFIG_<device>(BASE) per device.
//  4. rails.hpp: one BETTIR_CUP_RAILS_<device>(BASE) per device.
//
//  BASE is always a real CUP "head" class (the one the player picks in the
//  arsenal; bare head = AH / IR laser high). Every generated class is named
//  BASE_<mode>[_<focus>MRAD], which is what the compose functions build, so
//  the three per-device macros (cfgweapons / config / rails) must list the
//  same suffixes.
//
//  Devices:
//    PEQ15  vis, al, ih/dh/dl x 25/50/75/100    (14)   + real _F on combos
//    PEQ2   al, dl/dlh/dh x 25/50/75/100        (13)   + real _F on combos
//    LLM    vis, dvis, dh                       (3)    LLM01 and LLM MKIII (no divergence)
// ============================================================

#define QUOTE(var1) #var1

// ------------------------------------------------------------
//  1. Shared fragments
// ------------------------------------------------------------

// Disable CUP's native CBA-MRT accessory cycling (the IR / _V / _F class
// cycle) on every head BettIR manages: the MRT keybind would otherwise swap a
// managed attachment to a class BettIR does not track (e.g. CUP_acc_ANPEQ_15_V).
#define BETTIR_CUP_MRT_OFF \
    MRT_SwitchItemNextClass=""; \
    MRT_SwitchItemPrevClass=""; \
    MRT_switchItemHintText="";

// Every BettIR-generated variant: hidden from the arsenal, pointing back at its head.
#define BETTIR_CUP_HIDDEN(BASE) \
    scope=1; \
    scopeArsenal=1; \
    baseWeapon=QUOTE(BASE);

// Pointer fragments for the variant generators
#define NOLASER   class Pointer {};
#define KEEPLASER class Pointer;

// AN/PEQ-15: the illuminator sits on the laser's memory points (the standalone
// models have no "flash" points).
#define PEQ15_LASER_LO  class Pointer: Pointer { BETTIR_IR_LASER_PRESET_PEQ15_LO };
#define PEQ15_LASER_VIS class Pointer: Pointer { BETTIR_VIS_LASER_PRESET_PEQ15_RED };
#define PEQ15_ILLUM(MRAD,HIPWR) BETTIR_ILLUMINATOR_PRESET_PEQ15(MRAD,"laser pos","laser dir",HIPWR)

// AN/PEQ-2: IR only, illuminator on the laser's memory points.
#define PEQ2_LASER_LO class Pointer: Pointer { BETTIR_IR_LASER_PRESET_PEQ2_LO };
#define PEQ2_ILLUM(MRAD,HIPWR) BETTIR_ILLUMINATOR_PRESET_PEQ2(MRAD,"laser pos","laser dir",HIPWR)

// LLM01 / LLM MKIII: the integrated light is one lamp (CUP's flashlight
// numbers, on the flashlight memory points) with a white or an IR diode.
#define LLM01_LASER_VIS class Pointer: Pointer { BETTIR_VIS_LASER_PRESET_LLM01_GREEN };
#define LLM01_WHITE    BETTIR_WHITE_LIGHT_PRESET_LLM01
#define LLM01_IR_LIGHT BETTIR_IR_LIGHT_PRESET_LLM01

#define MKIII_LASER_VIS class Pointer: Pointer { BETTIR_VIS_LASER_PRESET_MKIII_RED };
#define MKIII_WHITE    BETTIR_WHITE_LIGHT_PRESET_MKIII
#define MKIII_IR_LIGHT BETTIR_IR_LIGHT_PRESET_MKIII

// ------------------------------------------------------------
//  2. CfgWeapons
// ------------------------------------------------------------

// Re-opens of real CUP heads. PARENT must be the class's REAL parent per the
// CUP config dump (cup-original-config.cpp): a re-open with the true parent
// merges additively and never rewires CUP's inheritance.
//
//  HEAD        - head that inherits its ItemInfo from an already patched head
//                (colour / top variants, the real combo _F lights). Only nulls MRT.
//  HEAD_ROOT   - head that defines its own ItemInfo in CUP (family roots and
//                every combo _L). Merges the BettIR IR-hi beam into CUP's
//                parentless Pointer; the composers map AH to this bare class.
//  HEAD_REBEAM - head that inherits an already patched ItemInfo but is a
//                different device (CUP_acc_ANPEQ_2 inherits CUP_acc_ANPEQ_15).
//                Overrides the inherited Pointer instead of shadowing ItemInfo.
#define BETTIR_CUP_HEAD(NAME,PARENT) \
    class NAME: PARENT { \
        BETTIR_CUP_MRT_OFF \
    };

#define BETTIR_CUP_HEAD_ROOT(NAME,PARENT,LASER) \
    class NAME: PARENT { \
        BETTIR_CUP_MRT_OFF \
        class ItemInfo: InventoryFlashLightItem_Base_F { \
            class Pointer { LASER }; \
        }; \
    };

#define BETTIR_CUP_HEAD_REBEAM(NAME,PARENT,LASER) \
    class NAME: PARENT { \
        BETTIR_CUP_MRT_OFF \
        class ItemInfo: ItemInfo { \
            class Pointer: Pointer { LASER }; \
        }; \
    };

// Generic variant generators (same shape as TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD).
//  LASERCONF - NOLASER / KEEPLASER / one of the <device>_LASER_* fragments
//  ILLUMCONF - <device>_ILLUM(DIV,HIPWR)
//  LIGHTCONF - <device>_WHITE / <device>_IR_LIGHT
#define BETTIR_CUP_LASER_VARIANT(BASE,SUFFIX,LASERCONF) \
    class BASE##_##SUFFIX: BASE { \
        BETTIR_CUP_HIDDEN(BASE) \
        class ItemInfo: ItemInfo { \
            LASERCONF \
        }; \
    };

#define BETTIR_CUP_LIGHT_VARIANT(BASE,SUFFIX,LASERCONF,LIGHTCONF) \
    class BASE##_##SUFFIX: BASE { \
        BETTIR_CUP_HIDDEN(BASE) \
        class ItemInfo: ItemInfo { \
            LASERCONF \
            class Flashlight { \
                LIGHTCONF \
            }; \
        }; \
    };

#define BETTIR_CUP_ILLUM_VARIANT(BASE,MODE,DIV,LASERCONF,ILLUMCONF) \
    class BASE##_##MODE##_##DIV##MRAD: BASE { \
        BETTIR_CUP_HIDDEN(BASE) \
        class ItemInfo: ItemInfo { \
            LASERCONF \
            class Flashlight { \
                ILLUMCONF \
            }; \
        }; \
    };

// AN/PEQ-15: VIS, AL, IH (illuminator only), DH (laser hi + illum hi), DL (laser lo + illum lo)
#define BETTIR_CUP_CFGWEAPONS_PEQ15(BASE) \
    BETTIR_CUP_LASER_VARIANT(BASE,vis,PEQ15_LASER_VIS) \
    BETTIR_CUP_LASER_VARIANT(BASE,al,PEQ15_LASER_LO) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,ih,25,NOLASER,PEQ15_ILLUM(25,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,ih,50,NOLASER,PEQ15_ILLUM(50,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,ih,75,NOLASER,PEQ15_ILLUM(75,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,ih,100,NOLASER,PEQ15_ILLUM(100,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dh,25,KEEPLASER,PEQ15_ILLUM(25,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dh,50,KEEPLASER,PEQ15_ILLUM(50,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dh,75,KEEPLASER,PEQ15_ILLUM(75,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dh,100,KEEPLASER,PEQ15_ILLUM(100,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dl,25,PEQ15_LASER_LO,PEQ15_ILLUM(25,0)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dl,50,PEQ15_LASER_LO,PEQ15_ILLUM(50,0)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dl,75,PEQ15_LASER_LO,PEQ15_ILLUM(75,0)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dl,100,PEQ15_LASER_LO,PEQ15_ILLUM(100,0))

// AN/PEQ-2: AL, DL (laser lo + illum lo), DLH (laser lo + illum hi), DH (laser hi + illum hi)
#define BETTIR_CUP_CFGWEAPONS_PEQ2(BASE) \
    BETTIR_CUP_LASER_VARIANT(BASE,al,PEQ2_LASER_LO) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dl,25,PEQ2_LASER_LO,PEQ2_ILLUM(25,0)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dl,50,PEQ2_LASER_LO,PEQ2_ILLUM(50,0)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dl,75,PEQ2_LASER_LO,PEQ2_ILLUM(75,0)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dl,100,PEQ2_LASER_LO,PEQ2_ILLUM(100,0)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dlh,25,PEQ2_LASER_LO,PEQ2_ILLUM(25,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dlh,50,PEQ2_LASER_LO,PEQ2_ILLUM(50,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dlh,75,PEQ2_LASER_LO,PEQ2_ILLUM(75,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dlh,100,PEQ2_LASER_LO,PEQ2_ILLUM(100,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dh,25,KEEPLASER,PEQ2_ILLUM(25,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dh,50,KEEPLASER,PEQ2_ILLUM(50,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dh,75,KEEPLASER,PEQ2_ILLUM(75,1)) \
    BETTIR_CUP_ILLUM_VARIANT(BASE,dh,100,KEEPLASER,PEQ2_ILLUM(100,1))

// LLM01: VIS (green), DVIS (green + white light), DH (IR laser + IR light)
#define BETTIR_CUP_CFGWEAPONS_LLM01(BASE) \
    BETTIR_CUP_LASER_VARIANT(BASE,vis,LLM01_LASER_VIS) \
    BETTIR_CUP_LIGHT_VARIANT(BASE,dvis,LLM01_LASER_VIS,LLM01_WHITE) \
    BETTIR_CUP_LIGHT_VARIANT(BASE,dh,KEEPLASER,LLM01_IR_LIGHT)

// LLM MKIII: VIS (red), DVIS (red + white light), DH (IR laser + IR light)
#define BETTIR_CUP_CFGWEAPONS_MKIII(BASE) \
    BETTIR_CUP_LASER_VARIANT(BASE,vis,MKIII_LASER_VIS) \
    BETTIR_CUP_LIGHT_VARIANT(BASE,dvis,MKIII_LASER_VIS,MKIII_WHITE) \
    BETTIR_CUP_LIGHT_VARIANT(BASE,dh,KEEPLASER,MKIII_IR_LIGHT)

// ------------------------------------------------------------
//  3. BettIR_Config >> CompatibleAttachments registration
//  The head registers itself as its own macroClass (so the macro is always a
//  real CompatibleAttachments class) and every variant inherits from it.
//  The family bases (BettIR_CUP_PEQ15, ...) are defined in config.cpp.
// ------------------------------------------------------------

#define BETTIR_CUP_CONFIG_PEQ15_VARIANTS(BASE) \
    class BASE##_vis: BASE {}; \
    class BASE##_al: BASE {}; \
    class BASE##_ih_25MRAD: BASE {}; \
    class BASE##_ih_50MRAD: BASE {}; \
    class BASE##_ih_75MRAD: BASE {}; \
    class BASE##_ih_100MRAD: BASE {}; \
    class BASE##_dh_25MRAD: BASE {}; \
    class BASE##_dh_50MRAD: BASE {}; \
    class BASE##_dh_75MRAD: BASE {}; \
    class BASE##_dh_100MRAD: BASE {}; \
    class BASE##_dl_25MRAD: BASE {}; \
    class BASE##_dl_50MRAD: BASE {}; \
    class BASE##_dl_75MRAD: BASE {}; \
    class BASE##_dl_100MRAD: BASE {};

#define BETTIR_CUP_CONFIG_PEQ15(BASE) \
    class BASE: BettIR_CUP_PEQ15 { macroClass = QUOTE(BASE); }; \
    BETTIR_CUP_CONFIG_PEQ15_VARIANTS(BASE)

// LASER = the real CUP _L head, LIGHT = the real CUP _F flashlight class
#define BETTIR_CUP_CONFIG_PEQ15_COMBO(LASER,LIGHT) \
    class LASER: BettIR_CUP_PEQ15_Combo { macroClass = QUOTE(LASER); }; \
    class LIGHT: LASER {}; \
    BETTIR_CUP_CONFIG_PEQ15_VARIANTS(LASER)

#define BETTIR_CUP_CONFIG_PEQ2_VARIANTS(BASE) \
    class BASE##_al: BASE {}; \
    class BASE##_dl_25MRAD: BASE {}; \
    class BASE##_dl_50MRAD: BASE {}; \
    class BASE##_dl_75MRAD: BASE {}; \
    class BASE##_dl_100MRAD: BASE {}; \
    class BASE##_dlh_25MRAD: BASE {}; \
    class BASE##_dlh_50MRAD: BASE {}; \
    class BASE##_dlh_75MRAD: BASE {}; \
    class BASE##_dlh_100MRAD: BASE {}; \
    class BASE##_dh_25MRAD: BASE {}; \
    class BASE##_dh_50MRAD: BASE {}; \
    class BASE##_dh_75MRAD: BASE {}; \
    class BASE##_dh_100MRAD: BASE {};

#define BETTIR_CUP_CONFIG_PEQ2(BASE) \
    class BASE: BettIR_CUP_PEQ2 { macroClass = QUOTE(BASE); }; \
    BETTIR_CUP_CONFIG_PEQ2_VARIANTS(BASE)

#define BETTIR_CUP_CONFIG_PEQ2_COMBO(LASER,LIGHT) \
    class LASER: BettIR_CUP_PEQ2_Combo { macroClass = QUOTE(LASER); }; \
    class LIGHT: LASER {}; \
    BETTIR_CUP_CONFIG_PEQ2_VARIANTS(LASER)

// Shared by the LLM01 and the LLM MKIII (same states, same naming)
#define BETTIR_CUP_CONFIG_LLM(BASE) \
    class BASE: BettIR_CUP_LLM { macroClass = QUOTE(BASE); }; \
    class BASE##_vis: BASE {}; \
    class BASE##_dvis: BASE {}; \
    class BASE##_dh: BASE {};

// ------------------------------------------------------------
//  4. rails.hpp entries. The heads and the real combo _F classes are already
//  listed by CUP itself, only the generated variants are added here.
// ------------------------------------------------------------

#define BETTIR_CUP_RAILS_PEQ15(BASE) \
    BASE##_vis = 1; \
    BASE##_al = 1; \
    BASE##_ih_25MRAD = 1; \
    BASE##_ih_50MRAD = 1; \
    BASE##_ih_75MRAD = 1; \
    BASE##_ih_100MRAD = 1; \
    BASE##_dh_25MRAD = 1; \
    BASE##_dh_50MRAD = 1; \
    BASE##_dh_75MRAD = 1; \
    BASE##_dh_100MRAD = 1; \
    BASE##_dl_25MRAD = 1; \
    BASE##_dl_50MRAD = 1; \
    BASE##_dl_75MRAD = 1; \
    BASE##_dl_100MRAD = 1;

#define BETTIR_CUP_RAILS_PEQ2(BASE) \
    BASE##_al = 1; \
    BASE##_dl_25MRAD = 1; \
    BASE##_dl_50MRAD = 1; \
    BASE##_dl_75MRAD = 1; \
    BASE##_dl_100MRAD = 1; \
    BASE##_dlh_25MRAD = 1; \
    BASE##_dlh_50MRAD = 1; \
    BASE##_dlh_75MRAD = 1; \
    BASE##_dlh_100MRAD = 1; \
    BASE##_dh_25MRAD = 1; \
    BASE##_dh_50MRAD = 1; \
    BASE##_dh_75MRAD = 1; \
    BASE##_dh_100MRAD = 1;

#define BETTIR_CUP_RAILS_LLM(BASE) \
    BASE##_vis = 1; \
    BASE##_dvis = 1; \
    BASE##_dh = 1;
