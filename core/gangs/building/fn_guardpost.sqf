/*
	File: fn_guardpost.sqf
	Author: Cobra
	
	Description:
	Place down a guard post.
*/
private["_position","_guardpost","_flagpole"];
if(playerSide == west) exitWith {}; 
_flagpole = nearestObjects [(getPos player),["Flag_Red_F"], 50];
if ((count _flagpole) == 0) exitWith {hint "You cannot build in an area of land that isn't yours!";[true,"guardpost",1] call life_fnc_handleInv; };
_flagpole = (_flagpole select 0);
if(vehicle player != player) exitWith {[true,"guardpost",1] call life_fnc_handleInv; cutText ["You cannot place a bargate while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {[true,"guardpost",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the chair here, the surface is too steep.";[true,"chair",1] call life_fnc_handleInv; };
_guardpost = "Land_Cargo_Patrol_V1_F" createVehicle [0,0,0];
_guardpost setDir 90;
_guardpost setVariable["item","GuardPostDeployed",true];
_guardpost attachTo[player,[0,2,3]];
player say2d "building";
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully constructed a guard post!"];

life_action_guardpostDeploy = player addAction["Place",{if(!isNull life_guardpost) then {detach life_guardpost; life_guardpost = ObjNull;}; player removeAction life_action_guardpostDeploy; life_action_guardpostDeploy = nil;},"",999,false,false,"",'!isNull life_guardpost'];
life_guardpost = _guardpost;
waitUntil {isNull life_guardpost};
if(!isNil "life_action_guardpostDeploy") then {player removeAction life_action_guardpostDeploy;};
if(isNull _guardpost) exitWith {life_guardpost = ObjNull;};
_guardpost setPos [(getPos _guardpost select 0),(getPos _guardpost select 1),0];
//Final Checks to stop him glitching the system.
if (isOnRoad (getPos player)) exitWith {[true,"guardpost",1] call life_fnc_handleInv; deleteVehicle _guardpost; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};
///
life_action_guardpostPickup = player addAction["Pack Up Guard Post",life_fnc_packupguardpost,"",0,false,false,"",
' _guardpost = nearestObjects[getPos player,["Land_Cargo_Patrol_V1_F"],8] select 0; !isNil "_guardpost" && !isNil {(_guardpost getVariable "item")}'];