params ["_unit", "_buttonIndex"];

if (_buttonIndex != 0) exitWith {};

if (_unit getVariable ["BettIR_keepPrimaryDeviceOn", false]) exitWith {};

_unit action ["IRLaserOff", _unit];
_unit action ["GunLightOff", _unit];
