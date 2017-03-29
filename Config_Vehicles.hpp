class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and inss, do not fill this in if you are not utilizing it.
	*/
	
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 1000, "" }, 
			{ "CUP_C_UAZ_Unarmed_TK_CIV", 1000, "driver" },
			{ "CUP_C_UAZ_Open_TK_CIV", 1000, "driver" },
			{ "CUP_C_Octavia_CIV", 1000, "driver" },
			{ "CUP_C_Skoda_White_CIV", 1000, "driver" },
			{ "CUP_C_Skoda_Red_CIV", 1000, "driver" },
			{ "CUP_C_Skoda_Blue_CIV", 1000, "driver" },
			{ "CUP_C_Skoda_Green_CIV", 1000, "driver" },
			{ "CUP_C_LR_Transport_CTK", 1000, "driver" },
			{ "CUP_C_Datsun", 1000, "driver" },
			{ "CUP_C_Datsun_4seat", 1000, "driver" },
			{ "CUP_C_Datsun_Plain", 1000, "driver" },
			{ "CUP_C_Datsun_Covered", 1000, "driver" },
			{ "CUP_C_Datsun_Tubeframe", 1000, "driver" },
			{ "CUP_C_Golf4_random_Civ", 1000, "driver" },
			{ "CUP_C_SUV_CIV", 1000, "driver" }
		};
	};
	
	class civ_bike {
		side = "civ";
		vehicles[] = {
			{ "CUP_B_M1030", 1000, "" }
		};
	};
	
	class civ_exotic {
		side = "civ";
		vehicles[] = {
			{ "CUP_C_SUV_CIV", 1000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 1000 , "driver" },
			{ "C_Kart_01_Fuel_F", 1000, "driver" },
			{ "C_Kart_01_Red_F", 1000, "driver" },
			{ "C_Kart_01_Vrana_F", 1000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "CUP_C_SUV_TK", 1000, "",{ "life_inslevel", 1 } }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "CUP_C_Mi17_Civilian_RU", 1000, "mAir", { "life_inslevel", 1 }}
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "CUP_C_Ural_Civ_01", 1000, "trucking" },
			{ "CUP_C_Ural_Civ_02", 1000, "trucking" },
			{ "CUP_C_Ural_Civ_03", 1000, "trucking" },
			{ "CUP_C_Ural_Open_Civ_01", 1000, "trucking" },
			{ "CUP_C_Ural_Open_Civ_02", 1000, "trucking" },
			{ "CUP_C_Ural_Open_Civ_03", 1000, "trucking" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "CUP_C_SUV_TK", 1000, "ins" }
		};
	};
	
	class rdm_car {
		side = "civ";
		vehicles[] = {
			{ "CUP_C_SUV_TK", 1000, "ins" }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "CUP_C_DC3_CIV", 10000, "pilot" }
		};
	};
	
	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "CUP_C_SUV_TK", 1000, "", { "life_coplevel", 1 } },
			{ "CUP_B_HMMWV_Unarmed_USMC", 1000, "", { "life_coplevel", 1 } },
			{ "CUP_B_HMMWV_M2_USMC", 1000, "", { "life_coplevel", 2 } }
		};
	};
	
	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "MV22", 1000, "cAir", { "life_coplevel", 6 }},
			{ "B_Heli_Light_01_F", 1000, "cAir", { "life_coplevel", 6 }},
			{ "EC635_Unarmed", 4000, "cAir", { "life_coplevel", 6 } },
			{ "B_Heli_Transport_03_F", 1000, "cAir", { "life_coplevel", 6 } },
			{ "B_Heli_Transport_01_F", 1000, "cAir", { "life_coplevel", 6 } },
			{ "B_UAV_02_F", 1000, "cAir", { "life_coplevel", 6} },
			{ "B_Heli_Light_01_armed_F", 1000, "cAir", { "life_coplevel", 6 } },
			{ "EC635", 1000, "cAir", { "life_coplevel", 6 } },
			{ "RHS_UH1Y_d", 1000, "cAir", { "life_coplevel", 6 } },
			{ "RHS_UH1Y_FFAR_d", 20000, "cAir", { "life_coplevel", 6 } },
			{ "RHS_AH64D_wd_AA", 1000, "cAir", { "life_coplevel", 6 } },
			{ "RHS_C130J", 1000, "cAir", { "life_coplevel", 6 } }
		};
	};

	class cop_airhq {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 1000, "cAir" },
			{ "B_Heli_Transport_01_F", 1000, "cAir", { "life_coplevel", 4 } }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = 10;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1000;
		textures[] = {};
	};
	
	class CUP_C_SUV_CIV {
		vItemSpace = 300;
		chopShop = 1000;
	};
	

	class B_Quadbike_01_F {
        vItemSpace = 5;
        chopShop = 1000;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Ins Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };
	
};
