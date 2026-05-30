// Default laser + flashlight combo
// assuming double tap activate for laser, momentary for flashlight, 
// using primary and secondary activate buttons respectively

params ["_unit", "_buttonIndex", ["_laserActivateScript", BettIR_Attachments_fnc_defaultActivateDoubleTap], ["_flashlightActivateScript", BettIR_Attachments_fnc_defaultDeviceActivate]];

_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);

_device = _currentPrimaryAttachment getOrDefault ["Device", "Laser"];

if (_buttonIndex == 0) then {
    if (_device == "Laser") then {
        [_unit, _buttonIndex] spawn _laserActivateScript;
    } else {
        [_unit, _buttonIndex] spawn _flashlightActivateScript;
    };
} else {
    if (_device == "Laser") then {
        [_unit, "Device", "Flashlight", false, false] call BettIR_Attachments_fnc_changeConfigurableAttachment;
        // can't update in the same frame
        sleep 0.05;

        // TODO: use the actual device activation script
        _unit action ["IRLaserOn", _unit];
        _unit action ["GunLightOn", _unit];
    };
};
