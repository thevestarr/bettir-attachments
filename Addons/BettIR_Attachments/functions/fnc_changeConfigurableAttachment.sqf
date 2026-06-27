params ["_unit", "_key", "_value", ["_reenable", true], ["_announce", true]];

_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);

if ((count (keys _currentPrimaryAttachment)) == 0) exitWith {
    "Not a BettIR attachment!" call BettIR_Attachments_fnc_printDebug;
};

_macro = _currentPrimaryAttachment get "__BETTIR_MACRO";
_composer = getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _macro >> "classComposer");
_keyDisplayName = getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _macro >> "Configurable" >> _key >> "displayName");
_valueDisplayName = getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _macro >> "Configurable" >> _key >> _value >> "displayName");

_currentPrimaryAttachment set [_key, _value];
// store the value even if the setting will not trigger an attachment update
// i.e. switching flashlight mode to IR while using the laser device in the combo
_unit setVariable ["BettIR_primaryWeaponAttachment", toArray _currentPrimaryAttachment];
// todo: consider caching composers by macro
_newClass = [_currentPrimaryAttachment] call (call compile _composer);

if (_announce) then {
    // todo: add CBA setting
    hint ("Switched\n" + _keyDisplayName + "\nto\n" + _valueDisplayName);

    [] spawn {
        sleep 10; // this doesnt account for multiple changes but good enough for now
        hintSilent ""; // clear the hint
    };
};

[_unit, _newClass, _reenable] call BettIR_Attachments_fnc_switchAttachmentVariant;
