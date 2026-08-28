params ["_composableMap"];

_device = _composableMap get "Device";
_macro = _composableMap get "__BETTIR_MACRO";

if (_device == "Laser") exitWith {
    _masterMode = _composableMap get "MasterMode";
    _focus = _composableMap getOrDefault ["Focus", "100MRAD"];

    _laserBase = _macro + "_L";
    if (_masterMode == "AH") exitWith { _laserBase };

    _finalClassNameArray = [_laserBase, _masterMode];
    if (_masterMode in ["IH", "DH", "DL"]) then {
        _finalClassNameArray pushBack _focus;
    };
    _finalClassNameArray joinString "_";
};

// Flashlight side
_flashlightOutput = _composableMap getOrDefault ["FlashlightOutput", "White"];
if (_flashlightOutput == "IR") exitWith { _macro + "_F_ir" };
_macro + "_F";
