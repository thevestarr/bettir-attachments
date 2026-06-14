params ["_composableMap"];

_masterMode = _composableMap get "MasterMode";
_focus = _composableMap getOrDefault ["Focus", "100MRAD"];
_macro = _composableMap get "__BETTIR_MACRO";

if (_masterMode == "AH") exitWith { _macro };

// RHS uses three variants of PEQ-15 (with no, _h and _sc suffix)
// which accounts for diffent handguard shapes
// sadly it needs to be at the end so it needs a little charade
_baseMacro = toLower _macro;
_suffix = "";
_splitMacro = _baseMacro splitString "_";
_lastEntry = _splitMacro # ((count _splitMacro) - 1);

if (_lastEntry in ['h', 'sc']) then {
    _suffix = _lastEntry;
    // skip the _h / _sc suffix
    _baseMacro = (_splitMacro select [0, (count _splitMacro) - 1]) joinString "_";
};

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
