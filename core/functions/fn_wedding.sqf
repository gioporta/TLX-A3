/*
	File: fn_wedding.sqf
	Auhtor: Cobra
	
	Description:
	Marriage!
*/
if(playerSide != civilian) exitWith {}; 
closeDialog 0;
life_married = 1;
cutText ["You have married! Congratulations!","PLAIN",2];
sleep 2;
[[1,format["%1 has just married! Why not send them some flowers?",name player]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[0,format["%1 has just married! Why not send them some flowers?", name player]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[1,format["%1 has just married! Why not send them some flowers?",name player]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[0,format["%1 has just married! Why not send them some flowers?", name player]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[1,format["%1 has just married! Why not send them some flowers?",name player]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[[0,format["%1 has just married! Why not send them some flowers?", name player]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[[1,format["%1 has just married! Why not send them some flowers?",name player]],"life_fnc_broadcast",independent,false] spawn life_fnc_MP;
[[0,format["%1 has just married! Why not send them some flowers?", name player]],"life_fnc_broadcast",independent,false] spawn life_fnc_MP;
