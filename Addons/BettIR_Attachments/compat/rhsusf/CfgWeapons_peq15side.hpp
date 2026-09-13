    class rhsusf_acc_anpeq15side: acc_pointer_IR {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                // Apparently RHS doesnt inherit the laser params from vanilla
                BETTIR_IR_LASER_PRESET_DBAL_A2
            };
        };
    };

    class rhsusf_acc_anpeq15side_al: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15side_vis: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

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








    /** black variant */
    class rhsusf_acc_anpeq15side_bk: rhsusf_acc_anpeq15side {
        class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq15side_bk_al: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };

    class rhsusf_acc_anpeq15side_bk_vis: rhsusf_acc_anpeq15side_bk {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };

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