params ["_composableMap"];

if ((_composableMap getOrDefault ["Device", "Laser"]) == "Laser") exitWith {
    [_composableMap] call BettIR_Compat_CUP_PEQ2_fnc_composeClass
};

// flashlight side: the macro is the real _L laser head,
// CUP's white light is the same name with _L swapped for _F
_macro = _composableMap get "__BETTIR_MACRO";
_splitMacro = _macro splitString "_";
_splitMacro deleteAt ((count _splitMacro) - 1);
_splitMacro pushBack "F";

_splitMacro joinString "_";
