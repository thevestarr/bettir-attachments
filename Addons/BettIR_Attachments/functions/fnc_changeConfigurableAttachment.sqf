params ["_unit", "_key", "_value", ["_reenable", true]];

_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);

if ((count (keys _currentPrimaryAttachment)) == 0) exitWith {
    "Not a BettIR attachment!" call BettIR_Attachments_fnc_printDebug;
};

_macro = _currentPrimaryAttachment get "__BETTIR_MACRO";
_composer = getText (configFile >> "BettIR_Config" >> "CompatibleLightAttachments" >> _macro >> "classComposer");

_currentPrimaryAttachment set [_key, _value];
// todo: consider caching composers by macro
_newClass = [_currentPrimaryAttachment] call (call compile _composer);

[_unit, _newClass, _reenable] call BettIR_Attachments_fnc_switchAttachmentVariant;
