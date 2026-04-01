params ["_className"];

_lowerClassName = toLower _className;
_lightInClassNameIndex = _lowerClassName find "light";

_map = nil;

// the phrase "light" doesnt exist in the other variants
if (_lightInClassNameIndex == -1) then {
    _map = [_className] call BettIR_Compat_RHSUSF_peq15_fnc_parseClass; 
    _map set ["Device", "PEQ"];
} else {
    _map = createHashMap;
    _map set ["Device", "Flashlight"];

    // if the classname ends with "light", it's the white light variant
    if (_lightInClassNameIndex == ((count _lowerClassName) - 5)) then {
        _map set ["FlashlightOutput", "White"];
    } else {
        _map set ["FlashlightOutput", "IR"];
    };

    _map;
};

_map;
