/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Loads the medic out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

// player forceAddUniform "sab_UN_Officer_Clothing"; TODO Change this
player addBackpack "EG_InvisbagMain";
player addVest "IAF_UN_LightVest";
player addGoggles "Masque_Chirurgical";
// player addHeadgear "sab_UN_cap";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "Medikit";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";


[] call life_fnc_saveGear;