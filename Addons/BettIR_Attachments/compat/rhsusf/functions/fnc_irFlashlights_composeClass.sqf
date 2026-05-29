params ["_composableMap"];

_macro = _composableMap get "__BETTIR_MACRO";

if (_composableMap getOrDefault ["Output", "White"] == "IR") exitWith { _macro + "_ir" }; 

_macro;
