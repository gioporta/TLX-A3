class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
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
			{ "CUP_C_SUV_TK", 1000, "",{ "life_mediclevel", 1 } }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "CUP_C_Mi17_Civilian_RU", 1000, "mAir", { "life_mediclevel", 1 }}
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
			{ "CUP_C_SUV_TK", 1000, "rebel" }
		};
	};
	
	class rdm_car {
		side = "civ";
		vehicles[] = {
			{ "CUP_C_SUV_TK", 1000, "rebel" }
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

	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		chopShop = 0;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		chopShop = 0;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		chopShop = 0;
	};

	class C_Rubberboat {
		vItemSpace = 45;     	
		chopShop = 1000;
		textures[] = {};
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 0;
		chopShop = 91000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F {
		vItemSpace = 100;
		chopShop = 91000;
        textures[] = {
        	{ "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };
	class B_MRAP_01_gmg_F {
		vItemSpace = 100;
		chopShop = 91000;
        textures[] = {
        	{ "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };
	class HMMWV : Default {
		vItemSpace = 100;
		chopShop = 1000;
		textures[] = {};
	};

	class rhsusf_m998_w_4d : Default {
		vItemSpace = 100;
		chopShop = 1000;
		textures[] = {};
	};
	
	class HMMWV_M1035 : Default {
		vItemSpace = 100;
		chopShop = 1000;
		textures[] = {};
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 110;
        chopShop = 1000;
        textures[] = { };
    };


	class DAR_MaxxPro_M2 {
        vItemSpace = 110;
        chopShop = 22000;
        textures[] = { };
    };
    
    
	class DAR_MaxxProDXM {
        vItemSpace = 110;
        chopShop = 1000;
        textures[] = { };
    };
    

	class DAR_MaxxPro {
        vItemSpace = 175;
        chopShop = 1000;
        textures[] = { };
    };
    

	class DAR_MaxxProPlus {
        vItemSpace = 175;
        chopShop = 1000;
        textures[] = { };
    };

    
	class rhsusf_M1083A1P2_B_M2_d_fmtv_usarmy {
        vItemSpace = 175;
        chopShop = 1000;
        textures[] = { };
    };


	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 15;
        chopShop = 1000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        chopShop = 1000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        chopShop = 1000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 225;
        chopShop = 1000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 280;
        chopShop = 121000;
        textures[] = { };
    };
	
	class O_Truck_02_fuel_F {
        vItemSpace = 150;
        chopShop = 21000;
        textures[] = { };
    };
	
	class O_Truck_03_fuel_F {
		vItemSpace = 220;
        chopShop = 121000;
        textures[] = { };
	};
	
	class B_Truck_01_fuel_F {
		vItemSpace = 200;
        chopShop = 171000;
        textures[] = { };
	};

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 1000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        chopShop = 8000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        chopShop = 0;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        chopShop = 1000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        chopShop = 1000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        chopShop = 1000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 250;
        chopShop = 1000;
        textures[] = { };
    };
	
	class Jonzie_Box_Truck {
        vItemSpace = 450;
        chopShop = 22000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 220;
        chopShop = 1000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        chopShop = 25500;
        textures[] = {
			{ "Default", "reb", {
				"\A3\soft_f\MRAP_02\Data\mrap_02_ext_02_co.paa"
            } },
            { "Black", "reb", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } }
        };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        chopShop = 25500;
        textures[] = { 
			{ "Default", "cop", {
				"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_indp_co.paa"
            } },
            { "Black", "cop", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } }
		};
    };
    
        class EWK_M1151 {
        vItemSpace = 65;
        chopShop = 21000;
        textures[] = {};
    };
    
    class EWK_m1151_m2_deployment {
        vItemSpace = 65;
        chopShop = 21000;
        textures[] = {};
    };
      
    class EWK_m1151_m2_deployment_Jtac {
        vItemSpace = 65;
        chopShop = 21000;
        textures[] = {};
    };
    
    class rhs_tigr_vdv {
        vItemSpace = 65;
        chopShop = 1000;
        textures[] = {};
    };
    
    	class rhsusf_m998_w_4 {
        vItemSpace = 325;
        chopShop = 21000;
        textures[] = { };
    };
	
	class rhsusf_m998_w_2dr {
        vItemSpace = 325;
        chopShop = 51000;
        textures[] = { };
    };
	
	class rhsusf_m1025_w_m2 {
        vItemSpace = 325;
        chopShop = 51000;
        textures[] = { };
    };
    
    class RHS_Mi8AMT_vvs {
        vItemSpace = 25;
        chopShop = 51000;
        textures[] = {};
    };
    
    class rhs_t80b {
        vItemSpace = 10;
        chopShop = 0;
        textures[] = {};
    };
    
    class rhs_prp3_vdv {
        vItemSpace = 100;
        chopShop = 0;
        textures[] = {};
	};
    
    class rhs_btr80_msv {
        vItemSpace = 100;
        chopShop = 0;
        textures[] = {};
    };
	
	 class B_Heli_Attack_01_F {
        vItemSpace = 0;
        chopShop = 0;
        textures[] = {};
    };
      
    class EWK_m1151_m2_deployment_Bumper {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
       
    class EWK_HMMWV_Light {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
       
    class EWK_HMMWV_Medevac {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
       
    class EWK_M997A2_Ambulance {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
       
    class EWK_M997A2_Ambulance_NoBackLights {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
        
    class EWK_M997A2_Ambulance_Tan {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
    
     class RHS_UH60M_MEV {
        vItemSpace = 100;
        chopShop = 25500;
        textures[] = {};
    };
    
    class B_APC_Tracked_01_rcws_F {
        vItemSpace = 10;
        chopShop = 55500;
        textures[] = {};
    };
    
    class rhsusf_m1a1aim_tuski_d {
        vItemSpace = 10;
        chopShop = 55500;
        textures[] = {};
    };
    
    class B_UAV_02_F {
        vItemSpace = 1;
        chopShop = 55500;
        textures[] = {};
    };
    
    class RHS_AH1Z {
        vItemSpace = 50;
        chopShop = 51000;
        textures[] = {};
    };
    
    class RHS_UH60M {
        vItemSpace = 50;
        chopShop = 55500;
        textures[] = {};
    };
    
    class RHS_CH_47F {
        vItemSpace = 50;
        chopShop = 50500;
        textures[] = {};
    };

    class EWK_M998_Terminal {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
        
    class EWK_M1114_Armored {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
         
    class EWK_M998A2_sov_M2 {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
         
    class EWK_m1151_TOW_deployment {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
          
    class EWK_m1151_m240_deployment {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
          
    class EWK_m1151_m2_deployment_AT4 {
        vItemSpace = 65;
        chopShop = 25500;
        textures[] = {};
    };
           
   
    class B_APC_Wheeled_01_cannon_F {
        vItemSpace = 15;
        chopShop = 0;
        textures[] = {};
    };
           
    class B_MBT_01_cannon_F {
        vItemSpace = 15;
        chopShop = 25500;
        textures[] = {};
        
    };
           
    class LandRover_ACR {
        vItemSpace = 40;
        chopShop = 5500;
        textures[] = {};
        
    };
           
    class B_APC_Tracked_01_CRV_F {
        vItemSpace = 10;
        chopShop = 5500;
        textures[] = {};
        
    };
           
    class B_Heli_Light_01_armed_F {
        vItemSpace = 0;
        chopShop = 4000;
        textures[] = {};
        
    };
            
    class LandRover_CZ_EP1 {
        vItemSpace = 65;
        chopShop = 5500;
        textures[] = {};
        
    };
         
    class LandRover_TK_CIV_EP1  {
        vItemSpace = 65;
        chopShop = 5500;
        textures[] = {};
        
    };
             
    class ACR_LandRover_AMB  {
        vItemSpace = 65;
        chopShop = 5500;
        textures[] = {};
        
    };
             
    class BAF_Offroad_W  {
        vItemSpace = 65;
        chopShop = 5500;
        textures[] = {};
        
    };
	
	class Jonzie_Escalade  {
        vItemSpace = 50;
        chopShop = 5500;
        textures[] = {};
        
    };
	
	class Jonzie_30CSL  {
        vItemSpace = 25;
        chopShop = 1000;
        textures[] = {};
        
    };
	
	class Jonzie_Corolla  {
        vItemSpace = 25;
        chopShop = 4500;
        textures[] = {};
        
    };
	
	class Jonzie_Datsun_510  {
        vItemSpace = 25;
        chopShop = 3500;
        textures[] = {};
        
    };
	
	class Jonzie_Datsun_Z432  {
        vItemSpace = 20;
        chopShop = 7500;
        textures[] = {};
        
    };
	
	class Jonzie_Mini_Cooper  {
        vItemSpace = 25;
        chopShop = 3500;
        textures[] = {};
        
    };
	
	class onzie_Galant  {
        vItemSpace = 25;
        chopShop = 1000;
        textures[] = {};
        
    };
    
    class rhsusf_rg33_d  {
        vItemSpace = 65;
        chopShop = 27400;
        textures[] = {};
        
    };			
	
	class rhsusf_rg33_m2_d  {
        vItemSpace = 65;
        chopShop = 0;
        textures[] = {};
        
    };	
    	
	class RHS_UH1Y_UNARMED  {
        vItemSpace = 65;
        chopShop = 0;
        textures[] = {};
        
    };	
    
    class BAF_Offroad_D  {
        vItemSpace = 65;
        chopShop = 51000;
        textures[] = {};
        
    };
             
    class ACR_Offroad_HMG {
        vItemSpace = 65;
        chopShop = 51000;
        textures[] = {};
        
    };
	
	class RHS_Mi24V_AT_vdv {
		vItemSpace = 0;
		chopShop = 0;
		textures[] = {};
		
    };
	
	class RHS_AH64D_wd_AA {
        vItemSpace = 0;
        chopShop = 0;
        textures[] = {};

    };
	
	class RHS_UH1Y_d {
        vItemSpace = 0;
        chopShop = 0;
        textures[] = {};

    };
	
	class RHS_UH1Y_FFAR_d {
        vItemSpace = 0;
        chopShop = 0;
        textures[] = {};

    };
	
    class BAF_Offroad_W_HMG {
        vItemSpace = 65;
        chopShop = 1000;
        textures[] = {};
        
    };
             
    class LandRover_MG_TK_EP1 {
        vItemSpace = 65;
        chopShop = 7100;
        textures[] = {};
        
    };
                 
    class Gurkha_f5 {
        vItemSpace = 100;
        chopShop = 21000;
        textures[] = {};
        
    };
                 
    class Gurkha_M60 {
        vItemSpace = 100;
        chopShop = 21000;
        textures[] = {};
        
    };

	class C_Offroad_01_F {
        vItemSpace = 40;
        chopShop = 3500;
        textures[] = {
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        chopShop = 23000;
        textures[] = {};
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
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 220;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
    };

	class O_Truck_03_covered_F {
		vItemSpace = 210;
		chopShop = 1000;
		textures[] = {};
	};
	
	class RHS_Ural_Open_Civ_01 {
		vItemSpace = 175;
		chopShop = 6000;
		textures[] = {};
	};
	
	class Jonzie_Transit {
		vItemSpace = 165;
		chopShop = 4000;
		textures[] = {};
	};
	
	class shounka_nemo {
		vItemSpace = 150;
		chopShop = 4000;
		textures[] = {};
	};
	
	class shounka_a3_spr_civ {
		vItemSpace = 170;
		chopShop = 4000;
		textures[] = {};
	};
	
	class C_Hatchback_01_F {
        vItemSpace = 40;
        chopShop = 6000;
        textures[] = {};
    };

	class C_SUV_01_F {
        vItemSpace = 15;
        chopShop = 1000;
        textures[] = {
	        };
    };

	class C_Van_01_transport_F {
        vItemSpace = 100;
        chopShop = 1000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 150;
        chopShop = 1000;
        textures[] = {
        };
    };
	class B_MRAP_01_F {
        vItemSpace = 65;
        chopShop = 1000;
        textures[] = {
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 0;
        chopShop = 1000;
        textures[] = {
			{ "Black", "cop", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 0;
        chopShop = 1000;
        textures[] = {
        	{ "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } },
			{ "Mitnight", "cop", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Orca", "civ", {
                "\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 20;
        chopShop = 1000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
	
	class RHS_C130J {}; //c130??
	
	class I_Heli_light_03_unarmed_F {
		vItemSpace = 0;
		chopShop = 1000;
		textures[] = {};
	};
	
	class O_Heli_Transport_04_medevac_F {
		vItemSpace = 100;
		chopShop = 0;
		textures[] = {};
	}
	
	class O_Heli_Transport_04_F {
		vItemSpace = 0;
		chopShop = 1000;
		textures[] = {
			{ "Black", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa"
            } },
        	{ "Hexagon", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_co.paa"
            } }
		};
	};
	
	class O_Heli_Transport_04_bench_F {
		vItemSpace = 0;
		chopShop = 1000;
		textures[] = {
			{ "Black", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_bench_black_co.paa"
            } },
        	{ "Hexagon", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_bench_co.paa"
            } }
		};
	};
	
	class O_Heli_Transport_04_covered_F {
		vItemSpace = 0;
		chopShop = 1000;
		textures[] = {
			{ "Black", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"
            } },
        	{ "Hexagon", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_co.paa"
            } }
		};
	};
	
	class O_Heli_Transport_04_box_F {
		vItemSpace = 0;
		chopShop = 1000;
		textures[] = {
			{ "Black", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"
            } },
        	{ "Hexagon", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_co.paa"
            } }
		};
	};
	
	class B_Heli_Transport_03_unarmed_F {
		vItemSpace = 0;
		chopShop = 1000;
	};
	
	class B_Heli_Transport_03_F {
		vItemSpace = 0;
		chopShop = 1000;
	};
	
	class RHS_Mi8mt_vvs {
		vItemSpace = 0;
		chopShop = 1000;
	};
	
	
	class I_Plane_Fighter_03_CAS_F {};
	class O_Plane_CAS_02_F {};
	class B_Plane_CAS_01_F {};
	class RHS_A10 {};
	class RHS_Su25SM_vvs {};
	class B_Truck_01_ammo_F {};
	class B_Truck_01_Repair_F {};
	class RHS_M2A3_BUSKIII {};
	
};
