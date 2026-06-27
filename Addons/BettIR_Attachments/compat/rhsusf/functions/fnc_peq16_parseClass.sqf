params ["_className"];

_map = createHashMap;

([_className] call BettIR_Compat_RHSUSF_fnc_getHeightVariant) params ["_baseClass", "_suffix"];
_upperClassName = toUpper _baseClass;

_splitClassName = _upperClassName splitString "_";
_splitClassNameLength = count _splitClassName;
_lastEntry = _splitClassName # (_splitClassNameLength - 1);

// there's also a TOP variant which has _top appended to the end of all places
if (_lastEntry == "TOP") then {
    _splitClassName = _splitClassName select [0, _splitClassNameLength - 1];
    _splitClassNameLength = _splitClassNameLength - 1;
    _lastEntry = _splitClassName # (_splitClassNameLength - 1);
};

if ((_lastEntry find "MRAD") != -1) then {
    _map set ["Focus", _lastEntry];
    _map set ["MasterMode", _splitClassName # (_splitClassNameLength - 2)];
} else {
    if (_lastEntry in ["VIS", "DVIS", "LIGHT", "AL"]) then {
        _map set ["MasterMode", _lastEntry];
    } else {
        _map set ["MasterMode", "AH"];
    };
};

_map;
