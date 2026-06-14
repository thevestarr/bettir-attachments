/*
overrides the default RHS handling of anpeq height

original author: reyhard
bettir macro check by vestarr

pls dont sue me but it's breaking BettIR
*/

private _p = call rhsusf_fnc_findPlayer;
private _w = primaryWeapon _p;
private _acc = (primaryWeaponItems _p) select 1;
private _macro = [_acc] call BettIR_Attachments_fnc_getMacro;

private _i = getNumber (configFile >> "cfgWeapons" >> _w >> "rhsusf_acc_anpeq15");
private _b = getText (configFile >> "cfgWeapons" >> _acc >> "rhs_anpeq15_base");
//systemChat format ["%1 %2", _i,_b];
switch(_i)do{
	case 0: {
		if(_acc != _b && _macro != _b) then {
			_p addPrimaryWeaponItem _b;
		};
	};
	case 1: {
		private _b = format["%1_h",_b];
		//systemChat format ["new b: %1", _b];
		if(_acc != _b && _macro != _b)then{
			_p addPrimaryWeaponItem _b;
		};
	};	
	case 2: {
		private _b = format["%1_sc",_b];
		//systemChat format ["new b: %1", _b];
		if(_acc != _b && _macro != _b)then{
			_p addPrimaryWeaponItem _b;
		};
	};
};