#include <macro.h>
/*
	File: fn_useItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if(EQUAL(lbCurSel 2005,-1)) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
	case (_item in ["waterBottle","coffee","redgull"]): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = 100;
			if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 0;};
			if(EQUAL(_item,"redgull") && {EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)}) then {
				[] spawn {
					life_redgull_effect = time;
					titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
					player enableFatigue false;
					[[player, "drink",30],"life_fnc_playSound",true,false] spawn life_fnc_MP; 
					waitUntil {!alive player OR ((time - life_redgull_effect) > (15 * 60))};
					player enableFatigue true;
				};
			};
		};
	};
	
	case (EQUAL(_item,"boltcutter")): {
		[cursorTarget] spawn life_fnc_boltcutter;
		closeDialog 0;
	};
	
	case (EQUAL(_item,"blastingcharge")): {
		player reveal fed_bank;
		(group player) reveal fed_bank;
		[cursorTarget] spawn life_fnc_blastingCharge;
	};
	
	case (EQUAL(_item,"defusekit")): {
		[cursorTarget] spawn life_fnc_defuseKit;
	};
	
	case (EQUAL(_item,"blindfold")): {
		[cursorTarget] spawn life_fnc_blindfold;
	};
	
	case (_item in ["storagesmall","storagebig"]): {
		[_item] call life_fnc_storageBox;
	};
	
	case (EQUAL(_item,"spikeStrip")): {
		if(!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_spikeStrip;
		};
	};
	
	case (EQUAL(_item,"fuelFull")): {
		if(vehicle player != player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
		[] spawn life_fnc_jerryRefuel;
	};
	
	case (EQUAL(_item,"lockpick")): {
		[] spawn life_fnc_lockpick;
	};
	
	case (EQUAL(_item,"beer")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_beer;
		};
	};
	
	case (EQUAL(_item,"whiskey")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_whiskey;
		};
	};
	
	case (EQUAL(_item,"vodka")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_vodka;
		};
	};
	
	case (EQUAL(_item,"condom")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_condom;
		};
	};
	
	case (EQUAL(_item,"lollypop")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_lollypop;
		};
	};
	
	case (EQUAL(_item,"gangplot")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_gangplot;
		};
	};
	
	case (EQUAL(_item,"wall")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_wall;
		};
	};
	
	case (EQUAL(_item,"bargate")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_bargate;
		};
	};
	
	case (EQUAL(_item,"roadcone")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_roadcone;
		};
	};
	
	case (EQUAL(_item,"slide")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_slide;
		};
	};
	
	case (EQUAL(_item,"panicbutton")): {
		[] spawn life_fnc_callBackup;
	};
	
	case (EQUAL(_item,"guardpost")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_guardpost;
		};
	};
	
	case (EQUAL(_item,"sandbag")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_sandbag;
		};
	};
	
	case (EQUAL(_item,"weddingring")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_wedding;
		};
	};
	
	case (_item in ["apple","rabbit_grilled","hen_fried","rooster_grilled","goat_grilled","sheep_grilled","salema_grilled","ornate_grilled","mackerel_grilled","tuna_grilled","mullet_fried","catshark_fried","turtle_soup","donut","tbacon","peach","mre"]): {
		if(!(EQUAL(M_CONFIG(getNumber,"VirtualItems",_item,"edible"),-1))) then {
			if([false,_item,1] call life_fnc_handleInv) then {
				_val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
				_sum = life_hunger + _val;
				switch (true) do {
					case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
					case (_sum > 100): {life_hunger = 100;};
					[[player, "eat",45],"life_fnc_playSound",true,false] spawn life_fnc_MP; 
					default {life_hunger = _sum;};
				};
			};
		};
	};
	
	case (EQUAL(_item,"jaws")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_jaws;
		};
	};
	
		
	////////////DrugField//////////////
	case (EQUAL(_item,"light")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_Light;
		};
	};
	
	case (EQUAL(_item,"generator")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_generator;
		};
	};
	
	case (EQUAL(_item,"netting")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_netting;
		};
	};
	
	case (EQUAL(_item,"shovel")): {
		[] spawn life_fnc_shovel;
	};
	
	case (EQUAL(_item,"cocaseed")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_cocaSeed;
		};
	};
	
	case (EQUAL(_item,"cannabisseed")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_cannabisSeed;
		};
	};
	//*************************************//
	
	case (EQUAL(_item,"pickaxe")): {
		[] spawn life_fnc_pickAxeUse;
	};
	
	case (EQUAL(_item,"chainsaw")): {
		[] spawn life_fnc_chainsawUse;
	};
	
	case (EQUAL(_item,"marijuana")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_weed;
		};
	};
	
	case (EQUAL(_item,"heroin_processed")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_heroin;
		};
	};
	
	case (EQUAL(_item,"cocaine_processed")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_cocaine;
		};
	};
	
	case (EQUAL(_item,"meth_processed")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_meth;
		};
	};
	
	case (EQUAL(_item,"mushrooms")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[] spawn life_fnc_mushrooms;
		};
	};
	
	case (EQUAL(_item,"paintBlack")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(0,0,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(0,0,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(0,0,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintWhite")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(1,1,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(1,1,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(1,1,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintRed")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(1,0,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(1,0,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(1,0,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintBlue")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(0,0,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(0,0,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(0,0,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintGreen")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(0,1,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(0,1,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(0,1,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintYellow")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(1,1,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(1,1,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(1,1,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintPurple")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(1,0,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(1,0,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(1,0,1,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintOrange")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(1,0.5,0,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(1,0,0.5,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(1,0,0.5,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintPink")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"#(argb,8,8,3)color(1,0.4,0.7,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"#(argb,8,8,3)color(1,0.4,0.7,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"#(argb,8,8,3)color(1,0.4,0.7,1)"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	case (EQUAL(_item,"paintCamo")): {
		if(([false,_item,1] call life_fnc_handleInv)) then	{
			[[player, "paint",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
			sleep 5;
			[[cursorTarget,0,"\eg_sndimg\textures\camo.jpg"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,1,"\eg_sndimg\textures\camo.jpg"],"life_fnc_setTexture",true,false] call life_fnc_MP;
			[[cursorTarget,2,"\eg_sndimg\textures\camo.jpg"],"life_fnc_setTexture",true,false] call life_fnc_MP;
		};
	};
	
	default {
		hint localize "STR_ISTR_NotUsable";
	};
};
	
[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;
