/*
	File: fn_cocaSeed.sqf
	Author: Cobra
    Description: 
	Plant and grow coca seeds.
*/
private["_tent","_time","_amount","_halftime","_seedcheck"];
_tent = nearestObjects [(getPos player),["CamoNet_INDP_Curator_F"], 10];
_seedcheck = nearestObjects [(getPos player),["CamoNet_INDP_Curator_F"], 20];
//Check to see how many lights are placed...
if(life_lightdrugfield == 1) then { 
_time = 115 + round(random 50);
};
if(life_lightdrugfield == 2) then { 
_time = 100 + round(random 45);
};
if(life_lightdrugfield == 3) then { 
_time = 90 + round(random 40);
};
_halftime = _time/2;
_amount = 2 + round(random 3);
if(playerSide != civilian) exitWith {};
if(life_seeded == 1) exitWith {hint "You already have seeds planted.";[true,"cocaseed",1] call life_fnc_handleInv; };
if(life_shovel == 0) exitWith {hint "You have not cultivated the land.";[true,"cocaseed",1] call life_fnc_handleInv; };
if ((count _tent) == 0) exitWith {hint "You are not close enough to the netting";[true,"cocaseed",1] call life_fnc_handleInv; };
_tent = (_tent select 0);
life_action_inUse = true;
player playAction "Medic";
sleep 6;
life_action_inUse = false;
hintSilent "The coca seed has been planted.";
life_seeded = 1;
sleep 4;
closeDialog 0;
hint format ["Coca seeds usually take around %1 seconds to grow.",_time];
sleep _halftime;
if ((count _seedcheck) == 0) exitWith {hint "You need to be within 20 metres of the seeds to tend to them. You need to replant now.";[true,"cocaseed",1] call life_fnc_handleInv; };
_seedcheck = (_seedcheck select 0);
hint format ["About %1 seconds left until the drugs grow.",_halftime];
sleep _halftime;
hint "Your seeds have grown."; 
player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
sleep 1;
hint format ["You have gathered %1 coca plants.",_amount];
[true,"cocaine_unprocessed",_amount] call life_fnc_handleInv;
sleep 3;
closeDialog 0;
hint "You need to re-cultivate the land to grow more drugs."; 
life_seeded = 0;
life_shovel = 0;
