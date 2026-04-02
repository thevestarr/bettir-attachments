params ["_className"];

getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _className >> "macroClass");
