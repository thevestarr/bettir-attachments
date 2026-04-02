params ["_composableMap"];

_device = _composableMap get "Device";

if (_device == "Laser") exitWith {
    _composableMap set ["Device", "Laser"];
    [_composableMap] call BettIR_Compat_RHSUSF_peq15_fnc_composeClass;
};

_macro = _composableMap get "__BETTIR_MACRO";
_flashlightOutput = _composableMap getOrDefault ["FlashlightOutput", "White"];

_finalClassNameArray = [
    _macro,
    "light"
];

if (_flashlightOutput == "IR") then {
    _finalClassNameArray pushBack "ir";
};

_finalClassName = _finalClassNameArray joinString "_";

_finalClassName;
