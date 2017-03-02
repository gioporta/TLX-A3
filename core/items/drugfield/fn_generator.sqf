/*
	File: fn_generator.sqf
	Author: Cobra
	
	Description:
	Place down a generator.
*/
if(playerSide != civilian) exitWith {}; 
_tent = nearestObjects [(getPos player),["CamoNet_INDP_Curator_F"], 15];
if ((count _tent) == 0) exitWith {hint "You cannot do your drugs operation without netting nearby!";[true,"generator",1] call life_fnc_handleInv; };
_tent = (_tent select 0);
if(vehicle player != player) exitWith {[true,"generator",1] call life_fnc_handleInv; cutText ["You cannot place a generator while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {[true,"generator",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place the generator on the road, you will get seen!"];};if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the netting here, the surface is too steep.";[true,"netting",1] call life_fnc_handleInv; };
if (surfaceIsWater (getPos player)) exitWith {hint "You cannot place generator on water!";};
if ((player distance (getMarkerPos "civ_spawn_1") < 500) OR (player distance (getMarkerPos "civ_spawn_3") < 500) OR (player distance (getMarkerPos "civ_spawn_2") < 500)) exitWith 
{
	hint parseText format["<t color='#FA4F4F'><t size='1.2'>It's too dangerous to grow drugs so close to popular areas."];
	[true,"generator",1] call life_fnc_handleInv;
};
if(life_generatordrugfield == 1) exitWith {[true,"generator",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You already have a generator in active deployment."];};
life_generatordrugfield = 1;
player playAction "Medic";
sleep 6;
_pos = position player;
_generator = "Land_Portable_generator_F" createVehicle ([0,0,0]);
_dir = getDir player;
_generator setpos _pos;
_generator setDir _dir;
life_action_generatorPickup = player addaction [("<t color=""#FF3300"">" + ("Pack Up Generator") +"</t>"),"core\items\drugfield\fn_packupGenerator.sqf"];
