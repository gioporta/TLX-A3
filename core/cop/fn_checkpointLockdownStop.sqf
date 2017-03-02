/*
	File: fn_checkpointLockdownStop.sqf
	Author: Cobra
	Made for: www.rlgroleplay.com
	
	Description:
	Disengage checkpoint lockdown!
*/
if(playerSide != west) exitWith {
hint "You do not know the passcode to sound the alarm.";
}; 
if (Checkpoint1 getVariable "checkpoint_alarm") exitWith {
player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
sleep 4;
Checkpoint1 setVariable ["checkpoint_alarm", false, true];
hint "The checkpoint alarm has been cleared.";
};