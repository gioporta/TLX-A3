/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
// TFAR variables
tf_no_auto_long_range_radio = true;
tf_give_personal_radio_to_regular_soldier = true;
tf_defaultWestPersonalRadio = tf_anprc152;
tf_defaultGuerPersonalRadio = tf_anprc152;
TFAR_defaultFrequencies_sr_west = ["40.0", "41.0", "42.0"]; // this should work
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
