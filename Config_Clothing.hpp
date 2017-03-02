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
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_C_C_Citizen_01", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Citizen_02", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Citizen_03", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Citizen_04", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Worker_01", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Worker_02", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Worker_03", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Worker_04", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Profiteer_01", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Profiteer_02", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Profiteer_03", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Profiteer_04", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Woodlander_01", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Woodlander_02", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Woodlander_03", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Woodlander_04", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Villager_01", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Villager_02", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Villager_03", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Villager_04", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Priest_01", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Functionary_01", "", 1000, { "", "", -1 } },
			{ "CUP_C_C_Functionary_02", "", 1000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 1000, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Press_F", "", 1000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 1000, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 1000, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 1000, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 1000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 1000, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 1000, { "", "", -1 } },
			{ "B_Carryall_oli", "", 1000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 1000, { "", "", -1 } }
		};
	};
	
	class tsf {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_U_B_CDF_DST_1", "", 100, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "CUP_H_USMC_MICH2000_DES", "", 1000, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "CUP_NVG_PVS7", "", 0, { "", "", -1 } }
			
		};

		vests[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "CUP_V_CDF_6B3_1_DST", "", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "CUP_B_USPack_Coyote", "", 1000, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
	
	class kush {
		title = "STR_Shops_C_KUSH";
		license = "kush";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_O_Protagonist_VR", "", 2500, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "kio_skl_msk_red", "", 500, { "", "", -1 } }

		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "TRYK_kio_balaclava_ESS", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "EWK_Shemag_LULZ", "", 30, { "", "", -1 } },
			{ "PU_shemagh_OD", "", 30, { "", "", -1 } },
			{ "PU_shemagh_Tan", "", 30, { "", "", -1 } },
			{ "PU_shemagh_GryBLK", "", 30, { "", "", -1 } },
			{ "PU_shemagh_ODBLK", "", 30, { "", "", -1 } },
			{ "PU_shemagh_TanBLK", "", 30, { "", "", -1 } },
			{ "MEC_shemag_black", "", 30, { "", "", -1 } },
			{ "MEC_shemag_bw", "", 30, { "", "", -1 } },
			{ "MEC_shemag_red", "", 30, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 30, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 30, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 30, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 30, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 30, { "", "", -1 } },
			{ "G_Bandanna_tan", "", 30, { "", "", -1 } },
			{ "SFG_Tac_smallBeardB", "", 30, { "", "", -1 } },
			{ "SFG_Tac_smallBeardD", "", 30, { "", "", -1 } },
			{ "SFG_Tac_smallBeardG", "", 30, { "", "", -1 } },
			{ "SFG_Tac_smallBeardO", "", 30, { "", "", -1 } },
			{ "SFG_Tac_chinlessbD", "", 30, { "", "", -1 } },
			{ "SFG_Tac_chinlessbO", "", 30, { "", "", -1 } },
			{ "SFG_Tac_ChopsD", "", 30, { "", "", -1 } },
			{ "SFG_Tac_ChopsO", "", 30, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "", 2500, { "", "", -1 } }
		};
	};
	
	////////////////////////////////////////////////////////////////////////////////
	class med {
		title = "STR_Shops_C_Medic";
		license = "";
		side = "med";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_C_C_Rescuer_01", "", 1000, { "", "", -1 } }
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

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
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
	
	class aegis {
		title = "STR_Shops_C_Aegis";
		license = "aegis";
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

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
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