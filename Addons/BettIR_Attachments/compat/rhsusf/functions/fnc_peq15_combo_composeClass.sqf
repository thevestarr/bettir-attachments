params ["_composableMap"];

_device = _composableMap get "Device";

if (_device == "Laser") exitWith {
    _composableMap set ["Device", "Laser"];
    [_composableMap] call BettIR_Compat_RHSUSF_peq15_fnc_composeClass;
};

_macro = _composableMap get "__BETTIR_MACRO";
_flashlightOutput = _composableMap getOrDefault ["FlashlightOutput", "White"];

// RHS uses three variants of PEQ-15 (with no, _h and _sc suffix)
// which accounts for diffent handguard shapes
// sadly it needs to be at the end so it needs a little charade

// I really wish I didnt have to do it here again
// as it's already done in that other composer above
// TODO: maybe could be an improvement later down the line
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
    "light"
];

if (_flashlightOutput == "IR") then {
    _finalClassNameArray pushBack "ir";
};

if (_suffix != "") then {
    _finalClassNameArray pushBack _suffix;
};

_finalClassName = _finalClassNameArray joinString "_";

_finalClassName;
