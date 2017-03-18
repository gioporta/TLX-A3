/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class civilian {
		title = "STR_Shops_C_Civilian";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Partug_01", "", 100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Partug_02", "", 100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Partug_03", "", 100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Partug_04", "", 100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Partug_05", "", 100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Partug_06", "", 100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Partug_07", "", 100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Partug_08", "", 100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_01", "", 200, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_02", "", 200, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_03", "", 200, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_04", "", 200, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_01", "", 500, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_02", "", 500, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_03", "", 500, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_04", "", 500, { "", "", -1 } },
			{ "CUP_C_U_Priest_01", "", 1000, { "", "", -1 } },
			{ "CUP_U_C_Suit_01", "", 1000, { "", "", -1 } },
			{ "CUP_U_C_Suit_02", "", 1000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "CUP_H_FR_BandanaGreen", "", 500, { "", "", -1 } },
			{ "CUP_H_C_Beanie_01", 100, { "", "", -1 } },
			{ "CUP_H_C_Beanie_02", 100, { "", "", -1 } },
			{ "CUP_H_C_Beanie_03", 100, { "", "", -1 } },
			{ "CUP_H_C_Beanie_04", 100, { "", "", -1 } },
			{ "CUP_H_TKI_SkullCap_01", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_SkullCap_02", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_SkullCap_03", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_SkullCap_04", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_SkullCap_05", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_SkullCap_06", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_1_01", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_1_02", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_1_03", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_1_04", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_1_05", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_1_06", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_2_01", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_2_02", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_2_03", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_2_04", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_2_05", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_2_06", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_01", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_02", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_03", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_04", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_05", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_06", "", 100, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_03", "", 150, { "", "", -1 } },
			{ "CUP_H_TK_Lungee", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_01", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_02", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_04", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_05", "", 150, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_06", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 1000, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_01", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_02", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_03", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_04", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_05", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_06", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_01", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_02", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_03", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_04", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_05", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_06", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_01", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_02", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_03", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_04", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_05", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_01", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_02", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_03", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_04", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_06", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_05", "", 100, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_06", "", 100, { "", "", -1 } },
			{ "V_Press_F", "", 1000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "CUP_B_HikingPack_Civ", "", 1000, { "", "", -1 } }
		};
	};
	
	class blufor {
		title = "STR_Shops_C_Blufor";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_U_B_USArmy_Base", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USArmy_TwoKnee", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USArmy_UBACS", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USArmy_Soft", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USArmy_Ghillie", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USArmy_PilotOverall", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USMC_Officer", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USMC_MARPAT_WDL_RolledUp", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USMC_MARPAT_WDL_Kneepad", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USMC_PilotOverall", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad", "", 100, { "", "", -1 } },
			{ "CUP_U_B_USMC_Ghillie_WDL", "", 100, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "CUP_H_USArmy_Boonie", "", 100, { "", "", -1 } },
			{ "CUP_H_USA_Cap", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_HelmetMICH", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_HelmetMICH_ESS", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_HelmetMICH_earpro", "", 100, { "", "", -1 } },
			{ "CUP_H_USMC_Officer_Cap", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_HelmetMICH_earpro_ess", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_HelmetMICH_headset", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_HelmetMICH_headset_ess", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_HelmetMICH_wdl", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_ECH1_Sand", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_ECH2_Sand", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_ECH1_Black", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_ECH2_Black", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_ECH1_Green", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_ECH2_GREEN", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_Pro", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_Pro_gog", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_M1_Olive", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_M1_Vine", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_M1_m81", "", 100, { "", "", -1 } },
			{ "CUP_H_USArmy_Helmet_M1_btp", "", 100, { "", "", -1 } },
			{ "CUP_H_USMC_HelmetWDL", "", 100, { "", "", -1 } },
			{ "CUP_H_USMC_Headset_HelmetWDL", "", 100, { "", "", -1 } },
			{ "CUP_H_USMC_Headset_GoggleW_HelmetWDL", "", 100, { "", "", -1 } },
			{ "CUP_H_USMC_Crew_Helmet", "", 100, { "", "", -1 } },
			{ "CUP_H_USMC_Goggles_HelmetWDL", "", 100, { "", "", -1 } },
			{ "CUP_H_USMC_Helmet_Pilot", "", 100, { "", "", -1 } },
			{ "CUP_H_USMC_MICH2000_DES", "", 100, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "CUP_NVG_PVS7", "", 0, { "", "", -1 } }
			
		};

		vests[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Scout", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Crewman", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Medic", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Officer", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Empty", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Pilot", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Scout", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Crewman", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Soldier2", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Grenadier", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Sapper", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Medic", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Officer", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Empty", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1", "", 100, { "", "", -1 } },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Pilot", "", 100, { "", "", -1 } },
			{ "CUP_V_B_USArmy_PilotVest", "", 100, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "CUP_B_USMC_AssaultPack", "", 100, { "", "", -1 } },
			{ "CUP_B_USMC_MOLLE", "", 100, { "", "", -1 } },
			{ "CUP_B_USMC_MOLLE_WDL", "", 100, { "", "", -1 } },
			{ "CUP_B_USPack_Black", "", 100, { "", "", -1 } },
			{ "CUP_B_USPack_Coyote", "", 100, { "", "", -1 } }
		};
	};
	
	////////////////////////////////////////////////////////////////////////////////
	class med {
		title = "STR_Shops_C_Medic";
		license = "med";
		side = "";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_C_U_Rescuer_01", "", 1000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB", "", 1000, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Aviator", "", 1000, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Press_F", "", 1000, { "", "", -1 } }		
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 1000, { "", "", -1 } }
		};
	};
	
	////////////////////////////////////////////////////////////////////////////////
	class pmc {
		title = "STR_Shops_C_Pmc";
		license = "pmc";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};