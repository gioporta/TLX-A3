#include <macro.h>
private["_vehicle","_veh"];
_vehicle = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {}; //DAFUQ
_veh = typeOf _vehicle;

if(EQUAL(_veh,"I_Plane_Fighter_03_AA_F")) then {
	_vehicle removeMagazinesTurret ["300Rnd_20mm_shells",[-1]];
	_vehicle removeMagazinesTurret ["2Rnd_AAA_missiles",[-1]];
	_vehicle removeMagazinesTurret ["4Rnd_GAA_missiles",[-1]];
	_vehicle removeMagazinesTurret ["120Rnd_CMFlare_Chaff_Magazine",[-1]];
	
	_vehicle setVehicleAmmo 0;
	_vehicle setVehicleAmmoDef 0;
};

clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;