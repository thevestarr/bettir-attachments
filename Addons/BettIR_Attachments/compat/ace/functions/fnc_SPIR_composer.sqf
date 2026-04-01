params ["_composableMap"];

_baseClassName = "ACE_SPIR";

_beam = _composableMap get "Beam";

if (_beam == "Wide") exitWith { _baseClassName };

(_baseClassName + "_" + _beam);
