#include <macro.h>
/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case independent:
	{
		//Untie person
		life_actions pushBack (player addAction["Untie Person",life_fnc_untie,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 2.5 && isPlayer cursorTarget && (cursorTarget getVariable ["tied", false]) ']);
		
		//Pickup Item
		life_actions = life_actions + [player addAction["Pickup Item(s)",{createDialog "life_pickup_items"},"",0,false,false,"",
		' !isNull nearestObject (screenToWorld [0.5,0.5]) && count (nearestObject (screenToWorld [0.5,0.5]) getVariable ["item",[]]) > 0 && player distance nearestObject (screenToWorld [0.5,0.5]) < 5 && !life_action_inUse '
	    ]];
		
		//Barriers
		barrierMain = player addaction [("<t color=""#3333CC"">" + ("Barriers") +"</t>"),"scripts\barriers\barrierMenu.sqf"]; 
	};
	case civilian:
	{
		//Packup Generator
		life_actions = life_actions + [player addAction["Packup Generator",life_fnc_packupgenerator,"",0,false,false,"",'
		_generator = nearestObjects[getPos player,["Land_Portable_generator_F"],3.5] select 0; !isNil "_generator" && !isNil {(_generator getVariable "generator")} && (count (_generator getVariable "generator") > 1)
		']];
		
		//Pickup Item
		life_actions = life_actions + [player addAction["Pickup Item(s)",{createDialog "life_pickup_items"},"",0,false,false,"",
		' !isNull nearestObject (screenToWorld [0.5,0.5]) && count (nearestObject (screenToWorld [0.5,0.5]) getVariable ["item",[]]) > 0 && player distance nearestObject (screenToWorld [0.5,0.5]) < 5 && !life_action_inUse '
	    ]];
		
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		
		//Patdown person
		life_actions pushBack (player addAction["<t color = '#a7afec'>Pat Down</t>",{[[],"life_fnc_removeWeaponActionCiv",cursorTarget,false] call life_fnc_MP},"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 4 && isPlayer cursorTarget && (cursorTarget getVariable ["tied", false]) && (!life_action_inUse) ']);
		
		//Rob person
		life_actions pushBack (player addAction["<t color = '#a7afec'>Rob</t>",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 4 && isPlayer cursorTarget && (cursorTarget getVariable ["tied", false]) && (!life_action_inUse) ']);

		//Tie person
		life_actions pushBack (player addAction["<t color = '#f4a84e'>Tie Person</t>",life_fnc_tieingAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 7 && isPlayer cursorTarget && (!life_action_inUse) && (animationState cursorTarget == "Incapacitated" || animationState cursorTarget == "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon" ) ']);
		
		//Untie person
		life_actions pushBack (player addAction["<t color = '#f4a84e'>Untie Person</t>",life_fnc_untie,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 4 && isPlayer cursorTarget && (cursorTarget getVariable ["tied", false]) && (!life_action_inUse) ']);

		//Throw in car
		life_actions pushBack (player addAction["<t color = '#6baf41'>Throw in car</t>",life_fnc_throwcar,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 4 && isPlayer cursorTarget && (cursorTarget getVariable ["tied", false]) ']);	

		//Escort
		life_actions pushBack (player addAction["<t color = '#4170af'>Move Person</t>",life_fnc_civescort,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 4 && isPlayer cursorTarget && (cursorTarget getVariable ["tied", false]) && !(cursorTarget getVariable ["escorting", false])  && (!life_action_inUse) ']);	

		//Stop Escort
		life_actions pushBack (player addAction["<t color = '#4170af'>Stop Escort</t>",life_fnc_civstopescort,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 4 && isPlayer cursorTarget && (cursorTarget getVariable ["tied", false]) && (cursorTarget getVariable["Escorting",false]) ']);	
		
		//SUICIDE BOMB
		 life_actions = life_actions + [player addAction["<t color='#FF0000'>Detonate</t>",life_fnc_suicideBomb,"",0,false,false,"", 'vest player == "SuicideVest" && alive player && playerSide == civilian && !life_istazed && !life_isSuicide && !life_isDeadman && !(player getVariable "restrained") && !(player getVariable "tied") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
		//DEADMAN SWITCH
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Deadman Switch</t>",life_fnc_suicideDeadman,"",0,false,false,"", 'vest player == "SuicideVest" && alive player && playerSide == civilian && !life_istazed && !life_isSuicide && !life_isDeadman && !(player getVariable "restrained") && !(player getVariable "tied") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
	};
	case west: {
    //Untie person
		life_actions pushBack (player addAction["<t color = '#f4a84e'>Untie Person</t>",life_fnc_untie,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 4 && isPlayer cursorTarget && (cursorTarget getVariable ["tied", false]) && (!life_action_inUse) ']);
   
		//Pickup Item
		life_actions = life_actions + [player addAction["Pickup Item(s)",{createDialog "life_pickup_items"},"",0,false,false,"",
		' !isNull nearestObject (screenToWorld [0.5,0.5]) && count (nearestObject (screenToWorld [0.5,0.5]) getVariable ["item",[]]) > 0 && player distance nearestObject (screenToWorld [0.5,0.5]) < 5 && !life_action_inUse '
	    ]];
		
		life_actions pushBack (player addAction["<t color='#00ffff'>Seize Weapons</t>","deleteVehicle cursorTarget","",0,FALSE,FALSE,"",'cursorTarget isKindOf "GroundWeaponHolder"']);
	};
};
