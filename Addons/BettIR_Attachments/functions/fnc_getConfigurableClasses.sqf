params ["_className"];

[(configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _className >> "Configurable"), 0, true] call BIS_fnc_returnChildren;
