params ["_unit", "_buttonIndex"];


_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);

_device = _currentPrimaryAttachment getOrDefault ["Device", "PEQ"];

if (_buttonIndex == 0) then {
    if (_device == "PEQ") then {
        [_unit, _buttonIndex] spawn BettIR_Attachments_fnc_defaultDeactivateDoubleTap;
    } else {
        // no deactivate script atm
        // [_unit] spawn BettIR_Attachments_fnc_defaultDeviceActivate;
    };
} else {
    if (_device == "PEQ") then {
        [_unit, "Device", "Flashlight", false] call BettIR_Attachments_fnc_changeConfigurableAttachment;
    } else {
        [_unit, "Device", "PEQ", false] call BettIR_Attachments_fnc_changeConfigurableAttachment;
    };

    sleep 0.1;

    _unit action ["IRLaserOff", _unit];
    _unit action ["GunLightOff", _unit];
};
