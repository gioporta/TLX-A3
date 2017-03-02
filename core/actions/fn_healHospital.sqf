/*
File: fn_healHospital.sqf
Author: Tonic
Edited by: Cobra for www.rlgarma3.co.uk
*/
#include <macro.h>
titleText[localize "STR_NOTF_HS_Healing","PLAIN"];
titleCut ["", "BLACK FADED", 999];
uiSleep 6;
//Reset injuries....
life_leg = 0;
life_brain = 0;
life_arm = 0;
life_chest = 0;
titlecut [" ","BLACK IN",3]; 

titleText[localize "STR_NOTF_HS_Healed","PLAIN"];
player setDamage 0;
player setUnitRecoilCoefficient 1; //Set recoil back to normal
player setFatigue 0; //Set fatigue back to normal
sleep 10;
life_leg = 0;
life_brain = 0;
life_arm = 0;
life_chest = 0;
sleep 20;
life_leg = 0;
life_brain = 0;
life_arm = 0;
life_chest = 0;