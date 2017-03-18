/*
	File: fn_civLoadout.sqf
	Author: Tobias 'Xetoxyc' Sittenauer
	
	Description:
	Loads the civs out with the default gear, with randomized clothing.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};


_randomUniform = ["CUP_O_TKI_Khet_Partug_01", "CUP_O_TKI_Khet_Partug_02", "CUP_O_TKI_Khet_Partug_03", "CUP_O_TKI_Khet_Partug_04", "CUP_O_TKI_Khet_Partug_05", "CUP_O_TKI_Khet_Partug_06", "CUP_O_TKI_Khet_Partug_07", "CUP_O_TKI_Khet_Partug_08"] call BIS_fnc_selectRandom;
player addUniform _randomUniform;

_randomHat = ["", "CUP_H_TKI_Pakol_1_01", "CUP_H_TKI_Pakol_1_02", "CUP_H_TKI_Pakol_1_03", "CUP_H_TKI_Pakol_1_04", "CUP_H_TKI_Pakol_1_05", "CUP_H_TKI_Pakol_1_06", "CUP_H_TKI_Pakol_2_01", "CUP_H_TKI_Pakol_2_02", "CUP_H_TKI_Pakol_2_03", "CUP_H_TKI_Pakol_2_04", "CUP_H_TKI_Pakol_2_05", "CUP_H_TKI_Pakol_2_06"] call BIS_fnc_selectRandom;
player addHeadgear _randomHat;

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";

[] call life_fnc_saveGear;