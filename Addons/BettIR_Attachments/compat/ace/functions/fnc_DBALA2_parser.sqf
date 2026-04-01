params ["_className"];

_lowerClassName = toLower _className;

_map = createHashMap;

_baseClass = "ace_acc_pointer_green";
if (_lowerClassName == _baseClass) exitWith {
    _map set ["MasterMode", "VisLaser"];
    _map set ["PowerMode", "HI"];

    _map;
};


_classNameWithoutBase = _lowerClassName regexReplace [(_baseClass + "_/gi"), ""];
_splitClassName = _classNameWithoutBase splitString "_";

if ((_splitClassName # 0) == "LO") exitWith {
    _map set ["MasterMode", "VisLaser"];
    _map set ["PowerMode", "LO"];

    _map;
};


// the only variant that meets this condition is the IR laser
if ((count _splitClassName) == 1) exitWith {
    _map set ["MasterMode", "IRLaser"];
    _map set ["PowerMode", "HI"];

    _map;
};

if ((count _splitClassName) == 2) exitWith {
    _map set ["MasterMode", "IRLaser"];
    _map set ["PowerMode", "LO"];

    _map;
};


_map set ["PowerMode", (_splitClassName # 2)];
_map set ["Focus", (_splitClassName # 3)];
if ((count _splitClassName) == 5) then {
    _map set ["MasterMode", "IRLaserIlluminator"];
} else {
    _map set ["MasterMode", "IRIlluminator"];
};

_map;
