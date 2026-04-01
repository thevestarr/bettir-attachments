

class CfgUserActions {
    class BettIR_WeaponAttachments_PowerButton_1 {
        displayName="Power Button #1";
        tooltip="Primary button to turn on the device";
        onActivate="[player, 0] spawn BettIR_Attachments_fnc_onPowerButtonActivate";
        onDeactivate="[player, 0] spawn BettIR_Attachments_fnc_onPowerButtonDeactivate";
    };

    class BettIR_WeaponAttachments_PowerButton_2 {
        displayName="Power Button #2";
        tooltip="Secondary button to turn on the device";
        onActivate="[player, 1] spawn BettIR_Attachments_fnc_onPowerButtonActivate";
        onDeactivate="[player, 1] spawn BettIR_Attachments_fnc_onPowerButtonDeactivate";
    };


    // TODO: onActivate can't call defaultToggleMode directly
    class BettIR_WeaponAttachments_ToggleMode_1 {
        displayName="Toggle Mode Button #1";
        tooltip="Toggle the mode of the device (i.e. Master Mode)";
        onActivate="[player, 0] call BettIR_Attachments_fnc_onModeToggle";
        onDeactivate="";
    };

    class BettIR_WeaponAttachments_ToggleMode_2 {
        displayName="Toggle Mode Button #2";
        tooltip="Toggle the mode of the device (i.e. Power Mode)";
        onActivate="[player, 1] call BettIR_Attachments_fnc_onModeToggle";
        onDeactivate="";
    };
};

class CfgDefaultKeysPresets {
    class Arma2 {
        class Mappings {
            BettIR_WeaponAttachments_PowerButton_1[] = {0x26};
            BettIR_WeaponAttachments_PowerButton_2[] = {};
            BettIR_WeaponAttachments_ToggleMode_1[] = {705888320}; // Shift + L
            BettIR_WeaponAttachments_ToggleMode_2[] = {487784480}; // Ctrl + L

            // Shift and plus and minus 7.05888e+08,7.05888e+08
        };
    };
};

class UserActionGroups {
    class BettIR_Attachments {
        name="BettIR Weapon Attachments";
        isAddon=1;
        group[]={
            "BettIR_WeaponAttachments_PowerButton_1",
            "BettIR_WeaponAttachments_PowerButton_2",
            "BettIR_WeaponAttachments_ToggleMode_1",
            "BettIR_WeaponAttachments_ToggleMode_2"
        };
    };
};
