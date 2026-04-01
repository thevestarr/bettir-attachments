params ["_unit", "_buttonIndex"];

// buttonIndex 0 is primary, 1 is secondary

// Conditions for laser device turning on (anything else?)
// TODO: Add secondary weapon too?


if (!([_unit] call BettIR_Attachments_fnc_canUnitUseLaserDevice)) exitWith {};
_currentWeapon = currentWeapon _unit;

if ((primaryWeapon _unit) == _currentWeapon) then {
    "Current Weapon valid" call BettIR_Attachments_fnc_printDebug;
    _isOn = (_unit isIRLaserOn _currentWeapon) || (_unit isFlashlightOn _currentWeapon);

    ("Is on? " + str _isOn + ". is headlights button on? " + str (inputAction "headlights" > 0)) call BettIR_Attachments_fnc_printDebug;

    // primary button should always turn on the main device when the default keybind (L) is off
    // we can be more selective with the secondary power button later though
    if (_buttonIndex == 0 && (inputAction "headlights" == 0)) then {
        "Turning the laser on" call BettIR_Attachments_fnc_printDebug;

        if (_isOn) then {
            _unit action ["IRLaserOff", _unit];
            _unit action ["GunLightOff", _unit];
        } else {
            _unit action ["IRLaserOn", _unit];
            _unit action ["GunLightOn", _unit];
        };
    };

    _handler = localNamespace getVariable 'BETTIR_PRIMARY_POWER_ACTIVATE_SCRIPT';
    [_unit, _buttonIndex] call _handler;
};
