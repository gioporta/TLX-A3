/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
tf_no_auto_long_range_radio = true;
//BLUFOR radios can only talk with themselves, OPFOR/INDEP radios can talk amongst each other.
//There is no such thing as a CIV radio, but I'll leave the variable here... 
tf_west_radio_code = "nato";
tf_east_radio_code = "civ";
tf_guer_radio_code = "civ";
tf_civ_radio_code = "civ";

StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

StartProgress = true;
