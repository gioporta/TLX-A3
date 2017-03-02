/*
	File: fn_bargate.sqf
	Author: Cobra
	
	Description:
	Place down a bargate
*/
private["_position","_bargate","_flagpole"];
if(playerSide == west) exitWith {}; 
_flagpole = nearestObjects [(getPos player),["Flag_Red_F"], 50];
if ((count _flagpole) == 0) exitWith {hint "You cannot build in an area of land that isn't yours!";[true,"bargate",1] call life_fnc_handleInv; };
_flagpole = (_flagpole select 0);
if(vehicle player != player) exitWith {[true,"bargate",1] call life_fnc_handleInv; cutText ["You cannot place a bargate while in your car!","PLAIN",2];};
_bargate = "Land_BarGate_F" createVehicle [0,0,0];
_bargate setDir 90;
_bargate setVariable["item","bargateDeployed",true];
_bargate attachTo[player,[0,2,3]];
player say2d "building";
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully constructed a bargate!"];

life_action_bargateDeploy = player addAction["Place",{if(!isNull life_bargate) then {detach life_bargate; life_bargate = ObjNull;}; player removeAction life_action_bargateDeploy; life_action_bargateDeploy = nil;},"",999,false,false,"",'!isNull life_bargate'];
life_bargate = _bargate;
waitUntil {isNull life_bargate};
if(!isNil "life_action_bargateDeploy") then {player removeAction life_action_bargateDeploy;};
if(isNull _bargate) exitWith {life_bargate = ObjNull;};
_bargate setPos [(getPos _bargate select 0),(getPos _bargate select 1),0];
life_action_bargatePickup = player addAction["Pack Up Bargate",life_fnc_packupbargate,"",0,false,false,"",
' _bargate = nearestObjects[getPos player,["Land_BarGate_F"],8] select 0; !isNil "_bargate" && !isNil {(_bargate getVariable "item")}'];