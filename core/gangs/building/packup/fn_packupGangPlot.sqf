/*
	File: fn_packupGangPlot.sqf
	Author: Cobra
	
	Description:
	Pack up gang plot pole.
*/
private["_gangplot"];
_gangplot = nearestObjects[getPos player,["Flag_Red_F"],8] select 0;
if(isNil "_gangplot") exitWith {};

if(([true,"gangplot",1] call life_fnc_handleInv)) then
{
	deleteVehicle _gangplot;
	titleText["You have packed up a plot pole!","PLAIN"];
	deleteMarker "Marker";
	player removeAction life_action_plotpolePickup;
	life_action_plotpolePickup = nil;
};