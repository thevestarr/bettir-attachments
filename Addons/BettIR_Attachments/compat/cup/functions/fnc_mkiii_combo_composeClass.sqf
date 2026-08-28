params ["_composableMap"];

// LLM MKIII laser+light combo. Irregular CUP naming: the laser-active head is
// the bare macro class (CUP_acc_LLM), the white light is <macro>_Flashlight.
// The invented IR light is <macro>_Flashlight_ir.
_device = _composableMap get "Device";
_macro = _composableMap get "__BETTIR_MACRO";

if (_device == "Laser") exitWith {
    _masterMode = _composableMap get "MasterMode";
    _focus = _composableMap getOrDefault ["Focus", "100MRAD"];

    // AH (aim-high IR) is the bare CUP head class itself.
    if (_masterMode == "AH") exitWith { _macro };

    _finalClassNameArray = [_macro, _masterMode];
    if (_masterMode in ["IH", "DH", "DL"]) then {
        _finalClassNameArray pushBack _focus;
    };
    _finalClassNameArray joinString "_";
};

// Flashlight side
_flashlightOutput = _composableMap getOrDefault ["FlashlightOutput", "White"];
if (_flashlightOutput == "IR") exitWith { _macro + "_Flashlight_ir" };
_macro + "_Flashlight";
