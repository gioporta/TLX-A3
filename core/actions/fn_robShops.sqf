#include <macro.h>
/*
	File: fn_robShops.sqf
	Author: MrKraken
	Edited by: Cobra
	
	Description:
    Allows players to rob gas stations.
*/
private["_robber","_shop","_timer","_funds","_dist","_success"]; 
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; 
_action = [_this,2] call BIS_fnc_param;
_timer = 60;
_funds = 12000 + round(random 21000);
_dist = _robber distance _shop;
_success = false;

if(side _robber != civilian) exitWith { hint "You are not civilian!"; };

if(vehicle player != _robber) exitWith { hint "You need to exit your vehicle!"; };
//if (currentWeapon == "Binocular") exitWith { hint "You cannot use Binoculars to rob the gas station!"; }; 
if (alive _robber && {currentWeapon _robber != ""} && {_funds > 0}) then {

[[1,format["DISPATCH: A gas station has persons with weapons inside, it has been marked on your GPS!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;

_Pos = position player; 
_marker = createMarker ["Marker", _Pos]; 
"Marker" setMarkerColor "ColorRed";  
"Marker" setMarkerText "!!WARNING!! - Gas Station Robbery in Progress!"; 
"Marker" setMarkerType "mil_warning";	
hint format ["Robbing the Store! Wait %1 sec.",_timer];

_shop removeAction _action;//Deleting the action,so it won't be spammed



while {true} do {
		hintsilent format ["%1 seconds remaining.",_timer];
		sleep 1;
		_timer = _timer - 1;
		_dist = _robber distance _shop;

		if (!alive _robber) exitwith
			{
				[[1,format["DISPATCH: THE THIEF HAS DIED. THE ROBBERY IS OVER.",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
				hint "STORE CLERK: Oh damn, you just got blood on my cash register.";
				deleteMarker "Marker"; 
				sleep 300;
				_action = _shop addAction["Rob Gas Station",life_fnc_robShops];
			};
			if (_dist >= 6) exitwith {
			[[1,format["DISPATCH: THE ASSAILANT HAS FLED FROM THE GAS STATION. LAST KNOWN IS MARKED ON YOUR GPS! ",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
			hint "STORE CLERK: Thank you for letting me go!";
			sleep 300;
			deleteMarker "Marker"; 
			_action = _shop addAction["Rob Gas Station",life_fnc_robShops];
			};
			if (currentWeapon _robber == "") exitwith {
			[[1,format["DISPATCH: THE ASSAILANT HAS FLED FROM THE GAS STATION. LAST KNOWN IS MARKED ON YOUR GPS! ",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
			hint "STORE CLERK: I dont fear you anymore!";
			sleep 300;
			deleteMarker "Marker"; 
			_action = _shop addAction["Rob Gas Station",life_fnc_robShops];
			};

if(_timer < 1) exitWith { _success = true; }; //Kraken Cleanup - If the count-down has hit 0 (or -1..just in case) the robbery is a success!
};
if(!_success) exitWith { }; //Kraken Cleanup -If success is false, kill it! They've already got their message
ADD(CASH,_funds);
DeleteMarker "Marker";

hint format["You have stolen $%1",_funds]; //Give them a nice message
_shop switchMove "";//Reseting the shop owner
[[1,format["TAKISTAN NEWS: A gas station just got robbed for $%2", _shop, [_funds] call life_fnc_numberText]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
sleep 900;//Cooldown between the robberies
_action = _shop addAction["Rob Gas Station",life_fnc_robShops];//Adding action for the robbery
};