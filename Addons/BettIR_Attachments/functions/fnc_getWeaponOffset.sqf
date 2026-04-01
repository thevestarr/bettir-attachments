params ["_weaponClass"];

_offset = BETTIR_WEAPON_OFFSET_CACHE getOrDefault [_weaponClass, []];
if ((count _offset) != 0) exitWith { _offset };

_modelPath = getText (configFile >> "CfgWeapons" >> _weaponClass >> "model");
if (_modelPath == "") exitWith { [[0,0,0], [0,0,0]] };

_simpleObject = createSimpleObject [_modelPath, [0,0,0], true];
_slotPosition = _simpleObject selectionPosition ["proxy:\A3\data_f\proxies\weapon_slots\SIDE", 1, "FirstPoint"];
_slotDirection = _simpleObject selectionVectorDirAndUp ["proxy:\A3\data_f\proxies\weapon_slots\SIDE", 1];
_result = [_slotPosition, _slotDirection]
BETTIR_WEAPON_OFFSET_CACHE set [_weaponClass, _result];

_result;
