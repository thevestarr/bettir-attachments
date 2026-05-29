params ["_className"];

_lowerClassName = toUpper _className; 
_map = createHashMap;

_splitClassName = _lowerClassName splitString "_";
_segmentCount = count _splitClassName;


if (_segmentCount == 4) then {
    _map set ["MasterMode", "AH"];
} else {
    if (_segmentCount == 6) then {
        if ((_splitClassName # 5) == "lo") then {
            _map set ["MasterMode", "VisAL"];
        } else {
            _map set ["MasterMode", "VisAH"];
        };
    }
};

_map;
