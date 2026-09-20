// MARS optic: <head> (IR laser) or CUP's real <head>_V (visible laser)
params ["_className"];

_map = createHashMap;

_splitClassName = (toUpper _className) splitString "_";
_lastEntry = _splitClassName # ((count _splitClassName) - 1);

if (_lastEntry == "V") then {
    _map set ["MasterMode", "VIS"];
} else {
    _map set ["MasterMode", "AH"];
};

_map;
