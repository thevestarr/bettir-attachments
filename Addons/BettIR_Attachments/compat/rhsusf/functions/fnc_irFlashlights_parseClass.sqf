params ["_className"];

_upperClassName = toUpper _className;
_map = createHashMap;

if ((_upperClassName find "_IR") != -1) then {
    _map set ["Output", "IR"]; 
} else {
    _map set ["Output", "White"];
};

_map;
