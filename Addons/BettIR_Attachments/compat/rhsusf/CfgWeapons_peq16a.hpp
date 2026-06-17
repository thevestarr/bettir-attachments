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







    /** TOP variant, base height */
    class rhsusf_acc_anpeq16a_top: rhsusf_acc_anpeq16a {
        class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq16a_vis_top: rhsusf_acc_anpeq16a_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_light_top: rhsusf_acc_anpeq16a_light {};

    class rhsusf_acc_anpeq16a_dvis_top: rhsusf_acc_anpeq16a_light_top {
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

    class rhsusf_acc_anpeq16a_al_top: rhsusf_acc_anpeq16a_top {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };
 
    class rhsusf_acc_anpeq16a_dl_25MRAD_top: rhsusf_acc_anpeq16a_al_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_50MRAD_top: rhsusf_acc_anpeq16a_al_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_75MRAD_top: rhsusf_acc_anpeq16a_al_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_105MRAD_top: rhsusf_acc_anpeq16a_al_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(105,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_25MRAD_top: rhsusf_acc_anpeq16a_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_50MRAD_top: rhsusf_acc_anpeq16a_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_75MRAD_top: rhsusf_acc_anpeq16a_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_105MRAD_top: rhsusf_acc_anpeq16a_top {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(105,"laser pos","laser dir",1)
            };
        };
    };





    /** TOP variant, _h height */
    class rhsusf_acc_anpeq16a_top_h: rhsusf_acc_anpeq16a_top {
        class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq16a_vis_top_h: rhsusf_acc_anpeq16a_top_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_light_top_h: rhsusf_acc_anpeq16a_light_top {};

    class rhsusf_acc_anpeq16a_dvis_top_h: rhsusf_acc_anpeq16a_light_top_h {
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

    class rhsusf_acc_anpeq16a_al_top_h: rhsusf_acc_anpeq16a_top_h {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };
 
    class rhsusf_acc_anpeq16a_dl_25MRAD_top_h: rhsusf_acc_anpeq16a_al_top_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_50MRAD_top_h: rhsusf_acc_anpeq16a_al_top_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_75MRAD_top_h: rhsusf_acc_anpeq16a_al_top_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_105MRAD_top_h: rhsusf_acc_anpeq16a_al_top_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(105,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_25MRAD_top_h: rhsusf_acc_anpeq16a_top_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_50MRAD_top_h: rhsusf_acc_anpeq16a_top_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_75MRAD_top_h: rhsusf_acc_anpeq16a_top_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_105MRAD_top_h: rhsusf_acc_anpeq16a_top_h {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(105,"laser pos","laser dir",1)
            };
        };
    };





     /** TOP variant, _sc height */
    class rhsusf_acc_anpeq16a_top_sc: rhsusf_acc_anpeq16a_top {
        class ItemInfo: ItemInfo {
            class Pointer;
        };
    };

    class rhsusf_acc_anpeq16a_vis_top_sc: rhsusf_acc_anpeq16a_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_light_top_sc: rhsusf_acc_anpeq16a_light_top {};

    class rhsusf_acc_anpeq16a_dvis_top_sc: rhsusf_acc_anpeq16a_light_top_sc {
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

    class rhsusf_acc_anpeq16a_al_top_sc: rhsusf_acc_anpeq16a_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO
            };
        };
    };
 
    class rhsusf_acc_anpeq16a_dl_25MRAD_top_sc: rhsusf_acc_anpeq16a_al_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_50MRAD_top_sc: rhsusf_acc_anpeq16a_al_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_75MRAD_top_sc: rhsusf_acc_anpeq16a_al_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dl_105MRAD_top_sc: rhsusf_acc_anpeq16a_al_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(105,"laser pos","laser dir",0)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_25MRAD_top_sc: rhsusf_acc_anpeq16a_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(25,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_50MRAD_top_sc: rhsusf_acc_anpeq16a_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(50,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_75MRAD_top_sc: rhsusf_acc_anpeq16a_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(75,"laser pos","laser dir",1)
            };
        };
    };
    
    class rhsusf_acc_anpeq16a_dh_105MRAD_top_sc: rhsusf_acc_anpeq16a_top_sc {
        class ItemInfo: ItemInfo {
            class Pointer;
            class Flashlight: Flashlight {
                BETTIR_ILLUMINATOR_PRESET_PEQ15(105,"laser pos","laser dir",1)
            };
        };
    };


