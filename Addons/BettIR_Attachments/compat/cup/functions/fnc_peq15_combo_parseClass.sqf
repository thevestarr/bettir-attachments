params ["_className"];

_splitClassName = (toUpper _className) splitString "_";
_lastEntry = _splitClassName # ((count _splitClassName) - 1);

// the flashlight side is CUP's real <head without _L>_F class,
// everything else is a laser state of the _L head
if (_lastEntry == "F") exitWith {
    _map = createHashMap;
    _map set ["Device", "Flashlight"];
    _map
};

_map = [_className] call BettIR_Compat_CUP_PEQ15_fnc_parseClass;
_map set ["Device", "Laser"];

_map;
