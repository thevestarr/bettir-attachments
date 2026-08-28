params ["_className"];

_upperClassName = toUpper _className;
_map = createHashMap;

_splitClassName = _upperClassName splitString "_";
_splitLength = count _splitClassName;
_lastEntry = _splitClassName # (_splitLength - 1);

if ((_lastEntry find "MRAD") != -1) then {
    _map set ["Focus", _lastEntry];
    _map set ["MasterMode", _splitClassName # (_splitLength - 2)];
} else {
    if (_lastEntry == "AL") then {
        _map set ["MasterMode", "AL"];
    } else {
        _map set ["MasterMode", "AH"];
    };
};

_map;
