#include "..\..\include\presets\peq15.hpp"
#include "..\..\include\presets\dbal_a2.hpp"
#include "placeholderNGAL.hpp"

#define QUOTE(var1) #var1

#define TIERONE_CONFIG_NGAL(BASECLASS) \
    class BASECLASS: bettir_base_ngal { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_tierOne_compat_fnc_NGAL_parse"; \
        classComposer="bettir_tierOne_compat_fnc_NGAL_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_visAH: BASECLASS {}; \
    class BASECLASS##_visAL: BASECLASS {}; \
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
    class BASECLASS##_DL_105MRAD: BASECLASS {}; \
    class BASECLASS##_IH_105MRAD: BASECLASS {}; \
    class BASECLASS##_DH_105MRAD: BASECLASS {};

#define TIERONE_CONFIG_NGAL_FL(BASECLASS) \
    class BASECLASS: bettir_base_ngal_genericflashlightcombo { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_tierOne_compat_fnc_NGAL_parse"; \
        classComposer="bettir_tierOne_compat_fnc_NGAL_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_visAH: BASECLASS {}; \
    class BASECLASS##_visAL: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_FL: BASECLASS {};  \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DL_75MRAD: BASECLASS {}; \
    class BASECLASS##_IH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DL_105MRAD: BASECLASS {}; \
    class BASECLASS##_IH_105MRAD: BASECLASS {}; \
    class BASECLASS##_DH_105MRAD: BASECLASS {};

#define TIERONE_CONFIG_LA5(BASECLASS) \
    class BASECLASS: bettir_base_peq15 { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_tierOne_compat_fnc_LA5_parse"; \
        classComposer="bettir_tierOne_compat_fnc_LA5_compose"; \
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

#define TIERONE_CONFIG_LA5_FL(BASECLASS) \
    class BASECLASS: bettir_base_peq15_genericflashlightcombo { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_tierOne_compat_fnc_LA5_parse"; \
        classComposer="bettir_tierOne_compat_fnc_LA5_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_vis: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_FL: BASECLASS {};  \
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

#define TIERONE_RAILS_NGAL(BASECLASS) \
        BASECLASS##=1; \
        BASECLASS##_visAH=1; \
        BASECLASS##_visAL=1; \
        BASECLASS##_AL=1;  \
        BASECLASS##_DL_25MRAD=1;  \
        BASECLASS##_IH_25MRAD=1;  \
        BASECLASS##_DH_25MRAD=1;  \
        BASECLASS##_DL_50MRAD=1;  \
        BASECLASS##_IH_50MRAD=1;  \
        BASECLASS##_DH_50MRAD=1;  \
        BASECLASS##_DL_105MRAD=1;  \
        BASECLASS##_IH_105MRAD=1;  \
        BASECLASS##_DH_105MRAD=1;

#define TIERONE_RAILS_NGAL_FL(BASECLASS) \
        BASECLASS##=1; \
        BASECLASS##_visAH=1; \
        BASECLASS##_visAL=1; \
        BASECLASS##_AL=1;  \
        BASECLASS##_FL=1;  \
        BASECLASS##_DL_25MRAD=1;  \
        BASECLASS##_IH_25MRAD=1;  \
        BASECLASS##_DH_25MRAD=1;  \
        BASECLASS##_DL_50MRAD=1;  \
        BASECLASS##_IH_50MRAD=1;  \
        BASECLASS##_DH_50MRAD=1;  \
        BASECLASS##_DL_105MRAD=1;  \
        BASECLASS##_IH_105MRAD=1;  \
        BASECLASS##_DH_105MRAD=1;

#define TIERONE_RAILS_LA5(BASECLASS) \
        BASECLASS##=1; \
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

#define TIERONE_RAILS_LA5_FL(BASECLASS) \
        BASECLASS##=1; \
        BASECLASS##_vis=1; \
        BASECLASS##_AL=1;  \
        BASECLASS##_FL=1;  \
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

#define TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,MODE,MRAD,HIGH,TYPE) \
    class BASECLASS##_##MODE##_##MRAD##mrad: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class ItemInfo: ItemInfo { \
        #if MODE == IH \
            class Pointer {}; \
        #else \
            #if HIGH == 1 \
                class Pointer: Pointer { \
                    BETTIR_IR_LASER_PRESET_DBAL_A2 \
                }; \
            #else \
            class Pointer: Pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
            #endif \
        #endif \
            class Flashlight: Flashlight { \
                BETTIR_ILLUMINATOR_PRESET_PEQ15(MRAD,"laser_pos","laser_dir",HIGH) \
            }; \
        }; \
    }; 

#define TIERONE_CFG_WEAPONS_NGAL(BASECLASS) \
    class BASECLASS: acc_pointer_IR { \
        scope = 2; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2 \
            }; \
        }; \
    }; \
\
    class BASECLASS##_al: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_visAH: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_visAL: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,25,0,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,50,0,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,75,0,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,105,0,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,25,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,50,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,75,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,105,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,25,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,50,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,75,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,105,1,NGAL) \

#define TIERONE_CFG_WEAPONS_NGAL_FL(BASECLASS) \
    class BASECLASS: acc_pointer_IR { \
        scope = 2; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2 \
            }; \
        }; \
    }; \
\
    class BASECLASS##_al: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_visAH: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_visAL: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,25,0,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,50,0,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,75,0,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,105,0,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,25,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,50,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,75,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,105,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,25,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,50,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,75,1,NGAL) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,105,1,NGAL) \

#define TIERONE_CFG_WEAPONS_LA5(BASECLASS) \
     class BASECLASS: acc_pointer_IR { \
        scope = 2; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2 \
            }; \
        }; \
    }; \
\
    class BASECLASS##_al: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_vis: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,25,0,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,50,0,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,75,0,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,100,0,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,25,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,50,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,75,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,100,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,25,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,50,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,75,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,100,1,PEQ15) \

#define TIERONE_CFG_WEAPONS_LA5_FL(BASECLASS) \
     class BASECLASS: acc_pointer_IR { \
        scope = 2; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2 \
            }; \
        }; \
    }; \
\
    class BASECLASS##_al: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_vis: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,25,0,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,50,0,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,75,0,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DL,100,0,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,25,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,50,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,75,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,DH,100,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,25,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,50,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,75,1,PEQ15) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(##BASECLASS##,IH,100,1,PEQ15) \
