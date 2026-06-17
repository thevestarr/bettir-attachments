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







    /** _h height */
    class rhsusf_acc_anpeq15_wmx_h : rhsusf_acc_anpeq15_wmx {
         class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq15_wmx_vis_h : rhsusf_acc_anpeq15_wmx_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_al_h : rhsusf_acc_anpeq15_wmx_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_25MRAD_h : rhsusf_acc_anpeq15_wmx_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_50MRAD_h : rhsusf_acc_anpeq15_wmx_ih_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_75MRAD_h : rhsusf_acc_anpeq15_wmx_ih_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_100MRAD_h : rhsusf_acc_anpeq15_wmx_ih_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_25MRAD_h : rhsusf_acc_anpeq15_wmx_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_50MRAD_h : rhsusf_acc_anpeq15_wmx_dh_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_75MRAD_h : rhsusf_acc_anpeq15_wmx_dh_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_100MRAD_h : rhsusf_acc_anpeq15_wmx_dh_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_25MRAD_h : rhsusf_acc_anpeq15_wmx_al_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_50MRAD_h : rhsusf_acc_anpeq15_wmx_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_75MRAD_h : rhsusf_acc_anpeq15_wmx_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_100MRAD_h : rhsusf_acc_anpeq15_wmx_dl_25MRAD_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_light_h : rhsusf_acc_anpeq15_wmx_light {};

    class rhsusf_acc_anpeq15_wmx_light_ir_h : rhsusf_acc_anpeq15_wmx_light_h {
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




    /** _sc height */
    class rhsusf_acc_anpeq15_wmx_sc : rhsusf_acc_anpeq15_wmx {
         class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq15_wmx_vis_sc : rhsusf_acc_anpeq15_wmx_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_al_sc : rhsusf_acc_anpeq15_wmx_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_25MRAD_sc : rhsusf_acc_anpeq15_wmx_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_50MRAD_sc : rhsusf_acc_anpeq15_wmx_ih_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_75MRAD_sc : rhsusf_acc_anpeq15_wmx_ih_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_ih_100MRAD_sc : rhsusf_acc_anpeq15_wmx_ih_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_25MRAD_sc : rhsusf_acc_anpeq15_wmx_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_50MRAD_sc : rhsusf_acc_anpeq15_wmx_dh_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_75MRAD_sc : rhsusf_acc_anpeq15_wmx_dh_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dh_100MRAD_sc : rhsusf_acc_anpeq15_wmx_dh_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_25MRAD_sc : rhsusf_acc_anpeq15_wmx_al_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_50MRAD_sc : rhsusf_acc_anpeq15_wmx_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_75MRAD_sc : rhsusf_acc_anpeq15_wmx_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_dl_100MRAD_sc : rhsusf_acc_anpeq15_wmx_dl_25MRAD_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(100,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq15_wmx_light_sc : rhsusf_acc_anpeq15_wmx_light {};

    class rhsusf_acc_anpeq15_wmx_light_ir_sc : rhsusf_acc_anpeq15_wmx_light_sc {
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