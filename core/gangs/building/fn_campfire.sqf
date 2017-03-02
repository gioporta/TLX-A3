/*
	File: fn_campfire.sqf
	Author: Cobra
	
	Description:
	Place a campfire.
*/
private["_position","_campfire","_flagpole"];
if(playerSide == west) exitWith {}; 
if(vehicle player != player) exitWith {[true,"campfire",1] call life_fnc_handleInv; cutText ["You cannot place campfire while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {[true,"campfire",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the chair here, the surface is too steep.";[true,"chair",1] call life_fnc_handleInv; };
_flagpole = nearestObjects [(getPos player),["Flag_Red_F"], 50];
if ((count _flagpole) == 0) exitWith {hint "You cannot build in an area of land that isn't yours!";[true,"light",1] call life_fnc_handleInv; };
_flagpole = (_flagpole select 0);_campfire = "Campfire_burning_F" createVehicle [0,0,0];
_campfire setDir 90;
_campfire setVariable["item","campfireDeployed",true];
_campfire attachTo[player,[0,2,3]];
player say2d "building";
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully constructed a campfire!"];

life_action_campfireDeploy = player addAction["Place",{if(!isNull life_campfire) then {detach life_campfire; life_campfire = ObjNull;}; player removeAction life_action_campfireDeploy; life_action_campfireDeploy = nil;},"",999,false,false,"",'!isNull life_campfire'];
life_campfire = _campfire;
waitUntil {isNull life_campfire};
if(!isNil "life_action_campfireDeploy") then {player removeAction life_action_campfireDeploy;};
if(isNull _campfire) exitWith {life_campfire = ObjNull;};
_campfire setPos [(getPos _campfire select 0),(getPos _campfire select 1),0];
//Final Checks to stop him glitching the system.
if (isOnRoad (getPos player)) exitWith {[true,"campfire",1] call life_fnc_handleInv; deleteVehicle _campfire; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};
///
life_action_campfirePickup = player addAction["Pack Up Campfire",life_fnc_packupcampfire,"",0,false,false,"",
' _campfire = nearestObjects[getPos player,["Campfire_burning_F"],8] select 0; !isNil "_campfire" && !isNil {(_campfire getVariable "item")}'];