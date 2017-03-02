/*
	File: fn_packupCampfire.sqf
	Author: Cobra
	
	Description:
	Pack up a campfire.
*/
private["_campfire"];
_campfire = nearestObjects[getPos player,["Campfire_burning_F"],8] select 0;
if(isNil "_campfire") exitWith {};

if(([true,"campfire",1] call life_fnc_handleInv)) then
{
	deleteVehicle _campfire;
	titleText["You have packed up a campfire!","PLAIN"];
	player removeAction life_action_campfirePickup;
	life_action_campfirePickup = nil;
};