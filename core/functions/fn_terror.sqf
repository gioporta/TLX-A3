#include <macro.h>
/*
	Author: Demigod
	Edit: Blaster
	
	Description:
	Purge Server Event setup. Sends a faction announcement, plays a sound file from an object
	and toggles a variable.
*/
private["_message"];
if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; hint "You need to be an Admin to use this function.";};

//if(life_event) exitWith {closeDialog 0; hint "There is already a server event under-way.";};
//life_event = true;
_message = "This is not a test. This is your emergency broadcast system announcing an imminent dust wall. Civilians are urged to seek shelter.";[[_message,name player,6],"TON_fnc_clientMessage",true,false] spawn life_fnc_MP;
[[Checkpoint1, "AirRaidSirenAlert",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
sleep 70;
_message = "This is not a test. This is your emergency broadcast system announcing an imminent dust wall. Civilians are urged to seek shelter.";[[_message,name player,6],"TON_fnc_clientMessage",true,false] spawn life_fnc_MP;
[[Checkpoint1, "AirRaidSirenAlert",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
