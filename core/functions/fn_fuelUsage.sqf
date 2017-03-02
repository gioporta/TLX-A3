/*
			File: refuelVehicle.sqf
			Author: Shawn "Huntah" Macgillivray
			Edited by: Cobra
	
			Description:
			Script to cause vehicles to use a higher amount of fuel.
*/

while {true} do
	{
	if((isEngineOn (vehicle player))&&(vehicle player isKindOf "landVehicle")) then 
		{
		(vehicle player) setfuel ((fuel vehicle player) - 0.001);
		};
	if((isEngineOn (vehicle player))&&(vehicle player isKindOf "Air")) then 
		{
		(vehicle player) setfuel ((fuel vehicle player) - 0.001);
		};
	sleep 10;
	};