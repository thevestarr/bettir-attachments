params ["_unit", "_modeIndex"];


_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);

if ((count (keys _currentPrimaryAttachment)) == 0) exitWith {
    "Not a BettIR attachment!" call BettIR_Attachments_fnc_printDebug;
};


_macro = _currentPrimaryAttachment getOrDefault ["__BETTIR_MACRO", ""];
if (_macro == "") exitWith {
    "No valid BettIR device" call BettIR_Attachments_fnc_printDebug;
};

// TODO: Extract the above to a separate function 

_handler = getText (configFile >> "BettIR_Config" >> "CompatibleLightAttachments" >> _macro >> (["onToggleModePrimary", "onToggleModeSecondary"] select _modeIndex));

if (_handler != "") then {
    [_unit] call (compile _handler);
};
