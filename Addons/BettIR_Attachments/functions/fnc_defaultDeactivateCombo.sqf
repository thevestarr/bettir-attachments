params ["_unit", "_buttonIndex", ["_laserDeactivateScript", BettIR_Attachments_fnc_defaultDeactivateDoubleTap], ["_flashlightDeactivateScript", {}]];


_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);

_device = _currentPrimaryAttachment getOrDefault ["Device", "Laser"];

if (_buttonIndex == 0) then {
    if (_device == "Laser") then {
        [_unit, _buttonIndex] spawn _laserDeactivateScript;
    } else {
        [_unit, _buttonIndex] spawn _flashlightDeactivateScript;
    };
} else {
    if (_device == "Laser") then {
        [_unit, "Device", "Flashlight", false, false] call BettIR_Attachments_fnc_changeConfigurableAttachment;
    } else {
        [_unit, "Device", "Laser", false, false] call BettIR_Attachments_fnc_changeConfigurableAttachment;
    };

    sleep 0.1;

    // TODO: use the actual device activation script
    _unit action ["IRLaserOff", _unit];
    _unit action ["GunLightOff", _unit];
};
