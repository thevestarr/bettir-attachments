#define QUOTE(x) #x
#define GLUE(a,b) a##b
#define PEQCONF(MRAD,HIGH) BETTIR_ILLUMINATOR_PRESET_PEQ15(MRAD,"laser_pos","laser_dir",HIGH)
#define NGALCONF(MRAD,HIGH) BETTIR_ILLUMINATOR_PRESET_NGAL(MRAD,"laser_pos","laser_dir",HIGH)
#define NOLASER class pointer {};
#define LASERHI class pointer: pointer {BETTIR_IR_LASER_PRESET_DBAL_A2};
#define LASERLO class pointer: pointer {BETTIR_IR_LASER_PRESET_DBAL_A2_LO};

#define CLEARMRT \
	MRT_SwitchItemNextClass="";\
	MRT_SwitchItemPrevClass="";\
	MRT_switchItemHintText="";\

#define MCC_CONFIG_NGAL(BASECLASS) \
    class BASECLASS : bettir_base_ngal { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_compat_MCC_fnc_NGAL_parse"; \
        classComposer="bettir_compat_MCC_fnc_NGAL_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_IRL: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_visAH: BASECLASS {}; \
    class BASECLASS##_visAL: BASECLASS {}; \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
	class BASECLASS##_DL_75MRAD: BASECLASS {};  \
    class BASECLASS##_IH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DL_105MRAD: BASECLASS {}; \
    class BASECLASS##_IH_105MRAD: BASECLASS {}; \
    class BASECLASS##_DH_105MRAD: BASECLASS {}; 


#define MCC_CONFIG_NGAL_WL(BASECLASS) \
    class BASECLASS : bettir_base_ngal_genericflashlightcombo { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_compat_MCC_fnc_NGAL_parse"; \
        classComposer="bettir_compat_MCC_fnc_NGAL_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_IRL: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_visAH: BASECLASS {}; \
    class BASECLASS##_visAL: BASECLASS {}; \
    class BASECLASS##_WL: BASECLASS {};  \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
	class BASECLASS##_DL_75MRAD: BASECLASS {};  \
    class BASECLASS##_IH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DL_105MRAD: BASECLASS {}; \
    class BASECLASS##_IH_105MRAD: BASECLASS {}; \
    class BASECLASS##_DH_105MRAD: BASECLASS {}; 

// TODO: better preset, update mempoints
#define MCC_WEAPONCONFIG_PEQ15_MRAD(BASECLASS,MODE,MRAD,MRTCONFIG,LASERCONF,ILLUMCONF) \
    class BASECLASS##_##MODE##_##MRAD##mrad: BASECLASS { \
        scope=1; \
        scopeArsenal=1; \
        baseWeapon = QUOTE(BASECLASS); \
		MRTCONFIG \
        class ItemInfo: ItemInfo { \
            LASERCONF \
            class flashlight{ \
                ILLUMCONF \
            } \
        }; \
    }; 

#define MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,MODE,MRAD,MRTCONFIG,LASERCONF,ILLUMCONF) \
    class BASECLASS##_##MODE##_##MRAD##mrad: BASECLASS { \
		scope=1; \
        scopeArsenal=1; \
        baseWeapon = QUOTE(BASECLASS); \
		MRTCONFIG \
        class ItemInfo: ItemInfo { \
            LASERCONF \
            class flashlight{ \
                ILLUMCONF \
            } \
        }; \
    };


// OMITS because they are defined in the base already
// IR high and white light (duh)
// AIM LOW
// DUAL HIGH 105MRAD
// DUAL HIGH 25MRAD ?
#define MCC_WEAPONCONFIG_NGAL(BASECLASS,INHERITANCECLASS) \
    class BASECLASS##_IRL: INHERITANCECLASS { \
        CLEARMRT \
        class ItemInfo { \
            LASERHI \
        }; \
    }; \
\
    class BASECLASS##_al: BASECLASS##_IRL { \
		baseWeapon = QUOTE(GLUE(BASECLASS,_IRL)); \
        scope=1; \
		CLEARMRT \
        class itemInfo: itemInfo { \
            LASERLO \
        }; \
    }; \
 \
    class BASECLASS##_visAH: BASECLASS##_IRL { \
        scope=1; \
		baseWeapon = QUOTE(GLUE(BASECLASS,_IRL)); \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
\
    class BASECLASS##_visAH: BASECLASS##_IRL { \
        scope=1; \
        CLEARMRT \
    }; \
    class BASECLASS##_WL: INHERITANCECLASS { \
        CLEARMRT \
    } \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,DL,25,CLEARMRT,LASERLO,NGALCONF(25,0)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,IH,25,CLEARMRT,NOLASER,NGALCONF(25,1)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,DH,25,CLEARMRT,LASERHI,NGALCONF(25,1)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,DL,50,CLEARMRT,LASERLO,NGALCONF(50,0)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,IH,50,CLEARMRT,NOLASER,NGALCONF(50,1)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,DH,50,CLEARMRT,LASERHI,NGALCONF(50,1)) \
	MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,DL,75,CLEARMRT,LASERLO,NGALCONF(75,0)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,IH,75,CLEARMRT,NOLASER,NGALCONF(75,1)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,DH,75,CLEARMRT,LASERHI,NGALCONF(75,1)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,DL,105,CLEARMRT,LASERLO,NGALCONF(105,0)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,IH,105,CLEARMRT,NOLASER,NGALCONF(105,1)) \
    MCC_WEAPONCONFIG_NGAL_MRAD(BASECLASS,DH,105,CLEARMRT,NOLASER,NGALCONF(105,1)) \


#define MCC_RAILS_NGAL(BASECLASS) \
	BASECLASS##_vis=1;\
	BASECLASS##_AL=1;\
	BASECLASS##_DL_25MRAD=1;  \
	BASECLASS##_IH_25MRAD=1;  \
	BASECLASS##_DH_25MRAD=1;  \
	BASECLASS##_DL_50MRAD=1;  \
	BASECLASS##_IH_50MRAD=1;  \
	BASECLASS##_DH_50MRAD=1;  \
	BASECLASS##_DL_75MRAD=1;  \
	BASECLASS##_IH_75MRAD=1;  \
	BASECLASS##_DH_75MRAD=1;  \
	BASECLASS##_DL_100MRAD=1;  \
	BASECLASS##_IH_100MRAD=1;  \
	BASECLASS##_DH_100MRAD=1;



#define MCC_CONFIG_LA5(BASECLASS) \
    class BASECLASS: bettir_base_peq15 { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_compats_MCC_fnc_LA5_parse"; \
        classComposer="bettir_compats_MCC_fnc_LA5_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_vis: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DL_75MRAD: BASECLASS {};  \
    class BASECLASS##_IH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DL_100MRAD: BASECLASS {}; \
    class BASECLASS##_IH_100MRAD: BASECLASS {}; \
    class BASECLASS##_DH_100MRAD: BASECLASS {}; 

#define MCC_CONFIG_LA5_WL(BASECLASS) \
    class BASECLASS: bettir_base_peq15_genericflashlightcombo { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_compat_MCC_fnc_LA5_parse"; \
        classComposer="bettir_compat_MCC_fnc_LA5_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_vis: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##T: BASECLASS {};  \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DL_75MRAD: BASECLASS {};  \
    class BASECLASS##_IH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DL_100MRAD: BASECLASS {}; \
    class BASECLASS##_IH_100MRAD: BASECLASS {}; \
    class BASECLASS##_DH_100MRAD: BASECLASS {}; 


#define MCC_RAILS_LA5(BASECLASS) \
	BASECLASS##_vis=1; \
	BASECLASS##_AL=1;  \
	BASECLASS##_DL_25MRAD=1;  \
	BASECLASS##_IH_25MRAD=1;  \
	BASECLASS##_DH_25MRAD=1;  \
	BASECLASS##_DL_50MRAD=1;  \
	BASECLASS##_IH_50MRAD=1;  \
	BASECLASS##_DH_50MRAD=1;  \
	BASECLASS##_DL_75MRAD=1;  \
	BASECLASS##_IH_75MRAD=1;  \
	BASECLASS##_DH_75MRAD=1;  \
	BASECLASS##_DL_100MRAD=1;  \
	BASECLASS##_IH_100MRAD=1;  \
	BASECLASS##_DH_100MRAD=1;  


#define MCC_WEAPONCONFIG_LA5(BASECLASS) \
    class BASECLASS##_al: BASECLASS { \
		baseWeapon = QUOTE(BASECLASS); \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_vis: BASECLASS { \
		baseWeapon = QUOTE(BASECLASS); \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,DL,25) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,IH,25) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,DH,25) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,DL,50) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,IH,50) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,DH,50) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,DL,75) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,IH,75) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,DH,75) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,DL,100) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,IH,100) \
    MCC_WEAPONCONFIG_PEQ15_MRAD(##BASECLASS##,DH,100)