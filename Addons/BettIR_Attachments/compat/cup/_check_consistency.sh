#!/usr/bin/env bash
# CUP compat module static consistency checker. Run from anywhere; cd's to its own dir.
#
# WHAT THIS PROVES: brace/bracket balance of every file; every fnc_*.sqf referenced in
# CfgFunctions exists on disk; every classComposer/classParser named in config.cpp resolves
# to a CfgFunctions entry whose file exists.
#
# WHAT THIS DOES NOT PROVE: that the macros expand to class names matching the compose
# functions' output, or that classes bind against real CUP. Those require preprocessing the
# packed config (HEMTT / CfgConvert -txt) and launching Arma with CUP loaded. See the plan's
# Task 8 Step 3-4.
set -u
cd "$(dirname "$0")"
fail=0

echo "== brace / bracket balance =="
for f in config.cpp CfgWeapons.hpp CfgFunctions.hpp rails.hpp macros.hpp functions/*.sqf; do
  o=$(grep -o '{' "$f" | wc -l); c=$(grep -o '}' "$f" | wc -l)
  ob=$(grep -o '\[' "$f" | wc -l); cb=$(grep -o '\]' "$f" | wc -l)
  st="OK"; { [ "$o" != "$c" ] || [ "$ob" != "$cb" ]; } && { st="MISMATCH"; fail=1; }
  printf "  %-44s {%s}%s [%s]%s %s\n" "$f" "$o" "$c" "$ob" "$cb" "$st"
done

echo "== referenced function files exist =="
for fn in $(grep -oE 'fnc_[A-Za-z0-9_]+\.sqf' CfgFunctions.hpp | sort -u); do
  if [ -f "functions/$fn" ]; then echo "  functions/$fn OK"; else echo "  functions/$fn MISSING"; fail=1; fi
done

echo "== every classComposer/classParser in config.cpp resolves to a CfgFunctions file =="
for fn in $(grep -oE 'BettIR_Compat_CUP_[A-Za-z0-9_]+_fnc_(compose|parse)Class' config.cpp | sort -u); do
  # runtime name BettIR_Compat_CUP_<X>_fnc_<m>Class  -> CfgFunctions class BettIR_Compat_CUP_<X>, method <m>Class
  meth=$(echo "$fn" | grep -oE '(compose|parse)Class')
  cls=$(echo "$fn" | sed -E "s/_fnc_${meth}//")
  # the CfgFunctions class name is case-insensitive vs the runtime ref; match loosely
  if grep -qiE "class ${cls}[[:space:]]*\{" CfgFunctions.hpp; then
    echo "  $fn -> CfgFunctions OK"
  else
    echo "  $fn -> NO CfgFunctions class ${cls}"; fail=1
  fi
done

echo
[ "$fail" = 0 ] && echo "ALL STATIC CHECKS PASSED" || echo "FAILURES PRESENT"
exit $fail
