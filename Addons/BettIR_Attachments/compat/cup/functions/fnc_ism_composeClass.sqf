// Insight ISM-IR optic, see fnc_ism_parseClass for the grammar.
// VIS maps to CUP's real _V class; IH/DH/DL carry the illuminator focus.
params ["_composableMap"];

_masterMode = toUpper (_composableMap get "MasterMode");
_focus = _composableMap getOrDefault ["Focus", "100MRAD"];
_macro = _composableMap get "__BETTIR_MACRO";

if (_masterMode == "AH") exitWith { _macro };
if (_masterMode == "VIS") exitWith { _macro + "_V" };

_finalClassNameArray = [_macro, _masterMode];

if (_masterMode in ["IH", "DH", "DL"]) then {
    _finalClassNameArray pushBack _focus;
};

_finalClassNameArray joinString "_";
