/*
	File: fn_packupGuardPost.sqf
	Author: Cobra
	
	Description:
	Pack up a guard post.
*/
private["_guardpost"];
_guardpost = nearestObjects[getPos player,["Land_Cargo_Patrol_V1_F"],8] select 0;
if(isNil "_guardpost") exitWith {};

if(([true,"guardpost",1] call life_fnc_handleInv)) then
{
	deleteVehicle _guardpost;
	titleText["You have packed up a guard post!","PLAIN"];
	player removeAction life_action_packupGuardPost;
	life_action_GuardPostPickup = nil;
};