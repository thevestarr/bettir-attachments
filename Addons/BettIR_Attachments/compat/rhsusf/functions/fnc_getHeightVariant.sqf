/**
Gets the height variant (_h / _sc suffix)
*/

params ["_className"];

_suffix = ""; 
_baseClassName = toLower _className;
_splitClassName = _baseClassName splitString "_";
_lastEntry = _splitClassName # ((count _splitClassName) - 1);


if (_lastEntry in ["h", "sc"]) then {
    _suffix = _lastEntry;
    _baseClassName = (_splitClassName select [0, ((count _splitClassName) - 1)]) joinString "_";
};

[_baseClassName, _suffix];
