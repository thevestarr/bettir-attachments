#include "..\..\include\presets\peq15.hpp"
#include "..\..\include\presets\dbal_a2.hpp"
#include "placeholderNGAL.hpp"

#define QUOTE(var1) #var1
#define NOLASER class pointer {};
#define LASERHI class pointer: pointer {BETTIR_IR_LASER_PRESET_DBAL_A2};
#define LASERLO class pointer: pointer {BETTIR_IR_LASER_PRESET_DBAL_A2_LO};
#define PEQCONF(MRAD,HIGH) BETTIR_ILLUMINATOR_PRESET_PEQ15(MRAD,"laser_pos","laser_dir",HIGH)
#define NGALCONF(MRAD,HIGH) BETTIR_ILLUMINATOR_PRESET_NGAL(MRAD,"laser_pos","laser_dir",HIGH)

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

#define TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,MODE,MRAD,LASERCONF,ILLUMCONF) \
    class BASECLASS##_##MODE##_##MRAD##mrad: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class ItemInfo: ItemInfo { \
            LASERCONF \
            class Flashlight { \
                ILLUMCONF \
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
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,25,LASERLO,NGALCONF(25,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,50,LASERLO,NGALCONF(50,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,75,LASERLO,NGALCONF(75,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,105,LASERLO,NGALCONF(100,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,25,LASERHI,NGALCONF(25,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,50,LASERHI,NGALCONF(50,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,75,LASERHI,NGALCONF(75,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,105,LASERHI,NGALCONF(100,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,25,LASERHI,NGALCONF(25,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,50,NOLASER,NGALCONF(50,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,75,NOLASER,NGALCONF(75,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,105,NOLASER,NGALCONF(100,1)) 

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
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,25,LASERLO,NGALCONF(25,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,50,LASERLO,NGALCONF(50,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,75,LASERLO,NGALCONF(75,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,105,LASERLO,NGALCONF(100,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,25,LASERHI,NGALCONF(25,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,50,LASERHI,NGALCONF(50,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,75,LASERHI,NGALCONF(75,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,105,LASERHI,NGALCONF(100,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,25,LASERHI,NGALCONF(25,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,50,NOLASER,NGALCONF(50,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,75,NOLASER,NGALCONF(75,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,105,NOLASER,NGALCONF(100,1))  

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
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,25,LASERLO,PEQCONF(25,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,50,LASERLO,PEQCONF(50,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,75,LASERLO,PEQCONF(75,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,100,LASERLO,PEQCONF(100,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,25,LASERHI,PEQCONF(25,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,50,LASERHI,PEQCONF(50,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,75,LASERHI,PEQCONF(75,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,100,LASERHI,PEQCONF(100,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,25,LASERHI,PEQCONF(25,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,50,NOLASER,PEQCONF(50,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,75,NOLASER,PEQCONF(75,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,100,NOLASER,PEQCONF(100,1)) 

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
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,25,LASERLO,PEQCONF(25,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,50,LASERLO,PEQCONF(50,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,75,LASERLO,PEQCONF(75,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DL,100,LASERLO,PEQCONF(100,0)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,25,LASERHI,PEQCONF(25,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,50,LASERHI,PEQCONF(50,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,75,LASERHI,PEQCONF(75,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,DH,100,LASERHI,PEQCONF(100,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,25,LASERHI,PEQCONF(25,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,50,NOLASER,PEQCONF(50,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,75,NOLASER,PEQCONF(75,1)) \
    TIERONE_CFG_WEAPONS_ATTACHMENT_MRAD(BASECLASS,IH,100,NOLASER,PEQCONF(100,1)) 
