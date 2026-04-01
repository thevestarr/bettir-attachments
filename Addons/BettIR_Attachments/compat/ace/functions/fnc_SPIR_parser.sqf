params ["_className"];

_lowerClassName = toLower _className;

_map = createHashMap;

_splitClassName = _lowerClassName splitString "_";

if ((count _splitClassName) != 3) then {
    _map set ["Beam", "Wide"];
} else {
    // im too lazy to write a capitalize function just for these two variants
    if ((_splitClassName # 2) == "narrow") then {
        _map set ["Beam", "Narrow"];
    };

    if ((_splitClassName # 2) == "medium") then {
        _map set ["Beam", "Medium"];
    };
};

_map
