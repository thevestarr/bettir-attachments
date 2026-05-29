params ["_unit", "_buttonIndex"];

if (_buttonIndex != 0) exitWith {};

if (!(_unit getVariable ["BettIR_keepPrimaryDeviceOn", false])) exitWith {
    _unit action ["IRLaserOff", _unit];
    _unit action ["GunLightOff", _unit];
};

_currentTime = time;
_lastEnable = _unit getVariable ["BettIR_lastPrimaryDeviceActivate", 0];
// device was in strobe mode, turn it off when button released
if (_unit getVariable ["BettIR_primaryDeviceActivationHeldOn", false]) then {
    _unit setVariable ["BettIR_primaryDeviceActivationHeldOn", false];
};
