/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "CUP_U_B_USArmy_Base";

// TODO Taser
//player addWeapon "Taser_26";
//player addMagazine "26_cartridge";
//player addMagazine "26_cartridge";
//player addMagazine "26_cartridge";

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";

// TODO panicbutton
// [true,"panicbutton",1] call life_fnc_handleInv;

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
