/*
	Author: Bryan "Tonic" Boardwine
	Edited by: Cobra 
	
	Description:
	Blasting charge is used for the federal reserve vault and nothing  more.. Yet.
*/
private["_vault","_handle"];
_vault = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _vault) exitWith {}; //Bad object
if(typeOf _vault != "Land_CargoBox_V1_F") exitWith {hint localize "STR_ISTR_Blast_VaultOnly"};
if(_vault getVariable["chargeplaced",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyPlaced"};
if({side _x == west} count playableUnits < 5) exitWith {hint localize "STR_Civ_NotEnoughCops"};
if(_vault getVariable["safe_open",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyOpen"};
if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; //Error?

_vault setVariable["chargeplaced",true,true];
[[1,format["DISPATCH: BANK ROBBERY IN PROGRESS! ALL UNITS RESPOND!!!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[[0,format["DISPATCH: BANK ROBBERY IN PROGRESS! ALL UNITS RESPOND!!!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[[0,format["TAKISTAN NEWS: BANK ROBBERY IN PROGRESS. PLEASE STAY AWAY FROM THE BANK!",_storename]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[1,format["TAKISTAN NEWS: BANK ROBBERY IN PROGRESS. PLEASE STAY AWAY FROM THE BANK!",_storename]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
sleep 2;
[[0,format["TAKISTAN NEWS: BANK ROBBERY IN PROGRESS. PLEASE STAY AWAY FROM THE BANK!",_storename]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[1,format["TAKISTAN NEWS: BANK ROBBERY IN PROGRESS. PLEASE STAY AWAY FROM THE BANK!",_storename]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[player, "bankjob",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP; 
hint localize "STR_ISTR_Blast_KeepOff";
_handle = [] spawn life_fnc_demoChargeTimer;
[[],"life_fnc_demoChargeTimer",west,false] call life_fnc_MP;

waitUntil {scriptDone _handle};
sleep 0.9;
if(!(fed_bank getVariable["chargeplaced",false])) exitWith {hint localize "STR_ISTR_Blast_Disarmed"};
[[player, "bankjob",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;

_bomb = "Bo_GBU12_LGB_MI10" createVehicle [getPosATL fed_bank select 0, getPosATL fed_bank select 1, (getPosATL fed_bank select 2)+0.5];
fed_bank setVariable["chargeplaced",false,true];
fed_bank setVariable["safe_open",true,true];
[[1,format["DISPATCH: THE VAULT HAS OPENED! ALL UNITS RESPOND TO THE BANK!!!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[[1,format["DISPATCH: THE VAULT HAS OPENED! ALL UNITS RESPOND TO THE BANK!!!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;

hint localize "STR_ISTR_Blast_Opened";