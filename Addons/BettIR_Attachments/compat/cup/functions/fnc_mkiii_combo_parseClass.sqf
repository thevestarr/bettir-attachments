params ["_className"];

_upperClassName = toUpper _className;
_splitClassName = _upperClassName splitString "_";
_splitLength = count _splitClassName;
_map = createHashMap;

// Flashlight side: classes look like ..._Flashlight or ..._Flashlight_ir
if ((_splitClassName find "FLASHLIGHT") != -1) then {
    _map set ["Device", "Flashlight"];
    if ((_upperClassName find "_FLASHLIGHT_IR") != -1) then {
        _map set ["FlashlightOutput", "IR"];
    } else {
        _map set ["FlashlightOutput", "White"];
    };
} else {
    // Laser side. The bare head (no mode suffix) is AH.
    _map set ["Device", "Laser"];
    _lastEntry = _splitClassName # (_splitLength - 1);
    if ((_lastEntry find "MRAD") != -1) then {
        _map set ["Focus", _lastEntry];
        _map set ["MasterMode", _splitClassName # (_splitLength - 2)];
    } else {
        if (_lastEntry in ["VIS", "AL"]) then {
            _map set ["MasterMode", _lastEntry];
        } else {
            _map set ["MasterMode", "AH"];
        };
    };
};

_map;
