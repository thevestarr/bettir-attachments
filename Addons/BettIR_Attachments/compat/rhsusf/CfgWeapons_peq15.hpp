    class rhsusf_acc_anpeq15: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2
            };
        };
    };

    class rhsusf_acc_anpeq15_al: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15_vis: rhsusf_acc_anpeq15 {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

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







    /** TAN, _h height*/
    class rhsusf_acc_anpeq15_h: rhsusf_acc_anpeq15 {};

    class rhsusf_acc_anpeq15_al_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15_vis_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_25MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_50MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_75MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_100MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_25MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_50MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_75MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_100MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_25MRAD_h: rhsusf_acc_anpeq15_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_50MRAD_h: rhsusf_acc_anpeq15_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_75MRAD_h: rhsusf_acc_anpeq15_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_100MRAD_h: rhsusf_acc_anpeq15_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_light_h: rhsusf_acc_anpeq15_light {};

    class rhsusf_acc_anpeq15_light_ir_h: rhsusf_acc_anpeq15_light_h {
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







    /** TAN, _sc height*/
    class rhsusf_acc_anpeq15_sc: rhsusf_acc_anpeq15 {};

    class rhsusf_acc_anpeq15_al_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15_vis_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_25MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_50MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_75MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_ih_100MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_25MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_50MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_75MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dh_100MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_25MRAD_sc: rhsusf_acc_anpeq15_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_50MRAD_sc: rhsusf_acc_anpeq15_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_75MRAD_sc: rhsusf_acc_anpeq15_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_dl_100MRAD_sc: rhsusf_acc_anpeq15_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_light_sc: rhsusf_acc_anpeq15_light {};

    class rhsusf_acc_anpeq15_light_ir_sc: rhsusf_acc_anpeq15_light_sc {
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









    /** BLK, base height*/
    class rhsusf_acc_anpeq15_bk: rhsusf_acc_anpeq15 {};
    class rhsusf_acc_anpeq15_bk_al: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_vis: rhsusf_acc_anpeq15_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

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

    class rhsusf_acc_anpeq15_bk_light: rhsusf_acc_anpeq15_light {};
    class rhsusf_acc_anpeq15_bk_light_ir: rhsusf_acc_anpeq15_bk_light {
        class ItemInfo: ItemInfo {
            class Flashlight: Flashlight {
                irLight=1;
            };
        };
    };







    /** BLK, _h height*/
    class rhsusf_acc_anpeq15_bk_h: rhsusf_acc_anpeq15_bk {};

    class rhsusf_acc_anpeq15_bk_al_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_vis_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_25MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_50MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_75MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_100MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_25MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_50MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_75MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_100MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_25MRAD_h: rhsusf_acc_anpeq15_bk_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_50MRAD_h: rhsusf_acc_anpeq15_bk_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_75MRAD_h: rhsusf_acc_anpeq15_bk_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_100MRAD_h: rhsusf_acc_anpeq15_bk_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_light_h: rhsusf_acc_anpeq15_bk_light {};

    class rhsusf_acc_anpeq15_bk_light_ir_h: rhsusf_acc_anpeq15_bk_light_h {
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






    /** BLK, _sc height*/
    class rhsusf_acc_anpeq15_bk_sc: rhsusf_acc_anpeq15_bk {};

    class rhsusf_acc_anpeq15_bk_al_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_vis_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_25MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_50MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_75MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_ih_100MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_25MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_50MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_75MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dh_100MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_25MRAD_sc: rhsusf_acc_anpeq15_bk_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_50MRAD_sc: rhsusf_acc_anpeq15_bk_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_75MRAD_sc: rhsusf_acc_anpeq15_bk_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_dl_100MRAD_sc: rhsusf_acc_anpeq15_bk_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };

    class rhsusf_acc_anpeq15_bk_light_sc: rhsusf_acc_anpeq15_bk_light {};

    class rhsusf_acc_anpeq15_bk_light_ir_sc: rhsusf_acc_anpeq15_bk_light_sc {
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
