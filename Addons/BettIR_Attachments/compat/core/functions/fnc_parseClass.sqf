params ["_className"];

_lowerClassName = toLower _className;

_map = createHashMap;

if (_lowerClassName == "acc_pointer_ir") then {
    _map set ["MasterMode", "IRLaser"];
    _map set ["PowerMode", "HI"];
} else {
    _splitClassName = _lowerClassName splitString "_";
    if ((_splitClassName # 2) == "VIS") then {
        _map set ["MasterMode", "VisLaser"];
    } else {
        _map set ["MasterMode", "IrLaser"];
    };
    if ((_splitClassName # 3) == "LO") then {
        _map set ["PowerMode", "LO"];
    } else {
        if ((_splitClassName # 3) == "illuminator") then {
            if (count _splitClassName == 7) then {
                if ((_splitClassName # 6) == "laser") then {
                    _map set ["MasterMode", "IRLaserIlluminator"];
                };
            } else {
                _map set ["MasterMode", "IRIlluminator"];
            };

            _map set ["PowerMode", _splitClassName # 4];
            _map set ["Focus", _splitClassName # 5];
        };
    };
};

_map