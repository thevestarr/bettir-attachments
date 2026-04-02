params ["_unit"];

if (isNil "ace_interact_menu_fnc_addActionToObject") exitWith {};

_BettIR_Root_Interaction = ["BettIR", "BettIR", "", {1}, {true}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions"], _BettIR_Root_Interaction] call ace_interact_menu_fnc_addActionToObject;

_primaryAttachmentInteraction = ["BettIR_Primary", "Primary", "", {1}, {true}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions", "BettIR"], _primaryAttachmentInteraction] call ace_interact_menu_fnc_addActionToObject;

_primaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
_currentPrimaryAttachment = (_primaryAttachmentArray # 0) createHashMapFromArray (_primaryAttachmentArray # 1);
_macro = _currentPrimaryAttachment get "__BETTIR_MACRO";
_configurables = [(configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _macro >> "Configurable"), 0, true] call BIS_fnc_returnChildren;
{
    _groupClass = _x;
    _key = configName _groupClass;
    _groupDisplayName = getText (_groupClass >> "displayName");
    _configurableInteraction = [format ["BettIR_Primary_%1", _key], _groupDisplayName, "", {1}, {true}] call ace_interact_menu_fnc_createAction;
    [_unit, 1, ["ACE_SelfActions", "BettIR", "BettIR_Primary"], _configurableInteraction] call ace_interact_menu_fnc_addActionToObject;

    {
        _name = configName _x;
        _displayName = getText (_x >> "displayName");
        _variantInteraction = [
            format ["BettIR_Primary_%1_%2", _key, _name],
            _displayName,
            "",
            compile format ["params ['_target']; [_target,'%1', '%2'] call BettIR_Attachments_fnc_changeConfigurableAttachment", _key, _name],
            {true} // todo: add condition
        ] call ace_interact_menu_fnc_createAction;
        [_unit, 1, ["ACE_SelfActions", "BettIR", "BettIR_Primary", format ["BettIR_Primary_%1", _key]], _variantInteraction] call ace_interact_menu_fnc_addActionToObject;
    } forEach ("true" configClasses _groupClass);
} forEach _configurables;
