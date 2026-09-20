// MARS optic: VIS maps to CUP's real _V class, everything else is the head
params ["_composableMap"];

_masterMode = toUpper (_composableMap get "MasterMode");
_macro = _composableMap get "__BETTIR_MACRO";

if (_masterMode == "VIS") exitWith { _macro + "_V" };

_macro;
