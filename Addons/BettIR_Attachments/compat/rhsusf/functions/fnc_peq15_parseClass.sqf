params ["_className"];

_upperClassName = toUpper _className;
_map = createHashMap;

_splitClassName = _upperClassName splitString "_";
_splitClassNameLength = count _splitClassName;

// account for the _h and _sc suffix
_lastEntry = _splitClassName # (_splitClassNameLength - 1);
if (_lastEntry in ['H', 'SC']) then {
    _splitClassNameLength = _splitClassNameLength - 1;
    _lastEntry = _splitClassName # (_splitClassNameLength - 1);
    _splitClassName = _splitClassName select [0, _splitClassNameLength - 1];
};

if ((_lastEntry find "MRAD") != -1) then {
    _map set ["Focus", _lastEntry];
    _map set ["MasterMode", _splitClassName # (_splitClassNameLength - 2)];
} else {
    if (_lastEntry in ["VIS", "AL"]) then {
        _map set ["MasterMode", _lastEntry];
    } else {
        _map set ["MasterMode", "AH"];
    };
};

_map;
