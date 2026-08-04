params ["_unit", "_loadout", "_prevLoadout"];

"Loadout update" call BettIR_Attachments_fnc_printDebug;

_currentPrimaryWeaponLoadout = _loadout # 0;
_prevPrimaryWeaponLoadout = _prevLoadout # 0;

_currentPrimarySideAttachment = "";
_prevPrimarySideAttachment = "";

_currentPrimaryOpticAttachment = "";
_prevPrimaryOpticAttachment = "";

if ((count _currentPrimaryWeaponLoadout) >= 4) then {
	_currentPrimarySideAttachment = _currentPrimaryWeaponLoadout # 2;
	_currentPrimaryOpticAttachment = _currentPrimaryWeaponLoadout # 3;
};

if ((count _prevPrimaryWeaponLoadout) >= 4) then {
	_prevPrimarySideAttachment = _prevPrimaryWeaponLoadout # 2;
	_prevPrimaryOpticAttachment = _prevPrimaryWeaponLoadout # 3;
};

if (BETTIR_ATTACHMENTS_LOADOUTS_INITALIZED && (_currentPrimarySideAttachment == _prevPrimarySideAttachment) && (_currentPrimaryOpticAttachment == _prevPrimaryOpticAttachment)) exitWith {
	"Attachment hasn't changed, exiting" call BettIR_Attachments_fnc_printDebug;
};

// normalize
_currentCompatibleAttachment = "";
_previousCompatibleAttachment = "";

// laser slot is not empty
if (_currentPrimarySideAttachment != "") then {
	// if compatible, store it
	if ([_currentPrimarySideAttachment] call BettIR_Attachments_fnc_isCompatibleAttachment) then {
		_currentCompatibleAttachment = _currentPrimarySideAttachment;
	};
} else {
	// if laser slot is empty but optic is compatible, assume it's the device of interest
	if (_currentPrimaryOpticAttachment != "") then {
		if ([_currentPrimaryOpticAttachment] call BettIR_Attachments_fnc_isCompatibleAttachment) then {
			_currentCompatibleAttachment = _currentPrimaryOpticAttachment;
		};
	};
};

// repeat the above block for previous loadout
if (_prevPrimarySideAttachment != "") then {
	if ([_prevPrimarySideAttachment] call BettIR_Attachments_fnc_isCompatibleAttachment) then {
		_previousCompatibleAttachment = _prevPrimarySideAttachment;
	};
} else {
	if (_prevPrimaryOpticAttachment != "") then {
		if ([_prevPrimaryOpticAttachment] call BettIR_Attachments_fnc_isCompatibleAttachment) then {
			_previousCompatibleAttachment = _prevPrimaryOpticAttachment;
		};
	};
};

// had a compatible device, doesn't anymore
if ((_currentCompatibleAttachment == "") && ((_previousCompatibleAttachment != ""))) exitWith {
	"No more compatible device, resetting to normal" call BettIR_Attachments_fnc_printDebug;
	// these variables are too specific, TODO: Make it more abstract
	_unit setVariable ["BettIR_primaryWeaponAttachment", [[], []]];
	_unit setVariable ["BettIR_keepPrimaryDeviceOn", false];
	_unit setVariable ["BettIR_lastPrimaryDeviceActivate", 0];
    _unit setVariable ["BettIR_primaryDeviceActivationHeldOn", false];

	[_unit] call BettIR_Attachments_fnc_removeInteractions;

	localNamespace setVariable ['BETTIR_PRIMARY_POWER_ACTIVATE_SCRIPT', {_this spawn BettIR_Attachments_fnc_defaultDeviceActivate}];
	localNamespace setVariable ['BETTIR_PRIMARY_POWER_DEACTIVATE_SCRIPT', {}];
};

// has a compatible device that's new
if ((_currentCompatibleAttachment != "") && ((_currentCompatibleAttachment != _previousCompatibleAttachment) || !BETTIR_ATTACHMENTS_LOADOUTS_INITALIZED)) then {
	 _currentPrimaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
	 _currentPrimaryAttachment = (_currentPrimaryAttachmentArray # 0) createHashMapFromArray (_currentPrimaryAttachmentArray # 1);
	 _oldMacro = _currentPrimaryAttachment getOrDefault ["__BETTIR_MACRO", ""];
	_newPrimaryAttachment = nil;

	// reset variables
	_unit setVariable ["BettIR_keepPrimaryDeviceOn", false];
	_unit setVariable ["BettIR_lastPrimaryDeviceActivate", 0];
    _unit setVariable ["BettIR_primaryDeviceActivationHeldOn", false];

	// TODO: Fix the bug which causes errors switching from combo flashlights to lasers
	// caused by the fact that the map only has whatever the parser spits out
	// which is not enough (flashlight doesnt have the other settings,
	// they should be loaded from the default values
	_parser = getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _currentCompatibleAttachment >> "classParser");
	_macro = [_currentCompatibleAttachment] call BettIR_Attachments_fnc_getMacro;

	if (_oldMacro != _macro) then {
		("Macros are different, old: " + _oldMacro + ", new: " + _macro) call BettIR_Attachments_fnc_printDebug;

		// if it's a new device, prefill the settings with default values
		_configurables = [_macro] call BettIR_Attachments_fnc_getConfigurableClasses;
		_newPrimaryAttachment = createHashMap;
		{
			_configurableName = configName _x;
			_defaultValue = getText (_x >> "defaultValue");
			if (_defaultValue != "") then {
				_newPrimaryAttachment set [_configurableName,_defaultValue];
			};
		} forEach _configurables;
		_newPrimaryAttachment set ["__BETTIR_MACRO", _macro];
		
		_activationScript = (getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _currentCompatibleAttachment >> "onActivate"));
		_deactivationScript = (getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _currentCompatibleAttachment >> "onDeactivate"));

		("Device activation functions passed, activate: " + _activationScript + ", deactivate: " + _deactivationScript) call BettIR_Attachments_fnc_printDebug;

		if (_activationScript != "") then {
			localNamespace setVariable ['BETTIR_PRIMARY_POWER_ACTIVATE_SCRIPT', compile  _activationScript];
		};

		if (_deactivationScript != "") then {
			localNamespace setVariable ['BETTIR_PRIMARY_POWER_DEACTIVATE_SCRIPT', compile _deactivationScript];
		};

		[_unit] call BettIR_Attachments_fnc_removeInteractions;
		[_unit] call BettIR_Attachments_fnc_generateInteractions;
	} else {
		_newPrimaryAttachment = (+_currentPrimaryAttachment);
	};

	_parsedPrimaryAttachment = [_currentCompatibleAttachment] call (call compile _parser);
	("parsed current attachment" + (str _parsedPrimaryAttachment)) call BettIR_Attachments_fnc_printDebug;
	// merge default/current values with current settings
	_newPrimaryAttachment merge [_parsedPrimaryAttachment, true];
	_unit setVariable ["BettIR_primaryWeaponAttachment", toArray _newPrimaryAttachment];
};

BETTIR_ATTACHMENTS_LOADOUTS_INITALIZED = true;