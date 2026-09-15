// LLM01 and LLM MKIII share this: <head> (IR laser), <head>_vis, <head>_dvis, <head>_dh
// The integrated light has no divergence setting, so there is no Focus to read.
params ["_className"];

_map = createHashMap;

_splitClassName = (toUpper _className) splitString "_";
_lastEntry = _splitClassName # ((count _splitClassName) - 1);

if (_lastEntry in ["VIS", "DVIS", "DH"]) then {
    _map set ["MasterMode", _lastEntry];
} else {
    // bare head (CUP_acc_LLM01_L, CUP_acc_LLM, ...): IR laser
    _map set ["MasterMode", "AH"];
};

_map;
