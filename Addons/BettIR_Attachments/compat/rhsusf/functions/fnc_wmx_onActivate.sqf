params ["_unit", "_buttonIndex"];

if (_buttonIndex != 0) exitWith {};

[_unit, _buttonIndex] call BettIR_Attachments_fnc_defaultActivateDoubleTap;

if (_unit getVariable ["BettIR_keepPrimaryDeviceOn", false]) then {
    // TODO: Better naming
    _unit setVariable ["BettIR_primaryDeviceActivationHeldOn", true];
    [_unit] spawn {
        params ["_unit"];
        sleep 0.25;

        if (_unit getVariable ["BettIR_primaryDeviceActivationHeldOn", false]) then {
            waitUntil {
                sleep 0.05;
                _isOn = _unit isFlashlightOn (primaryWeapon _unit);
                if (!_isOn) then {
                    _unit action ["GunLightOn", _unit];  
                } else {
                    _unit action ["GunLightOff", _unit];
                };

                (_unit getVariable ["BettIR_primaryDeviceActivationHeldOn", false]) == false;
            };

            sleep 0.05;

            _unit action ["IRLaserOff", _unit];
            _unit action ["GunLightOff", _unit];
            _unit setVariable ["BettIR_keepPrimaryDeviceOn", false];
        };  
    };
};
