/*
	File: fn_netting.sqf
	Author: Cobra
	
	Description:
	Place down a light.
*/
if(playerSide != civilian) exitWith {}; 
_generator = nearestObjects [(getPos player),["Land_Portable_generator_F"], 15];
if ((count _generator) == 0) exitWith {hint "You cannot place lights without a generator!"; [true,"light",1] call life_fnc_handleInv;};
_generator = (_generator select 0);
if(vehicle player != player) exitWith {[true,"light",1] call life_fnc_handleInv; cutText ["You cannot place a light while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {[true,"light",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place the light on the road, you will get seen!"];};if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the netting here, the surface is too steep.";[true,"netting",1] call life_fnc_handleInv; };
if (surfaceIsWater (getPos player)) exitWith {hint "You cannot place light on water!";};
if ((player distance (getMarkerPos "civ_spawn_1") < 500) OR (player distance (getMarkerPos "civ_spawn_3") < 500) OR (player distance (getMarkerPos "civ_spawn_2") < 500)) exitWith 
{
	hint parseText format["<t color='#FA4F4F'><t size='1.2'>It's too dangerous to grow drugs so close to popular areas."];
	[true,"light",1] call life_fnc_handleInv;
};
if(life_lightdrugfield == 3) exitWith {[true,"light",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You already have the maximum of 3 lights in active deployment."];};
life_lightdrugfield = life_lightdrugfield + 1;
player playAction "Medic";
sleep 6;
_pos = position player;
_light = "Land_PortableLight_double_F" createVehicle ([0,0,0]);
_dir = getDir player;
_light setpos _pos;
_light setDir _dir;
life_action_lightPickup = player addaction [("<t color=""#FF3300"">" + ("Pack Up Light") +"</t>"),"core\items\drugfield\fn_packupLight.sqf"];