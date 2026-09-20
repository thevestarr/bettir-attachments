// AIMM MARS magnifier: <head>[_DWN][_vis]
//   <head>          magnifier up, IR laser      (CUP's real class)
//   <head>_DWN      magnifier down, IR laser    (CUP's real class)
//   <head>_vis      magnifier up, visible laser
//   <head>_DWN_vis  magnifier down, visible laser
params ["_className"];

_map = createHashMap;

_splitClassName = (toUpper _className) splitString "_";

_masterMode = "AH";
if ((_splitClassName # ((count _splitClassName) - 1)) == "VIS") then {
    _masterMode = "VIS";
    _splitClassName deleteAt ((count _splitClassName) - 1);
};

_magnifier = "UP";
if ((_splitClassName # ((count _splitClassName) - 1)) == "DWN") then {
    _magnifier = "DOWN";
};

_map set ["MasterMode", _masterMode];
_map set ["Magnifier", _magnifier];

_map;
