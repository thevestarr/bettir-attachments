params ["_map"];

_masterMode = _map getOrDefault ["MasterMode", "AH"];

if (_masterMode == "VisAH") exitWith { "MCC_GBRS_T2_BLK_vis_hi" };
if (_masterMode == "VisAL") exitWith { "MCC_GBRS_T2_BLK_vis_lo" };

"MCC_GBRS_T2_BLK"
