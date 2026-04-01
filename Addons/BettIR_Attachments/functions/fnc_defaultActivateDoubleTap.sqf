params ["_unit", "_buttonIndex"];

if (_buttonIndex != 0) exitWith {};

if (_unit getVariable ["BettIR_keepPrimaryDeviceOn", false]) exitWith {
    _unit setVariable ["BettIR_keepPrimaryDeviceOn", false];
    "keep primary device on" call BettIR_Attachments_fnc_printDebug;
};

"handle double taps" call BettIR_Attachments_fnc_printDebug;
_currentTime = time;
_lastEnable = _unit getVariable ["BettIR_lastPrimaryDeviceActivate", 0];
if ((time - _lastEnable) <= 0.5) then {
    "valid double tap, continue" call BettIR_Attachments_fnc_printDebug;
    _unit setVariable ["BettIR_keepPrimaryDeviceOn", true];  
};

_unit setVariable ["BettIR_lastPrimaryDeviceActivate", _currentTime];
