/*
	File: fn_packupWall.sqf
	Author: Cobra
	
	Description:
	Pack up a wall.
*/
private["_wall"];
_wall = nearestObjects[getPos player,["Land_Mil_WallBig_4m_F"],8] select 0;
if(isNil "_wall") exitWith {};

if(([true,"wall",1] call life_fnc_handleInv)) then
{
	deleteVehicle _wall;
	titleText["You have packed up a wall!","PLAIN"];
	player removeAction life_action_wallPickup;
	life_action_wallPickup = nil;
};