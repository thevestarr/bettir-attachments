
class CfgFunctions {
    class BettIR_Attachments {
        class Core {
            class onPowerButtonActivate {
                file = "\BettIR_Attachments\functions\fnc_onPowerButtonActivate.sqf";
            };
            class onPowerButtonDeactivate {
                file = "\BettIR_Attachments\functions\fnc_onPowerButtonDeactivate.sqf";
            };

            class defaultDeviceActivate {
                file = "\BettIR_Attachments\functions\fnc_defaultDeviceActivate.sqf";
            };
            
            class defaultActivateDoubleTap {
                file = "\BettIR_Attachments\functions\fnc_defaultActivateDoubleTap.sqf";
            };
            class defaultDeactivateDoubleTap {
                file = "\BettIR_Attachments\functions\fnc_defaultDeactivateDoubleTap.sqf";
            };

            class onModeToggle {
                file = "\BettIR_Attachments\functions\fnc_onModeToggle.sqf";
            };
            class defaultToggleMode {
                file = "\BettIR_Attachments\functions\fnc_defaultToggleMode.sqf";
            };
            
            class changeConfigurableAttachment {
                file = "\BettIR_Attachments\functions\fnc_changeConfigurableAttachment.sqf";
            };
            class switchAttachmentVariant {
                file = "\BettIR_Attachments\functions\fnc_switchAttachmentVariant.sqf";
            };
            class getMacro {
                file = "\BettIR_Attachments\functions\fnc_getMacro.sqf";
            };
            class onLoadoutUpdated {
                file = "\BettIR_Attachments\functions\fnc_onLoadoutUpdated.sqf";
            };
            class isCompatibleAttachment {
                file = "\BettIR_Attachments\functions\fnc_isCompatibleAttachment.sqf";
            };
            class canUnitUseLaserDevice {
                file = "\BettIR_Attachments\functions\fnc_canUnitUseLaserDevice.sqf";
            };
            class generateInteractions {
                file = "\BettIR_Attachments\functions\fnc_generateInteractions.sqf";
            };
            class removeInteractions {
                file = "\BettIR_Attachments\functions\fnc_removeInteractions.sqf";
            };
            class postInit {
                file = "\BettIR_Attachments\functions\fnc_postInit.sqf";
                postInit=1;
            };
            
            class printDebug {
                file = "\BettIR_Attachments\functions\fnc_printDebug.sqf";
            };
        };
    };
};