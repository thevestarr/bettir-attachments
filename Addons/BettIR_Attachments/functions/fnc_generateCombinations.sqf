// made for modders to generate classNames based on base classname/macro and a composer script 
// before anyone criticizes the syntax and so many loops, keep in mind I already tried to do it in
// a nice and clean way with hashMaps to no effect, idk why but they're broken as hell
params ["_className"];

_composerName = getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _className >> "classComposer");
_macro = getText (configFile >> "BettIR_Config" >> "CompatibleAttachments" >> _className >> "macroClass");

_composer = (call compile _composerName);
_groups = [_className] call BettIR_Attachments_fnc_getConfigurableClasses;

_groupNames = [];
_groupItems = [];

for "_i" from 0 to ((count _groups) -1) do {
    _currentGroup = _groups # _i;
    _groupNames pushBack (configName _currentGroup);
    _groupItems pushBack (([_currentGroup] call BettIR_Attachments_fnc_getConfigurableValues) apply {configName _x});
};

_result = [];

_helper = {
    params ["_index", "_current", "_groupNames", "_groupItems", "_composer", "_macro", "_result"];

    if ((count _current) == (count _groupNames)) exitWith {
        _map = createHashMap;
        _map set ["__BETTIR_MACRO", _macro];

        for "_i" from 0 to ((count _groupNames) - 1) do {
            _map set [_groupNames # _i, _current # _i];
        };

            _classname = [_map] call _composer;
        if (!(_classname in _result)) then {
            _result pushBack _classname;
        };
    };

    _currentGroup = _groupNames # _index;
    _currentItems = _groupItems # _index;

    {
        _next = +_current;
        _next pushBack _x;
        [_index + 1, _next, _groupNames, _groupItems, _composer, _macro, _result] call _helper;
    } forEach (_currentItems);
};

{
    [0, [], _groupNames, _groupItems, _composer, _macro, _result] call _helper;
} forEach _groupNames;

if (isServer) then {
    copyToClipboard (_result joinString ","); 
};

_result
