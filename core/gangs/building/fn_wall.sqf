/*
	File: fn_wall.sqf
	Author: Cobra
	
	Description:
	Place down a wall.
*/
private["_position","_wall","_flagpole"];
if(playerSide == west) exitWith {}; 
_flagpole = nearestObjects [(getPos player),["Flag_Red_F"], 50];
if ((count _flagpole) == 0) exitWith {hint "You cannot build in an area of land that isn't yours!";[true,"wall",1] call life_fnc_handleInv; };
_flagpole = (_flagpole select 0);
if(vehicle player != player) exitWith {[true,"wall",1] call life_fnc_handleInv; cutText ["You cannot place this while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {[true,"wall",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};
if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the wall here, the surface is too steep.";[true,"wall",1] call life_fnc_handleInv; };
_wall = "Land_Mil_WallBig_4m_F" createVehicle [0,0,0];
_wall setDir 90;
_wall setVariable["item","wallDeployed",true];
_wall attachTo[player,[0,1,1]];
player say2d "building";
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully constructed a wall!"];

life_action_wallDeploy = player addAction["Place",{if(!isNull life_wall) then {detach life_wall; life_wall = ObjNull;}; player removeAction life_action_wallDeploy; life_action_wallDeploy = nil;},"",999,false,false,"",'!isNull life_wall'];
life_wall = _wall;
waitUntil {isNull life_wall};
if(!isNil "life_action_wallDeploy") then {player removeAction life_action_wallDeploy;};
if(isNull _wall) exitWith {life_wall = ObjNull;};
_wall setPos [(getPos _wall select 0),(getPos _wall select 1),0];
//Final Checks to stop him glitching the system.
if (isOnRoad (getPos player)) exitWith {[true,"wall",1] call life_fnc_handleInv; deleteVehicle _wall; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};
///
life_action_wallPickup = player addAction["Pack Up Wall",life_fnc_packupwall,"",0,false,false,"",
' _wall = nearestObjects[getPos player,["Land_Mil_WallBig_4m_F"],8] select 0; !isNil "_wall" && !isNil {(_wall getVariable "item")}'];