/*
	File: fn_slide.sqf
	Author: Cobra
	
	Description:
	Play on the slides like a child..... 
	Weeeeeeee...
*/
private["_position","_slide","_flagpole"];
if(playerSide == west) exitWith {}; 
_flagpole = nearestObjects [(getPos player),["Flag_Red_F"], 50];
if ((count _flagpole) == 0) exitWith {hint "You cannot build in an area of land that isn't yours!";[true,"slide",1] call life_fnc_handleInv; };
_flagpole = (_flagpole select 0);
if(vehicle player != player) exitWith {[true,"slide",1] call life_fnc_handleInv; cutText ["You cannot place a slide while in your car!","PLAIN",2];};
_slide = "Land_slide_F" createVehicle [0,0,0];
_slide setDir 90;
_slide setVariable["item","slideDeployed",true];
_slide attachTo[player,[0,1,1]];
player say2d "building";
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully constructed a slide!"];

life_action_slideDeploy = player addAction["Place",{if(!isNull life_slide) then {detach life_slide; life_slide = ObjNull;}; player removeAction life_action_slideDeploy; life_action_slideDeploy = nil;},"",999,false,false,"",'!isNull life_slide'];
life_slide = _slide;
waitUntil {isNull life_slide};
if(!isNil "life_action_slideDeploy") then {player removeAction life_action_slideDeploy;};
if(isNull _slide) exitWith {life_slide = ObjNull;};
_slide setPos [(getPos _slide select 0),(getPos _slide select 1),0];
//Final Checks to stop him glitching the system.
if (isOnRoad (getPos player)) exitWith {[true,"slide",1] call life_fnc_handleInv; deleteVehicle _slide; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};
//
life_action_slidePickup = player addAction["Pack Up Slide",life_fnc_packupslide,"",0,false,false,"",
' _slide = nearestObjects[getPos player,["Land_slide_F"],8] select 0; !isNil "_slide" && !isNil {(_slide getVariable "item")}'];