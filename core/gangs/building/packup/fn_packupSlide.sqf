/*
	File: fn_packupSlide.sqf
	Author: Cobra
	
	Description:
	Pack away the children's toys.
*/
private["_slide"];
_slide = nearestObjects[getPos player,["Land_slide_F"],8] select 0;
if(isNil "_slide") exitWith {};

if(([true,"slide",1] call life_fnc_handleInv)) then
{
	deleteVehicle _slide;
	titleText["You have packed up a slide!","PLAIN"];
	player removeAction life_action_slidePickup;
	life_action_slidePickup = nil;
};