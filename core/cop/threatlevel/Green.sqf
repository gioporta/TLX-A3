/*
	File: Green.sqf
	Author: Cobra
	
	Description:
	Changes the state threat level to Green.
*/
hint "Threat level has been changed. Thanks for using CobraThreatLevelSystems";
sleep 10;
[[1,format["The threat level has been changed to GREEN by: %1",name player]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[[0,format["The threat level has been changed to GREEN by: %1",name player]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[[1,format["The threat level has been changed to GREEN by: %1", name player]],"life_fnc_broadcast",independent,false] spawn life_fnc_MP;
[[0,format["The threat level has been changed to GREEN by: %1", name player]],"life_fnc_broadcast",independent,false] spawn life_fnc_MP;
[[0,format["The threat level has been changed to GREEN by: %1", name player]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[1,format["The threat level has been changed to GREEN by: %1", name player]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;