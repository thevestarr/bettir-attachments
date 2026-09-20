// Insight ISM-IR optic:
//   <head>            IR laser high (AH)
//   <head>_V          CUP's real visible laser class (VIS)
//   <head>_F          CUP's real illuminator-only class, patched to 100MRAD (IH)
//   <head>_al         IR laser low
//   <head>_<ih|dh|dl>_<focus>
params ["_className"];

_map = createHashMap;

_splitClassName = (toUpper _className) splitString "_";
_splitLength = count _splitClassName;
_lastEntry = _splitClassName # (_splitLength - 1);

if ((_lastEntry find "MRAD") != -1) then {
    _map set ["Focus", _lastEntry];
    _map set ["MasterMode", _splitClassName # (_splitLength - 2)];
} else {
    switch (_lastEntry) do {
        case "V": { _map set ["MasterMode", "VIS"]; };
        case "F": {
            _map set ["MasterMode", "IH"];
            _map set ["Focus", "100MRAD"];
        };
        case "AL": { _map set ["MasterMode", "AL"]; };
        // bare head or colour head (CUP_optic_ISM1400A7, _green, _OD, _tan)
        default { _map set ["MasterMode", "AH"]; };
    };
};

_map;
