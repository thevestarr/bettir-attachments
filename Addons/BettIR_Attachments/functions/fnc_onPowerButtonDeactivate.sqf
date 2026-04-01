params ["_unit", "_buttonIndex"];

if (!([_unit] call BettIR_Attachments_fnc_canUnitUseLaserDevice)) exitWith {};
_currentWeapon = currentWeapon _unit;


if ((primaryWeapon _unit) == _currentWeapon) then {
    _handler = localNamespace getVariable 'BETTIR_PRIMARY_POWER_DEACTIVATE_SCRIPT';
    [_unit, _buttonIndex] call _handler;
};
