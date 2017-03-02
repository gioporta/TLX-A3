#include <macro.h>
/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka
	
	Description:
	Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "CamoU_Black";
player addVest "TacVest_black";
player addBackpack "TRYK_B_Belt_BLK";

player addWeapon "Taser_26";
player addMagazine "26_cartridge";
player addMagazine "26_cartridge";
player addMagazine "26_cartridge";

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
//Adds a panic button to the cops inventory.
[true,"panicbutton",1] call life_fnc_handleInv;

[] call life_fnc_saveGear;
if((FETCH_CONST(life_coplevel)) > 5) then {
threatLevel = player addaction [("<t color=""#00ffff"">" + ("Threat Level Changer") +"</t>"),"core\cop\threatlevel\threatMenu.sqf"]; 
};
