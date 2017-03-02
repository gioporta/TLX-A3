/*
	File: fn_shovel.sqf
	Author: Cobra
    Description: 
	Cultivate soil ready for growing drugs.	
*/
private["_tent"];
if(playerSide != civilian) exitWith {}; 
if(life_shovel == 1) exitWith {hint "You have already cultivated the land recently.";};
_tent = nearestObjects [(getPos player),["CamoNet_INDP_Curator_F"], 10];
if ((count _tent) == 0) exitWith {hint "You are not close enough to the netting!";};
_tent = (_tent select 0);
if(vehicle player != player) exitWith {cutText ["You cannot place the chair while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {hint "You cannot place the chair on a road, people will see you!";};
if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the chair here, the surface is too steep.";};
if ((player distance (getMarkerPos "civ_spawn_1") < 500) OR (player distance (getMarkerPos "civ_spawn_3") < 500) OR (player distance (getMarkerPos "civ_spawn_2") < 500)) exitWith 
{
	hint parseText format["<t color='#FA4F4F'><t size='1.2'>It's too dangerous to grow drugs so close to popular areas."];
};
player playAction "Medic";
sleep 6;
_shovel = "Land_ClutterCutter_large_F" createVehicle position player; 
hintSilent "The soil has been cultivated.";
life_shovel = 1;
