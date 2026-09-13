params ["_composableMap"];

_masterMode = _composableMap get "MasterMode";
_focus = _composableMap getOrDefault ["Focus", "100MRAD"];
_macro = _composableMap get "__BETTIR_MACRO";
_device = _composableMap get "Device";

if (_device == "Flashlight") exitWith { (_macro + "_fl") };

if (_masterMode == "AH") exitWith { _macro };

_finalClassNameArray = [
    _macro,
    _masterMode
];

if (_masterMode in ["IH", "DH", "DL"]) then {
    _finalClassNameArray pushBack _focus;
};

_finalClassName = _finalClassNameArray joinString "_";

_finalClassName;
