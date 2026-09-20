// LLM01 and LLM MKIII share this: <head> (IR laser), <head>_vis, <head>_dvis, <head>_dh
params ["_composableMap"];

_masterMode = toUpper (_composableMap get "MasterMode");
_macro = _composableMap get "__BETTIR_MACRO";

if (_masterMode == "AH") exitWith { _macro };

_macro + "_" + _masterMode;
