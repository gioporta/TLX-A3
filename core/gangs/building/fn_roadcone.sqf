/*
	File: fn_roadcone.sqf
	Author: Cobra
	
	Description:
	Place a roadcone.
*/
private["_position","_roadcone"];
if(vehicle player != player) exitWith {[true,"roadcone",1] call life_fnc_handleInv; cutText ["You cannot place a roadcone while in your car!","PLAIN",2];};
_roadcone = "RoadCone_L_F" createVehicle [0,0,0];
_roadcone setDir 90;
_roadcone setVariable["item","roadconeDeployed",true];
_roadcone attachTo[player,[0,1,1]];
player say2d "building";
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully constructed a road cone!"];

life_action_roadconeDeploy = player addAction["Place",{if(!isNull life_roadcone) then {detach life_roadcone; life_roadcone = ObjNull;}; player removeAction life_action_roadconeDeploy; life_action_roadconeDeploy = nil;},"",999,false,false,"",'!isNull life_roadcone'];
life_roadcone = _roadcone;
waitUntil {isNull life_roadcone};
if(!isNil "life_action_roadconeDeploy") then {player removeAction life_action_roadconeDeploy;};
if(isNull _roadcone) exitWith {life_roadcone = ObjNull;};
_roadcone setPos [(getPos _roadcone select 0),(getPos _roadcone select 1),0];
life_action_roadconePickup = player addAction["Pack Up Roadcone",life_fnc_packuproadcone,"",0,false,false,"",
' _roadcone = nearestObjects[getPos player,["RoadCone_L_F"],8] select 0; !isNil "_roadcone" && !isNil {(_roadcone getVariable "item")}'];