params ["_unit"];

if (isNil "ace_interact_menu_fnc_addActionToObject") exitWith {};


_interactions = _unit getVariable ["ace_interact_menu_selfActions", []];
_foundInteractionIndex = -1;

// I dont really like the while loop but calling ACE removal function doesn't really help either
// because we're adjusting the array while looping through it, so indexes are all over the place
while {
	_foundInteractionIndex = _interactions findIf {
		_id = _x select 0 select 0;
		_treeList = _x select 1;
		_id == "BettIR" || "BettIR" in _treeList
	};

	_foundInteractionIndex != -1;
} do {
	_interactions deleteAt _foundInteractionIndex;
};
