params ["_unit", "_variant", ["_reenable", true]];
_wasOn = false;
if (_unit isIRLaserOn (currentWeapon _unit) || _unit isFlashlightOn (currentWeapon _unit)) then {
    _wasOn = true;
    _unit action ["IRLaserOff", _unit];
    _unit action ["GunLightOff", _unit]; 
};

[_unit, _variant, _wasOn, _reenable] spawn {
    params ["_unit", "_variant","_wasOn", "_reenable"];

    if (currentWeapon _unit == primaryWeapon _unit) then {
        _unit addPrimaryWeaponItem _variant;
    };
    if (currentWeapon _unit == secondaryWeapon _unit) then {
        _unit addSecondaryWeaponItem _variant;
    };

    // necessary: laser parameters don't update if changed in the same frame
    // additionally, laser pos is not updated when switching on the move
    // hopefully this longer delta will help
    sleep 0.1;

    if (_wasOn && _reenable) then {
        _unit action ["IRLaserOn", _unit];
        _unit action ["GunLightOn", _unit];
    };
};
