tf_no_auto_long_range_radio = true; 
tf_west_radio_code = "";
tf_east_radio_code = tf_west_radio_code;
tf_guer_radio_code = tf_west_radio_code;
tf_civ_radio_code = tf_west_radio_code;

StartProgress = false;
enableSaving[false,false];
 
life_versionInfo = "RLG Takistan Life";
[] execVM "KRON_Strings.sqf";
[] execVM "core\noMineMarkers.sqf";	
[] execVM "scripts\fn_statusBar.sqf";
[] execVM "scripts\removeFog.sqf";

StartProgress = true;

[] spawn life_fnc_fuelUsage;

if(!isDedicated) exitWith{};
Tower2 setVariable ["eg_terror", false, true];
Checkpoint1 setVariable ["checkpoint_alarm", false, true];