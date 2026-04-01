params ["_className"];

getText (configFile >> "BettIR_Config" >> "CompatibleLightAttachments" >> _className >> "macroClass");
