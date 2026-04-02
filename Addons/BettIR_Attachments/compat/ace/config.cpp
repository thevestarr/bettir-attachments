class CfgPatches {
    class BettIR_Attachments_Compat_ACE {
        addonRootClass="BettIR_Attachments";
        name="BettIR Attachment Compatibility with ACE";
        units[]={};
        weapons[]={"ACE_SPIR", "acc_pointer_IR", "ACE_acc_pointer_green_IR", "ACE_acc_pointer_red", "ACE_acc_pointer_green", "ACE_DBAL_A3_Red", "ACE_DBAL_A3_Green"};
        requiredVersion=2.14;
        requiredAddons[]={"ace_laserpointer", "ace_irlight", "BettIR_Attachments"};
        skipWhenMissingDependencies = 1;
    };
};

#include "rails.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"

class BettIR_Config {
    class CompatibleAttachments {
        class acc_pointer_IR;
        class ACE_SPIR {
            macroClass="ACE_SPIR";

            classParser="BettIR_ACE_Compat_fnc_SPIR_parser";
            classComposer="BettIR_ACE_Compat_fnc_SPIR_composer";

            onToggleModePrimary="[_this select 0, 'Beam'] spawn BettIR_Attachments_fnc_defaultToggleMode";

            class Configurable {
                class Beam {
                    displayName ="Beam";
                    defaultValue="Wide";

                    class Wide { displayName = "Wide"; };
                    class Medium { displayName = "Medium"; };
                    class Narrow { displayName = "Narrow"; };
                };
            };
        };

        // ACE_SPIR_LR seems to be hidden in ACE config?
        class ACE_SPIR_Narrow: ACE_SPIR {};
        class ACE_SPIR_Medium: ACE_SPIR {};

        class ACE_acc_pointer_green_IR: acc_pointer_IR {
            macroClass="ACE_acc_pointer_green_IR";

            classParser="BettIR_ACE_Compat_fnc_DBALA2_parser";
            classComposer="BettIR_ACE_Compat_fnc_DBALA2_composer";
        };

        class ACE_acc_pointer_green_IR_LO: ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green: ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_LO: ACE_acc_pointer_green_IR {};

        class ACE_acc_pointer_green_IR_Illuminator_HI_25mrad : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_HI_25mrad_LASER : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_HI_50mrad : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_HI_50mrad_LASER : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_HI_75mrad : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_HI_75mrad_LASER : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_HI_100mrad : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_HI_100mrad_LASER : ACE_acc_pointer_green_IR {};

        class ACE_acc_pointer_green_IR_Illuminator_LO_25mrad : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_LO_25mrad_LASER : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_LO_50mrad : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_LO_50mrad_LASER : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_LO_75mrad : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_LO_75mrad_LASER : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_LO_100mrad : ACE_acc_pointer_green_IR {};
        class ACE_acc_pointer_green_IR_Illuminator_LO_100mrad_LASER : ACE_acc_pointer_green_IR {};
    };
};

