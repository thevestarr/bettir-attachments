// AIMM MARS magnifier, see fnc_aimm_mars_parseClass for the grammar
params ["_composableMap"];

_masterMode = toUpper (_composableMap get "MasterMode");
_magnifier = toUpper (_composableMap getOrDefault ["Magnifier", "UP"]);
_finalClassName = _composableMap get "__BETTIR_MACRO";

if (_magnifier == "DOWN") then {
    _finalClassName = _finalClassName + "_DWN";
};

if (_masterMode == "VIS") then {
    _finalClassName = _finalClassName + "_vis";
};

_finalClassName;
