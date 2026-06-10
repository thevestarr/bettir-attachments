#include "..\..\include\presets\peq15.hpp"
#include "..\..\include\presets\dbal_a2.hpp"

class CfgWeapons {
    class ItemCore;
    class acc_flashlight;

    class InventoryFlashLightItem_Base_F {
        class Flashlight;
        class Pointer;
    };

    class acc_pointer_IR: ItemCore {
        class ItemInfo: InventoryFlashLightItem_Base_F {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq15side: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2
            };
        };
    };

    // aim low
    class rhsusf_acc_anpeq15side_al: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    // aim vis
    class rhsusf_acc_anpeq15side_vis: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    // illuminator high
    class rhsusf_acc_anpeq15side_ih_25MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_ih_50MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_ih_75MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_ih_100MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    // dual high
    class rhsusf_acc_anpeq15side_dh_25MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_dh_50MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_dh_75MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_dh_100MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };


    // dual low
    class rhsusf_acc_anpeq15side_dl_25MRAD: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15side_dl_50MRAD: rhsusf_acc_anpeq15side_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15side_dl_75MRAD: rhsusf_acc_anpeq15side_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15side_dl_100MRAD: rhsusf_acc_anpeq15side_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };



    class rhsusf_acc_anpeq15side_bk: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer;
        };
    };
    // aim low
    class rhsusf_acc_anpeq15side_bk_al: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    // aim vis
    class rhsusf_acc_anpeq15side_bk_vis: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    // illuminator high
    class rhsusf_acc_anpeq15side_bk_ih_25MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_ih_50MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_ih_75MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_ih_100MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    // dual high
    class rhsusf_acc_anpeq15side_bk_dh_25MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_dh_50MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_dh_75MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_dh_100MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };


    // dual low
    class rhsusf_acc_anpeq15side_bk_dl_25MRAD: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_dl_50MRAD: rhsusf_acc_anpeq15side_bk_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_dl_75MRAD: rhsusf_acc_anpeq15side_bk_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_dl_100MRAD: rhsusf_acc_anpeq15side_bk_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };



    // rhs has its own dbal for some reason and it uses the same model as core
    // also somehow it's the base class for the top variant (??)
    class rhsusf_acc_anpeq15a: acc_pointer_IR {
    };

    class rhsusf_acc_anpeq15_top: rhsusf_acc_anpeq15a {
        scope=2;
         class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    // aim low
    class rhsusf_acc_anpeq15_top_al: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    // aim vis
    class rhsusf_acc_anpeq15_top_vis: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    // illuminator high
    class rhsusf_acc_anpeq15_top_ih_25MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_ih_50MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_ih_75MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_ih_100MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    // dual high
    class rhsusf_acc_anpeq15_top_dh_25MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_dh_50MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_dh_75MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_dh_100MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };


    // dual low
    class rhsusf_acc_anpeq15_top_dl_25MRAD: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_dl_50MRAD: rhsusf_acc_anpeq15_top_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_dl_75MRAD: rhsusf_acc_anpeq15_top_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_top_dl_100MRAD: rhsusf_acc_anpeq15_top_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };






    class rhsusf_acc_anpeq15_bk_top: rhsusf_acc_anpeq15_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_al: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    // aim vis
    class rhsusf_acc_anpeq15_bk_top_vis: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    // illuminator high
    class rhsusf_acc_anpeq15_bk_top_ih_25MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_ih_50MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_ih_75MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_ih_100MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    // dual high
    class rhsusf_acc_anpeq15_bk_top_dh_25MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_dh_50MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_dh_75MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_dh_100MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };


    // dual low
    class rhsusf_acc_anpeq15_bk_top_dl_25MRAD: rhsusf_acc_anpeq15_bk_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_dl_50MRAD: rhsusf_acc_anpeq15_bk_top_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_dl_75MRAD: rhsusf_acc_anpeq15_bk_top_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_top_dl_100MRAD: rhsusf_acc_anpeq15_bk_top_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };






    class rhsusf_acc_anpeq15: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2
            };
        };
    };

    // aim low
    class rhsusf_acc_anpeq15_al: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    // aim vis
    class rhsusf_acc_anpeq15_vis: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    // illuminator high
    class rhsusf_acc_anpeq15_ih_25MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_50MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_75MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_100MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    // dual high
    class rhsusf_acc_anpeq15_dh_25MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_50MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_75MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_100MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };


    // dual low
    class rhsusf_acc_anpeq15_dl_25MRAD: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_50MRAD: rhsusf_acc_anpeq15_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_75MRAD: rhsusf_acc_anpeq15_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_100MRAD: rhsusf_acc_anpeq15_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15 {};

    class rhsusf_acc_anpeq15_light_ir: rhsusf_acc_anpeq15_light {
        class ItemInfo: ItemInfo {
            class Flashlight: Flashlight {
                // for test purposes
                irLight=1;
                scale[]={1,1,1};
                ambient[]={1,1,1};
                color[]={1,1,1};
                intensity=600;
                onlyInNvg=1; // not sure what it does, but it's 0 right now
            };
        };
    };

    class rhsusf_acc_anpeq15_bk: rhsusf_acc_anpeq15 {};
    class rhsusf_acc_anpeq15_bk_al: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    // aim vis
    class rhsusf_acc_anpeq15_bk_vis: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    // illuminator high
    class rhsusf_acc_anpeq15_bk_ih_25MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_50MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_75MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_100MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    // dual high
    class rhsusf_acc_anpeq15_bk_dh_25MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_50MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_75MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_100MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };


    // dual low
    class rhsusf_acc_anpeq15_bk_dl_25MRAD: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_50MRAD: rhsusf_acc_anpeq15_bk_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_75MRAD: rhsusf_acc_anpeq15_bk_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_100MRAD: rhsusf_acc_anpeq15_bk_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_light: rhsusf_acc_anpeq15_bk {};
    class rhsusf_acc_anpeq15_bk_light_ir: rhsusf_acc_anpeq15_bk_light {
        class ItemInfo: ItemInfo {
            class Flashlight: Flashlight {
                irLight=1;
            };
        };
    };

    class rhsusf_acc_M952V: rhsusf_acc_anpeq15_light {};
    class rhsusf_acc_M952V_IR : rhsusf_acc_M952V {
        class ItemInfo: ItemInfo {
            class Flashlight: Flashlight {
                irLight=1;
            };
        };
    };

    class rhsusf_acc_wmx: rhsusf_acc_M952V {};
    class rhsusf_acc_wmx_ir : rhsusf_acc_wmx {
        class ItemInfo: ItemInfo {
            class Flashlight: Flashlight {
                irLight=1;
            };
        };
    };

    class rhsusf_acc_wmx_bk: rhsusf_acc_M952V {};
    class rhsusf_acc_wmx_bk_ir : rhsusf_acc_wmx_bk {
        class ItemInfo: ItemInfo {
            class Flashlight: Flashlight {
                irLight=1;
            };
        };
    };

    class rhsusf_acc_anpeq16a: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq16a_vis: rhsusf_acc_anpeq16a {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_light: rhsusf_acc_anpeq15_light {};
    

    class rhsusf_acc_anpeq16a_dvis: rhsusf_acc_anpeq16a_light {
        class ItemInfo: ItemInfo {
            // no pointer to inherit from in the light config
            class Pointer: Pointer {
                irLaserPos="laser pos";
                irLaserEnd="laser dir";
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
            class Flashlight;
        };
    };

    class rhsusf_acc_anpeq16a_al: rhsusf_acc_anpeq16a {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };
 
    class rhsusf_acc_anpeq16a_dl_25MRAD: rhsusf_acc_anpeq16a_al {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_50MRAD: rhsusf_acc_anpeq16a_al {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_75MRAD: rhsusf_acc_anpeq16a_al {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_105MRAD: rhsusf_acc_anpeq16a_al {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(105,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_25MRAD: rhsusf_acc_anpeq16a {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_50MRAD: rhsusf_acc_anpeq16a {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_75MRAD: rhsusf_acc_anpeq16a {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_105MRAD: rhsusf_acc_anpeq16a {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(105,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_wmx: rhsusf_acc_anpeq15 {
         class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq15_wmx_vis: rhsusf_acc_anpeq15_wmx {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_al: rhsusf_acc_anpeq15_wmx {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_25MRAD: rhsusf_acc_anpeq15_wmx {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_50MRAD: rhsusf_acc_anpeq15_wmx_ih_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_75MRAD: rhsusf_acc_anpeq15_wmx_ih_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_100MRAD: rhsusf_acc_anpeq15_wmx_ih_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_25MRAD: rhsusf_acc_anpeq15_wmx {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_50MRAD: rhsusf_acc_anpeq15_wmx_dh_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_75MRAD: rhsusf_acc_anpeq15_wmx_dh_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_100MRAD: rhsusf_acc_anpeq15_wmx_dh_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_25MRAD: rhsusf_acc_anpeq15_wmx_al {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_50MRAD: rhsusf_acc_anpeq15_wmx_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_75MRAD: rhsusf_acc_anpeq15_wmx_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_100MRAD: rhsusf_acc_anpeq15_wmx_dl_25MRAD {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_light: rhsusf_acc_anpeq15_wmx {};

    class rhsusf_acc_anpeq15_wmx_light_ir : rhsusf_acc_anpeq15_wmx_light {
        class ItemInfo: ItemInfo {
            class Flashlight {
                irLight=1;
                scale[]={1,1,1};
                ambient[]={1,1,1};
                color[]={1,1,1};
                intensity=600;
                onlyInNvg=1; // not sure what it does, but it's 0 right now
            };
        };
    };
};
