params ["_composableMap"];

_masterMode = _composableMap get "MasterMode";
_focus = _composableMap getOrDefault ["Focus", "100MRAD"];
_macro = _composableMap get "__BETTIR_MACRO";

if (_masterMode == "AH") exitWith { _macro };

([_macro] call BettIR_Compat_RHSUSF_fnc_getHeightVariant) params ["_baseMacro", "_suffix"];

_finalClassNameArray = [
    _baseMacro,
    _masterMode
];

if (_masterMode in ["IH", "DH", "DL"]) then {
    _finalClassNameArray pushBack _focus;
};

if (_suffix != "") then {
    _finalClassNameArray pushBack _suffix;
};

_finalClassName = _finalClassNameArray joinString "_";

_finalClassName;
