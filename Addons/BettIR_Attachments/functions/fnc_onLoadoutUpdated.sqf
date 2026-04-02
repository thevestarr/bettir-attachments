params ["_unit", "_loadout", "_prevLoadout"];

"Loadout update" call BettIR_Attachments_fnc_printDebug;

_currentPrimaryWeaponLoadout = _loadout # 0;
_prevPrimaryWeaponLoadout = _prevLoadout # 0;

_currentPrimarySideAttachment = _currentPrimaryWeaponLoadout # 2;
_prevPrimarySideAttachment = _prevPrimaryWeaponLoadout # 2;

_currentPrimaryOpticAttachment = _currentPrimaryWeaponLoadout # 3;
_prevPrimaryOpticAttachment = _prevPrimaryWeaponLoadout # 3;

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
	_unit setVariable ["BettIR_primaryWeaponAttachment", [[], []]];
	[_unit] call BettIR_Attachments_fnc_removeInteractions;

	localNamespace setVariable ['BETTIR_PRIMARY_POWER_ACTIVATE_SCRIPT', {_this spawn BettIR_Attachments_fnc_defaultDeviceActivate}];
	localNamespace setVariable ['BETTIR_PRIMARY_POWER_DEACTIVATE_SCRIPT', {}];
};

// has a compatible device that's new
if ((_currentCompatibleAttachment != "") && ((_currentCompatibleAttachment != _previousCompatibleAttachment) || !BETTIR_ATTACHMENTS_LOADOUTS_INITALIZED)) then {
	 _currentPrimaryAttachmentArray = (_unit getVariable ["BettIR_primaryWeaponAttachment", [[], []]]);
	 _currentPrimaryAttachment = (_currentPrimaryAttachmentArray # 0) createHashMapFromArray (_currentPrimaryAttachmentArray # 1);
	 _oldMacro = _currentPrimaryAttachment getOrDefault ["__BETTIR_MACRO", ""];


	 _parser = getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _currentCompatibleAttachment >> "classParser");
	_parsedPrimaryAttachment = [_currentCompatibleAttachment] call (call compile _parser);
	_currentPrimaryAttachment merge [_parsedPrimaryAttachment, true];
	("parsed current attachment" + (str _currentPrimaryAttachment)) call BettIR_Attachments_fnc_printDebug;
	_macro = [_currentCompatibleAttachment] call BettIR_Attachments_fnc_getMacro;
	_currentPrimaryAttachment set ["__BETTIR_MACRO", _macro];
	_unit setVariable ["BettIR_primaryWeaponAttachment", toArray _currentPrimaryAttachment];

	if (_oldMacro != _macro) then {
		("Macros are different, old: " + _oldMacro + ", new: " + _macro) call BettIR_Attachments_fnc_printDebug;
		_activateFunctionName = (getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _currentCompatibleAttachment >> "onActivate"));
		_deactivateFunctionName = (getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _currentCompatibleAttachment >> "onDeactivate"));

		("Device activation functions passed, activate: " + _activateFunctionName + ", deactivate: " + _deactivateFunctionName) call BettIR_Attachments_fnc_printDebug;

		if (_activateFunctionName != "") then {
			localNamespace setVariable ['BETTIR_PRIMARY_POWER_ACTIVATE_SCRIPT', (compile ("_this spawn " + _activateFunctionName))];
		};

		if (_deactivateFunctionName != "") then {
			localNamespace setVariable ['BETTIR_PRIMARY_POWER_DEACTIVATE_SCRIPT', (compile ("_this spawn " + _deactivateFunctionName))];
		};

		[_unit] call BettIR_Attachments_fnc_removeInteractions;
		[_unit] call BettIR_Attachments_fnc_generateInteractions;
	};
};

BETTIR_ATTACHMENTS_LOADOUTS_INITALIZED = true;