/*
	Author: Matthew "ParallelGames"
	
	Description:
	Terror Attack setup
*/

if (Checkpoint1 getVariable "eg_terror") exitWith {Checkpoint1 setVariable ["eg_terror", false, true]; hint "Dust Wall threat cleared";};
	
Checkpoint1 setVariable ["eg_terror", true, true];
hint "Storms declared 60s";	

null = [340,60,true,true,true] execvm "AL_dust_storm\al_duststorm.sqf";

while {Checkpoint1 getVariable "eg_terror"} do {
	[[Checkpoint1, "red",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	sleep 20;
	[[Checkpoint1, "AirRaidSirenAlert",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	sleep 30;
};