params ["_className"];

_lowerClassName = toLower _className;

_map = nil;

_lightInClassNameIndex = _lowerClassName find "light";

// the phrase "light" doesnt exist in the other variants
if (_lightInClassNameIndex == -1) then {
    _map = [_lowerClassName] call BettIR_Compat_RHSUSF_peq15_fnc_parseClass; 
    _map set ["Device", "Laser"];
} else {
    _map = createHashMap;
    _map set ["Device", "Flashlight"];

    if ((_lowerClassName find "ir") == -1) then {
        _map set ["FlashlightOutput", "White"];
    } else {
        _map set ["FlashlightOutput", "IR"];
    };

    _map;
};

_map;
