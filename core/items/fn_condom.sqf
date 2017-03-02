/*
    File: fn_condom.sqf
    Author: Cobra
*/
closeDialog 0;
hint "You slap on a silky condom. Lovely!";
player playaction "AmovPercMstpSnonWnonDnon_Scared";
sleep 6;
closeDialog 0;
[[0,format["%1 slaps on a silky, smooth, chocolate condom.",name player]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[[0,format["%1 slaps on a silky, smooth, chocolate condom.",name player]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[0,format["%1 slaps on a silky, smooth, chocolate condom.",name player]],"life_fnc_broadcast",independent,false] spawn life_fnc_MP;