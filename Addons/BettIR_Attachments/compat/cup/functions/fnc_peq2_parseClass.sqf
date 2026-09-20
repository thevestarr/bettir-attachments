params ["_className"];

_map = createHashMap;

_splitClassName = (toUpper _className) splitString "_";
_splitLength = count _splitClassName;
_lastEntry = _splitClassName # (_splitLength - 1);

if ((_lastEntry find "MRAD") != -1) then {
    // <head>_<dl|dlh|dh>_<focus>
    _map set ["Focus", _lastEntry];
    _map set ["MasterMode", _splitClassName # (_splitLength - 2)];
} else {
    if (_lastEntry == "AL") then {
        _map set ["MasterMode", "AL"];
    } else {
        // bare head
        _map set ["MasterMode", "AH"];
    };
};

_map;
