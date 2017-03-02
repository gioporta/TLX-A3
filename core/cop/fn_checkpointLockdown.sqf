/*
	File: fn_checkpointLockdown.sqf
	Author: Cobra
	Made for: www.rlgroleplay.com
	
	Description:
	Engage checkpoint lockdown!
*/
if(playerSide != west) exitWith {
hint "You do not know the passcode to sound the alarm.";
}; 
player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
sleep 4;
Checkpoint1 setVariable ["checkpoint_alarm", true, true];
hint "Checkpoint alarm has been sounded.";	
[[1,format["DISPATCH: Checkpoint Zulu alarm has been sounded. ASSISTANCE REQUIRED!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;

while {Checkpoint1 getVariable "checkpoint_alarm"} do {
	[[Checkpoint1, "checkpointalarm",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	[[Checkpoint2, "checkpointalarm",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	[[Checkpoint3, "checkpointalarm",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	[[Checkpoint4, "checkpointalarm",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	sleep 20;
	[[1,format["DISPATCH: Checkpoint Zulu alarm has been sounded. ASSISTANCE REQUIRED!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
	[[Checkpoint1, "AirRaidSirenAlert",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	[[Checkpoint2, "AirRaidSirenAlert",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	[[Checkpoint3, "AirRaidSirenAlert",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	[[Checkpoint4, "AirRaidSirenAlert",5000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
};
