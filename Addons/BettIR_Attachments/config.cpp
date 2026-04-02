#include "include\presets\dbal_a2.hpp"

class CfgPatches
{
    class BettIR_Attachments
    {
        author="Vestarr";
        versionStr="1.0.0";
        name="BettIR Attachments";
        units[]={};
        weapons[] = {};
        requiredVersion=0.1;
        requiredAddons[]={"cba_common"};
    };
};

#include "include\CfgFunctions.hpp"
#include "include\CfgUserActions.hpp"

class BettIR_Config {
    class CompatibleAttachments {
        class BettIR_Base_DBALA2 {
            // macroClass must be shared between devices of the same "kind"
            macroClass = "";
            // slot = 0; // 0 for laser slot, 1 for optic; to be removed as most likely it's redundant, to be tested
            // parse name and pass it to parameters
            classParser="";
            // compose a class based on the parameters
            classComposer="";

            // BettIR activate button or default key (L)
            onActivate="";
            // same as above, but when it's released
            onDeactivate="";

            // primary mode toggle (Shift + L)
            onToggleModePrimary="[_this select 0, 'MasterMode'] spawn BettIR_Attachments_fnc_defaultToggleMode";
            // secondary mode toggle (Ctrl + L)
            onToggleModeSecondary="[_this select 0, 'PowerMode'] spawn BettIR_Attachments_fnc_defaultToggleMode";
            // Stepper mode up, not used at this moment
            onStepperUp="";
            // Stepper mode down
            onStepperDown="";

            class Configurable {
                class MasterMode {
                    displayName = "Master Mode";
                    defaultValue="IRLaser";
                    class IRLaser {
                        displayName = "IR Laser";
                    };

                    class VisLaser {
                        displayName = "Visible Laser";
                    };

                    class IRLaserIlluminator {
                        displayName = "IR Laser + Illuminator";
                    };

                    class IRIlluminator {
                        displayName = "IR Illuminator";
                    };
                };

                class PowerMode {
                    displayName="Power Mode";
                    defaultValue="HI";
                    class HI {
                        displayName = "High";
                    };

                    class LO {
                        displayName = "Low";
                    };
                };

                class Focus {
                    displayName="Illuminator Beam";
                    defaultValue="100MRAD";
                    steps[] = {"25MRAD","50MRAD","75MRAD","100MRAD"};
                    class 25MRAD { displayName = "25 MRAD"; };
                    class 50MRAD { displayName = "50 MRAD"; };
                    class 75MRAD { displayName = "75 MRAD"; };
                    class 100MRAD { displayName = "100 MRAD"; };
                };
            };
        };

        class BettIR_Base_PEQ15: BettIR_Base_DBALA2 {
            onToggleModeSecondary="";

            class Configurable {
                class Focus {
                    displayName="Illuminator Beam";
                    defaultValue="100MRAD";
                    steps[] = {"25MRAD","50MRAD","75MRAD","100MRAD"};
                    class 25MRAD { displayName = "25 MRAD"; };
                    class 50MRAD { displayName = "50 MRAD"; };
                    class 75MRAD { displayName = "75 MRAD"; };
                    class 100MRAD { displayName = "100 MRAD"; };
                };

                class MasterMode {
                    displayName="Master Mode";
                    defaultValue="AH";

                    class VIS {
                        displayName="VIS Laser";
                    };

                    class AL {
                        displayName="AIM LOW";
                    };

                    class DL {
                        displayName="DUAL LOW";
                    };

                    class AH {
                        displayName="AIM HIGH";
                    };

                    class IH {
                        displayName="ILLUM HIGH"
                    };

                    class DH {
                        displayName="DUAL HIGH";
                    };
                };
            };  
        };
    };    
};
