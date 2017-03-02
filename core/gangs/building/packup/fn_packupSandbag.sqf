/*
	File: fn_packupSandbag.sqf
	Author: Cobra
	
	Description:
	Pack up a sandbag.
*/
private["_sandbag"];
_sandbag = nearestObjects[getPos player,["Land_HBarrier_3_F"],8] select 0;
if(isNil "_sandbag") exitWith {};

if(([true,"sandbag",1] call life_fnc_handleInv)) then
{
	deleteVehicle _sandbag;
	titleText["You have packed up a sandbag!","PLAIN"];
	player removeAction life_action_packupSandbag;
	life_action_sandbagPickup = nil;
};