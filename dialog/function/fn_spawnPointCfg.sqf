#include <macro.h>
/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west: {
		_return = [
			["cop_spawn_1","TMP HQ","\a3\ui_f\data\map\MapControl\bunker_ca.paa"],
			["cop_spawn_2","Checkpoint Alpha","\a3\ui_f\data\map\MapControl\bunker_ca.paa"]
		];
	};
	
	case civilian:
	{
		_return = [
			["civ_spawn_1","Rasman","\a3\ui_f\data\map\MapControl\bunker_ca.paa"]
		];
		
		if (Tower2 getVariable "eg_terror" OR !license_civ_passport) then { 
			_return = [
				["civ_spawn_3","Shukukalay","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
                ["civ_spawn_nagara","Nagara","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		} else {
			hint "No terror reports currently. Spawning is safe.";
			_return pushback ["civ_spawn_3","Shukukalay","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
			_return pushback ["civ_spawn_nagara","Nagara","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};	
		
		if(license_civ_pmb) then {
			_return pushback ["pmb_spawn","SAS Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_division) then {
			_return pushback ["5thDivision_spawn","5th Division Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_aegis) then {
			_return pushback ["aegis_spawn","Aegis HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_pdu) then {
			_return pushback ["pdu_spawn","PDU Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_onefamily) then {
			_return pushback ["onefamily_spawn","One Family Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_khadim) then {
			_return pushback ["khadim_spawn","Al Khadim","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_blueforce1) then {
			_return pushback ["bf1_spawn","Blueforce One HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_jtf) then {
			_return pushback ["jtf_spawn","JTF HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_freedom) then {
			_return pushback ["freedom_spawn","TFF HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_twc) then {
			_return pushback ["twc_spawn","TWC HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_kush) then {
			_return pushback ["kush_spawn","Dank Kush HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_loansharks) then {
			_return pushback ["loansharks_spawn","Loan Sharks Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_kingsman) then {
			_return pushback ["kingsman_spawn","Kingsman HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_alpha) then {
			_return pushback ["alpha_spawn","Alpha White HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_forsaken) then {
			_return pushback ["forsaken_spawn","Forsaken HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
		};
		
		if(license_civ_rebel) then {
			_return pushback ["reb_spawn_1","Jilavur","\a3\ui_f\data\map\MapControl\bunker_ca.paa"];
		};
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Rasman Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Garmsar Clinic","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Feruz Abad Clinic","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;