/*
	File: fn_sandbag.sqf
	Author: Cobra
	
	Description:
	Place down a sandbag.
*/
private["_position","_sandbag","_flagpole"];
if(playerSide == west) exitWith {}; 
_flagpole = nearestObjects [(getPos player),["Flag_Red_F"], 50];
if ((count _flagpole) == 0) exitWith {hint "You cannot build in an area of land that isn't yours!";[true,"sandbag",1] call life_fnc_handleInv; };
_flagpole = (_flagpole select 0);
if(vehicle player != player) exitWith {[true,"sandbag",1] call life_fnc_handleInv; cutText ["You cannot place this while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {[true,"sandbag",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the sandbag here, the surface is too steep.";[true,"chair",1] call life_fnc_handleInv; };
_sandbag = "Land_HBarrier_3_F" createVehicle [0,0,0];
_sandbag setDir 90;
_sandbag setVariable["item","sandbagDeployed",true];
_sandbag attachTo[player,[0,1,1]];
player say2d "building";
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully constructed a sandbag!"];

life_action_sandbagDeploy = player addAction["Place",{if(!isNull life_sandbag) then {detach life_sandbag; life_sandbag = ObjNull;}; player removeAction life_action_sandbagDeploy; life_action_sandbagDeploy = nil;},"",999,false,false,"",'!isNull life_sandbag'];
life_sandbag = _sandbag;
waitUntil {isNull life_sandbag};
if(!isNil "life_action_sandbagDeploy") then {player removeAction life_action_sandbagDeploy;};
if(isNull _sandbag) exitWith {life_sandbag = ObjNull;};
_sandbag setPos [(getPos _sandbag select 0),(getPos _sandbag select 1),0];
//Final Checks to stop him glitching the system.
if (isOnRoad (getPos player)) exitWith {[true,"sandbag",1] call life_fnc_handleInv; deleteVehicle _sandbag; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};
///
life_action_sandbagPickup = player addAction["Pack Up Sandbag",life_fnc_packupsandbag,"",0,false,false,"",
' _sandbag = nearestObjects[getPos player,["Land_HBarrier_3_F"],8] select 0; !isNil "_sandbag" && !isNil {(_sandbag getVariable "item")}'];