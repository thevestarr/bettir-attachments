#include "..\..\include\presets\peq15.hpp"
#include "..\..\include\presets\dbal_a2.hpp"

#include "macros.hpp"

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

    /*  =============

        RHS: AN/PEQ-15 Standalone, side

        ============= */

    
    #include "CfgWeapons_peq15side.hpp"


    /*  =============

        RHS: AN/PEQ-15 Standalone, top

        ============= */

    // rhs has its own dbal for some reason and it uses the same model as core
    // also somehow it's the base class for the top variant (??)
    class rhsusf_acc_anpeq15a: acc_pointer_IR {};

    #include "CfgWeapons_peq15_top.hpp"


    /*  =============

        RHS: AN/PEQ-15 + M952V combo

        ============= */
    #include "CfgWeapons_peq15.hpp"

    /*  =============

        RHS: FLASHLIGHTS

        ============= */

    class rhsusf_acc_M952V: rhsusf_acc_anpeq15_light {};
    class rhsusf_acc_M952V_IR : rhsusf_acc_M952V {
        class ItemInfo: ItemInfo {
            class Flashlight {
                RHS_M952V_FLASHLIGHT_CONFIG
                irLight=1;
            };
        };
    };

    class rhsusf_acc_wmx: rhsusf_acc_M952V {};
    class rhsusf_acc_wmx_ir : rhsusf_acc_wmx {
        class ItemInfo: ItemInfo {
            class Flashlight {
                RHS_WMX_FLASHLIGHT_CONFIG
                irLight=1;
            };
        };
    };

    class rhsusf_acc_wmx_bk: rhsusf_acc_M952V {};
    class rhsusf_acc_wmx_bk_ir : rhsusf_acc_wmx_bk {
        class ItemInfo: ItemInfo {
            class Flashlight {
                RHS_WMX_FLASHLIGHT_CONFIG
                irLight=1;
            };
        };
    };


    /*  =============

        RHS: AN/PEQ-16A

        ============= */

    #include "CfgWeapons_peq16a.hpp"


    /*  =============

        RHS: AN/PEQ-15 + WMX Combo

        ============= */

    #include "CfgWeapons_peq15_wmx.hpp"
};
