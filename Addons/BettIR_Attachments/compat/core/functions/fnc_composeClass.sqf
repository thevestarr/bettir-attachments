params ["_composableMap"];

_baseClassName = "acc_pointer";

_masterMode = _composableMap get "MasterMode";
_powerMode = _composableMap getOrDefault ["PowerMode", "HI"];
_focus = _composableMap getOrDefault ["Focus", "100mrad"];


_finalClassNameArray = [
    _baseClassName,
    if (_masterMode == "VisLaser") then { "vis" } else { "ir" }
];


if (_masterMode == "IRIlluminator" || _masterMode == "IRLaserIlluminator") then {
    _finalClassNameArray pushBack "illuminator";
    _finalClassNameArray pushBack _powerMode;
    _finalClassNameArray pushBack _focus;
    if (_masterMode == "IRLaserIlluminator") then {
        _finalClassNameArray pushBack "laser";
    };
} else {
    if (_powerMode == "LO") then {
        _finalClassNameArray pushBack _powerMode;
    };
};

_finalClassName = _finalClassNameArray joinString "_";

_finalClassName;
