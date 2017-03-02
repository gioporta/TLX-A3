/*
	File: fn_gangplot.sqf
	Author: Cobra
	
	Description:
	Place down a plot pole to claim an area yours.
*/
private["_position","_plotpole","_claimedland"];
if(playerSide == west) exitWith {}; 
_claimedland = nearestObjects [(getPos player),["Flag_Red_F"], 50];
if ((count _claimedland) == 1) exitWith {hint "This land is already owned by somebody!";[true,"gangplot",1] call life_fnc_handleInv; };
_claimedland = (_claimedland select 0);
if(vehicle player != player) exitWith {[true,"gangplot",1] call life_fnc_handleInv; cutText ["You cannot place flag poles while in your car!","PLAIN",2];};
if (isOnRoad (getPos player)) exitWith {[true,"gangplot",1] call life_fnc_handleInv; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};if (count ((getPos player) isFlatEmpty [0,0,0.5,10,0,false,player]) == 0) exitWith {hint "You cannot place the chair here, the surface is too steep.";[true,"chair",1] call life_fnc_handleInv; };
if (surfaceIsWater (getPos player)) exitWith {[true,"gangplot",1] call life_fnc_handleInv;hint "You cannot place the flag pole on water!";};
if ((player distance (getMarkerPos "civ_spawn_1") < 400) OR (player distance (getMarkerPos "civ_spawn_4") < 200) OR (player distance (getMarkerPos "civ_spawn_2") < 200)) exitWith 
{
	hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place the plot pole so close to towns!"];
	[true,"gangplot",1] call life_fnc_handleInv;
};
_plotpole = "Flag_Red_F" createVehicle [0,0,0];
_plotpole setDir 90;
_plotpole setVariable["item","flagpoleDeployed",true];
_plotpole attachTo[player,[0,2,3]];
[[0,format["%1 and his gang %2 have claimed an area of land there own!",name player,(group player) getVariable "gang_name"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
[[0,format["%1 and his gang %2 have claimed an area of land there own!",name player,(group player) getVariable "gang_name"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
[[0,format["%1 and his gang %2 have claimed an area of land there own!",name player,(group player) getVariable "gang_name"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
[[1,format["%1 and his gang %2 have claimed an area of land there own!",name player,(group player) getVariable "gang_name"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
[[1,format["%1 and his gang %2 have claimed an area of land there own!",name player,(group player) getVariable "gang_name"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
[[1,format["%1 and his gang %2 have claimed an area of land there own!",name player,(group player) getVariable "gang_name"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
player say2d "building";
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully constructed a plot pole!"];
cutText ["You have claimed 50 metres of land around you. Congratulations!","PLAIN",2];
_Pos = position player; 
_marker = createMarker ["Marker", _Pos]; 
"Marker" setMarkerColor "ColorBlue";  
"Marker" setMarkerText "!Claimed Land!"; 
"Marker" setMarkerType "mil_warning";

life_action_plotpoleDeploy = player addAction["Place",{if(!isNull life_plotpole) then {detach life_plotpole; life_plotpole = ObjNull;}; player removeAction life_action_plotpoleDeploy; life_action_plotpoleDeploy = nil;},"",999,false,false,"",'!isNull life_plotpole'];
life_plotpole = _plotpole;
waitUntil {isNull life_plotpole};
if(!isNil "life_action_plotpoleDeploy") then {player removeAction life_action_plotpoleDeploy;};
if(isNull _plotpole) exitWith {life_plotpole = ObjNull;};
_plotpole setPos [(getPos _plotpole select 0),(getPos _plotpole select 1),0];
//Final Checks to stop him glitching the system.
if (isOnRoad (getPos player)) exitWith {[true,"gangplot",1] call life_fnc_handleInv; deleteVehicle _plotpole; hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place this on the road!"];};
if ((player distance (getMarkerPos "civ_spawn_1") < 400) OR (player distance (getMarkerPos "civ_spawn_4") < 200) OR (player distance (getMarkerPos "civ_spawn_2") < 200)) exitWith 
{
	deleteVehicle _plotpole;
	hint parseText format["<t color='#FA4F4F'><t size='1.2'>You cannot place the plot pole so close to towns!"];
	[true,"gangplot",1] call life_fnc_handleInv;
};
///
life_action_plotpolePickup = player addAction["Pack Up Plot Pole",life_fnc_packupgangPlot,"",0,false,false,"",
' _plotpole = nearestObjects[getPos player,["Flag_Red_F"],8] select 0; !isNil "_plotpole" && !isNil {(_plotpole getVariable "item")}'];