#include <macro.h>
/*
	File: fn_atmMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens and manages the bank menu.
*/
private["_units","_type"];


if !(isNull (findDisplay 2702)) then
{
  CONTROL(2702,2643) ctrlSetStructuredText parseText format["Welcome %1", name player];
	CONTROL(2702,1101) ctrlSetStructuredText parseText format["$%1",[BANK] call life_fnc_numberText];
	CONTROL(2702,1100) ctrlSetStructuredText parseText format["$%1",[CASH] call life_fnc_numberText];
};


//if !(isNull (findDisplay 46)) then {...};
//waitUntil {!isnull (findDisplay 602)};



if(!life_use_atm) exitWith {
	hint localize "STR_Shop_ATMRobbed";
};

if(!dialog) then {
	if(!(createDialog "Life_atm_management")) exitWith {};
};

disableSerialization;
_units = CONTROL(2706,2703);

lbClear _units;

{
	_name = _x GVAR ["realname",name _x];
	if(alive _x && (!(EQUAL(_name,profileName)))) then {
		switch (side _x) do {
			case west: {_type = "Cop"};
			case civilian: {_type = "Civ"};
			case independent: {_type = "EMS"};
		};
		_units lbAdd format["%1 (%2)",_x GVAR ["realname",name _x],_type];
		_units lbSetData [(lbSize _units)-1,str(_x)];
	};
} foreach playableUnits;

lbSetCurSel [2703,0];
/*
if(isNil {(grpPlayer GVAR "gang_bank")}) then {
	(CONTROL(2706,2705)) ctrlEnable false;
};
*/
