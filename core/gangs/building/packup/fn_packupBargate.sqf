/*
	File: fn_packupBargate.sqf
	Author: Cobra
	
	Description:
	Pack up bargate.
*/
private["_bargate"];
_bargate = nearestObjects[getPos player,["Land_BarGate_F"],8] select 0;
if(isNil "_bargate") exitWith {};

if(([true,"bargate",1] call life_fnc_handleInv)) then
{
	deleteVehicle _bargate;
	titleText["You have packed up a bargate!","PLAIN"];
	player removeAction life_action_bargatePickup;
	life_action_bargatePickup = nil;
};