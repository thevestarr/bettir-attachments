
class CfgWeapons {
    class ItemCore;
    class acc_flashlight;

    class InventoryFlashLightItem_Base_F {
        class Flashlight;
        class Pointer;
    };

    // default variants 
    class acc_pointer_IR: ItemCore {
        displayName = "Steiner DBAL A2 (Laser)";
        MRT_SwitchItemNextClass = "";
        MRT_SwitchItemPrevClass = "";
        MRT_switchItemHintText = "";

        class ItemInfo: InventoryFlashLightItem_Base_F {};
    };

    // Why is this not the default laser though?
    class ACE_acc_pointer_green_IR: acc_pointer_IR {
        scope=2;
        displayName="Steiner DBAL A2 Green (Laser)";
        MRT_SwitchItemNextClass = "";
        MRT_SwitchItemPrevClass = "";
        MRT_switchItemHintText = "";
    };

    class ACE_acc_pointer_red: acc_pointer_IR {
        scope=1;
        MRT_SwitchItemNextClass = "";
        MRT_SwitchItemPrevClass = "";
        MRT_switchItemHintText = "";
    };

    class ACE_acc_pointer_green: ACE_acc_pointer_red {
        scope=1;
        displayName="Steiner DBAL A2 Green (Laser, Green)";
        model="BettIR_Attachments\data\models\DBAL_vis_hi.p3d";
        MRT_SwitchItemNextClass = "";
        MRT_SwitchItemPrevClass = "";
        MRT_switchItemHintText = "";

        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                isIR=0;
                irDotSize=0.015;
                beamThickness=0.00015;
                beamColor[]={0,50000000,0};
                dotColor[]={0,5000,0};
            };
        };
    };

    class ACE_acc_pointer_green_LO: ACE_acc_pointer_green {
        displayName="Steiner DBAL A2 (Laser, Green, LO)";
        model="BettIR_Attachments\data\models\DBAL_vis_lo.p3d";
        MRT_SwitchItemNextClass = "";
        MRT_SwitchItemPrevClass = "";
        MRT_switchItemHintText = "";

        class ItemInfo: ItemInfo {
            class Pointer: Pointer {
                isIR=0;
                irDotSize=0.003;
                beamThickness=0;
                beamColor[]={0,0,0};
                dotColor[]={0,3000,0};
            };
        };
    };


    // hide ACE DBAL A3 from gear selection
    class ACE_DBAL_A3_Red: acc_pointer_IR {
        scope=1;
    };

    class ACE_DBAL_A3_Green: ACE_DBAL_A3_Red {
        scope=1;
    };

    // let's also use ACE SPIR
    class ACE_SPIR: acc_flashlight {
        MRT_SwitchItemNextClass = "";
        MRT_SwitchItemPrevClass = "";
        MRT_switchItemHintText = "";
    };

    class ACE_SPIR_Medium: ACE_SPIR {
        MRT_SwitchItemNextClass = "";
        MRT_SwitchItemPrevClass = "";
        MRT_switchItemHintText = "";
    };

    class ACE_SPIR_Narrow: ACE_SPIR {
        MRT_SwitchItemNextClass = "";
        MRT_SwitchItemPrevClass = "";
        MRT_switchItemHintText = "";
    };

    // compatibility
    class acc_pointer_IR_LO;
    class ACE_acc_pointer_green_IR_LO: acc_pointer_IR_LO {
        displayName="Steiner DBAL A2 Green (Laser, LO)";
    };

    class acc_pointer_IR_Illuminator_HI_25mrad;
    class acc_pointer_IR_Illuminator_HI_25mrad_LASER;
    class acc_pointer_IR_Illuminator_HI_50mrad;
    class acc_pointer_IR_Illuminator_HI_50mrad_LASER;
    class acc_pointer_IR_Illuminator_HI_75mrad;
    class acc_pointer_IR_Illuminator_HI_75mrad_LASER;
    class acc_pointer_IR_Illuminator_HI_100mrad;
    class acc_pointer_IR_Illuminator_HI_100mrad_LASER;

    class acc_pointer_IR_Illuminator_LO_25mrad;
    class acc_pointer_IR_Illuminator_LO_25mrad_LASER;
    class acc_pointer_IR_Illuminator_LO_50mrad;
    class acc_pointer_IR_Illuminator_LO_50mrad_LASER;
    class acc_pointer_IR_Illuminator_LO_75mrad;
    class acc_pointer_IR_Illuminator_LO_75mrad_LASER;
    class acc_pointer_IR_Illuminator_LO_100mrad;
    class acc_pointer_IR_Illuminator_LO_100mrad_LASER;

    class ACE_acc_pointer_green_IR_Illuminator_HI_25mrad : acc_pointer_IR_Illuminator_HI_25mrad {};
    class ACE_acc_pointer_green_IR_Illuminator_HI_25mrad_LASER : acc_pointer_IR_Illuminator_HI_25mrad_LASER {};
    class ACE_acc_pointer_green_IR_Illuminator_HI_50mrad : acc_pointer_IR_Illuminator_HI_50mrad {};
    class ACE_acc_pointer_green_IR_Illuminator_HI_50mrad_LASER : acc_pointer_IR_Illuminator_HI_50mrad_LASER {};
    class ACE_acc_pointer_green_IR_Illuminator_HI_75mrad : acc_pointer_IR_Illuminator_HI_75mrad {};
    class ACE_acc_pointer_green_IR_Illuminator_HI_75mrad_LASER : acc_pointer_IR_Illuminator_HI_75mrad_LASER {};
    class ACE_acc_pointer_green_IR_Illuminator_HI_100mrad : acc_pointer_IR_Illuminator_HI_100mrad {};
    class ACE_acc_pointer_green_IR_Illuminator_HI_100mrad_LASER : acc_pointer_IR_Illuminator_HI_100mrad_LASER {};
    
    class ACE_acc_pointer_green_IR_Illuminator_LO_25mrad : acc_pointer_IR_Illuminator_LO_25mrad {};
    class ACE_acc_pointer_green_IR_Illuminator_LO_25mrad_LASER : acc_pointer_IR_Illuminator_LO_25mrad_LASER {};
    class ACE_acc_pointer_green_IR_Illuminator_LO_50mrad : acc_pointer_IR_Illuminator_LO_50mrad {};
    class ACE_acc_pointer_green_IR_Illuminator_LO_50mrad_LASER : acc_pointer_IR_Illuminator_LO_50mrad_LASER {};
    class ACE_acc_pointer_green_IR_Illuminator_LO_75mrad : acc_pointer_IR_Illuminator_LO_75mrad {};
    class ACE_acc_pointer_green_IR_Illuminator_LO_75mrad_LASER : acc_pointer_IR_Illuminator_LO_75mrad_LASER {};
    class ACE_acc_pointer_green_IR_Illuminator_LO_100mrad : acc_pointer_IR_Illuminator_LO_100mrad {};
    class ACE_acc_pointer_green_IR_Illuminator_LO_100mrad_LASER : acc_pointer_IR_Illuminator_LO_100mrad_LASER {};
};
