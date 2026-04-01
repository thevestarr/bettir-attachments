if (!hasInterface) exitWith { systemChat "[BettIR Attachments] no interface, exiting" };
if (allDisplays isEqualTo [findDisplay 0]) exitWith { systemChat "[BettIR Attachments] menu, exiting" };
if (is3DEN) exitWith { systemChat "[BettIR Attachments] is 3DEN, exiting" };

localNamespace setVariable ['BETTIR_PRIMARY_POWER_ACTIVATE_SCRIPT', {_this spawn BettIR_Attachments_fnc_defaultDeviceActivate; }];
localNamespace setVariable ['BETTIR_PRIMARY_POWER_DEACTIVATE_SCRIPT', {}];

BETTIR_ATTACHMENTS_PERFRAME_HANDLER = -1;

BETTIR_ATTACHMENTS_LOADOUTS_INITALIZED = false;

BETTIR_WEAPON_OFFSET_CACHE = createHashMap;
BETTIR_ATTACHMENT_OFFSET_CACHE = createHashMap;

// when inventory changes, rerun the checks
['loadout', { _this call BettIR_Attachments_fnc_onLoadoutUpdated; }] call CBA_fnc_addPlayerEventHandler;

// set up the behavior of the default keybind
addUserActionEventHandler ["headlights", "Activate", {
    if (!([player] call BettIR_Attachments_fnc_canUnitUseLaserDevice)) exitWith {};
    
    _bettIR_primaryActivateActionKeys = actionKeys "BettIR_WeaponAttachments_PowerButton_1";
    _defaultKeybindActionKeys = actionKeys "headlights";

    _hasOverlap = false;

    {
        if (_x in _defaultKeybindActionKeys) then {
            _hasOverlap = true;
            break;
        };
    } forEach _bettIR_primaryActivateActionKeys;

    if (!_hasOverlap) exitWith {
        hint "You can't turn on this device with the default key because BettIR Power key is not bound to it.";

        [] spawn {
            sleep 0.1;
            player action ["IRLaserOff", player];
            player action ["GunLightOff", player];
        };
    };
}];
