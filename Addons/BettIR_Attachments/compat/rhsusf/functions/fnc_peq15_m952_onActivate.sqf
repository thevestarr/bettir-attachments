params ["_unit", "_buttonIndex"];

_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);

_device = _currentPrimaryAttachment getOrDefault ["Device", "PEQ"];

if (_buttonIndex == 0) then {
    if (_device == "PEQ") then {
        [_unit, _buttonIndex] spawn BettIR_Attachments_fnc_defaultActivateDoubleTap;
    } else {
        [_unit] spawn BettIR_Attachments_fnc_defaultDeviceActivate;
    };
} else {
    if (_device == "PEQ") then {
        [_unit, "Device", "Flashlight"] call BettIR_Attachments_fnc_changeConfigurableAttachment;
        // can't update in the same frame
        sleep 0.01;

        _unit action ["IRLaserOn", _unit];
        _unit action ["GunLightOn", _unit];
    };
};
