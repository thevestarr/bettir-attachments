params ["_composableMap"];

_masterMode = _composableMap get "MasterMode";
_focus = _composableMap getOrDefault ["Focus", "105MRAD"];
_macro = _composableMap get "__BETTIR_MACRO";

if (_masterMode == "AH") exitWith { _macro };
([_macro] call BettIR_Compat_RHSUSF_fnc_getHeightVariant) params ["_baseMacro", "_suffix"];


// there's also a TOP variant which has _top appended to the end of all places
// so we gotta validate it
_splitMacro = _baseMacro splitString "_";
_splitMacroLength = count _splitMacro;
_lastEntry = _splitMacro # (_splitMacroLength - 1);

if ((toUpper _lastEntry) == "TOP") then {
    _baseMacro = (_splitMacro select [0, (_splitMacroLength - 1)]) joinString "_";
    if (_suffix != "") then {
        _suffix = ("top_" + _suffix);
    } else {
        _suffix = "top";
    };
};

_finalClassNameArray = [
    _baseMacro,
    _masterMode
];

if (_masterMode in ["DL", "DH"]) then {
    _finalClassNameArray pushBack _focus;
};

if (_suffix != "") then {
    _finalClassNameArray pushBack _suffix;
};

_finalClassName = _finalClassNameArray joinString "_";

_finalClassName;
