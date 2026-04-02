params ["_unit", "_modeName"];

_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);

if ((count (keys _currentPrimaryAttachment)) == 0) exitWith {
    "Not a BettIR attachment!" call BettIR_Attachments_fnc_printDebug;
};


_macro = _currentPrimaryAttachment get "__BETTIR_MACRO";
_currentMode = _currentPrimaryAttachment getOrDefault [_modeName, ""];
if (_currentMode == "") exitWith {
    "Mode in current macro invalid" call BettIR_Attachments_fnc_printDebug;
};


// TODO: Extract the above to a separate function 

_modes = (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _macro >> "Configurable" >> _modeName)  call BIS_fnc_getCfgSubClasses;
if ((count _modes) == 0) exitWith {
    "No modes detected" call BettIR_Attachments_fnc_printDebug;
};

_index = _modes findIf { (toLower _currentMode) == (toLower _x) };
if (_index == -1) exitWith { 
    "Current mode doesn't match somehow" call BettIR_Attachments_fnc_printDebug;
};

_newMode = _modes select ((_index + 1) mod (count _modes));
[_unit, _modeName, _newMode] call BettIR_Attachments_fnc_changeConfigurableAttachment;
