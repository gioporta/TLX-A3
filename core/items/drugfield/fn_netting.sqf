/*
	File: fn_netting.sqf
	Author: Cobra
	
	Description:
	Place down netting.
*/
if(playerSide != civilian) exitWith {}; 
if(vehicle player != player) exitWith {[true,"netting",1] call life_fnc_handleInv; cutText ["You cannot place netting while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {[true,"netting",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place the netting on the road, you will get seen!"];};if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the netting here, the surface is too steep.";[true,"netting",1] call life_fnc_handleInv; };
if (surfaceIsWater (getPos player)) exitWith {hint "You cannot place netting on water!";};
if ((player distance (getMarkerPos "civ_spawn_1") < 500) OR (player distance (getMarkerPos "civ_spawn_3") < 500) OR (player distance (getMarkerPos "civ_spawn_2") < 500) OR (player distance (getMarkerPos "cocaine processing") < 1500) OR (player distance (getMarkerPos "Weed_p_1_1") < 1000)) exitWith 
{
	hint parseText format["<t color='#FA4F4F'><t size='1.2'>It's too dangerous to grow drugs so close to popular areas."];
	[true,"netting",1] call life_fnc_handleInv;
};
if(life_nettingdrugfield == 1) exitWith {[true,"netting",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You already have some netting in active deployment."];};
life_nettingdrugfield = 1;
player playAction "Medic";
sleep 6;
_pos = position player;
_netting = "CamoNet_INDP_Curator_F" createVehicle ([0,0,0]);
_dir = getDir player;
_netting setpos _pos;
_netting setDir _dir;
life_action_nettingPickup = player addaction [("<t color=""#FF3300"">" + ("Pack Up Netting") +"</t>"),"core\items\drugfield\fn_packupNetting.sqf"];
