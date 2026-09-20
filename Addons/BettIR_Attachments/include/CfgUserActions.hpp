

class CfgUserActions {
    // TODO: Replace player with BettIR_Player once AI is supported
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

    class BettIR_WeaponAttachments_Stepper_1_Up {
        displayName="Stepper #1 Up";
        tooltip="";
        onActivate="if (!is3DEN && (alive player)) then { [] spawn { systemChat '[BettIR] Stepper Up #1 not implemented yet' }}";
        onDeactivate="";
    };

    class BettIR_WeaponAttachments_Stepper_1_Down {
        displayName="Stepper #1 Down";
        tooltip=")";
        onActivate="if (!is3DEN && (alive player)) then { [] spawn { systemChat '[BettIR] Stepper Down #1 not implemented yet' }}";
        onDeactivate="";
    };

     class BettIR_WeaponAttachments_Stepper_2_Up {
        displayName="Stepper #2 Up";
        tooltip="";
        onActivate="if (!is3DEN && (alive player)) then { [] spawn { systemChat '[BettIR] Stepper Up #2 not implemented yet' }}";
        onDeactivate="";
    };

    class BettIR_WeaponAttachments_Stepper_2_Down {
        displayName="Stepper #2 Down";
        tooltip="";
        onActivate="if (!is3DEN && (alive player)) then { [] spawn { systemChat '[BettIR] Stepper Down #2 not implemented yet' }}";
        onDeactivate="";
    };
};

class CfgDefaultKeysPresets {
    class Arma2 {
        class Mappings {
            BettIR_WeaponAttachments_PowerButton_1[] = {0x26};
            BettIR_WeaponAttachments_PowerButton_2[] = {};

            BettIR_WeaponAttachments_ToggleMode_1[] = {0x2A130026}; // Shift + L
            BettIR_WeaponAttachments_ToggleMode_2[] = {0x1D130026}; // Ctrl + L

            BettIR_WeaponAttachments_Stepper_1_Up[] = {0x2A120004};
            BettIR_WeaponAttachments_Stepper_1_Down[] = {0x2A120005};

            BettIR_WeaponAttachments_Stepper_2_Up[] = {0x1D120004};
            BettIR_WeaponAttachments_Stepper_2_Down[] = {0x1D120005};
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
            "BettIR_WeaponAttachments_ToggleMode_2",
            "BettIR_WeaponAttachments_Stepper_1_Up",
            "BettIR_WeaponAttachments_Stepper_1_Down",
            "BettIR_WeaponAttachments_Stepper_2_Up",
            "BettIR_WeaponAttachments_Stepper_2_Down"
        };
    };
};
