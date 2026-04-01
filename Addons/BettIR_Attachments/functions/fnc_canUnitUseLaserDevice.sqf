params ["_unit"];

// bunch of conditions to check if the user is able to use the laser at the moment
// this is important for handling the L key
if (!(alive _unit)) exitWith { false };
if ((currentMuzzle _unit) != (primaryWeapon _unit)) exitWith { false }; // TODO: Secondary weapon too?
if ((currentMuzzle _unit) in (getArray (configFile >> "CfgWeapons" >> primaryWeapon _unit >> "muzzles"))) exitWith { false };

true;
