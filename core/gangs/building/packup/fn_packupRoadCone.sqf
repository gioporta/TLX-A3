/*
	File: fn_packupRoadcone.sqf
	Author: Cobra
	
	Description:
	Pack up a roadcone.
*/
private["_roadcone"];
_roadcone = nearestObjects[getPos player,["RoadCone_L_F"],8] select 0;
if(isNil "_roadcone") exitWith {};

if(([true,"roadcone",1] call life_fnc_handleInv)) then
{
	deleteVehicle _roadcone;
	titleText["You have packed up a roadcone!","PLAIN"];
	player removeAction life_action_roadconePickup;
	life_action_roadconePickup = nil;
};