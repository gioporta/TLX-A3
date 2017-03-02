class WeaponShops {
    class gun {
        name = "Xavier's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
			{ "CUP_hgun_Duty", "", 1000 },
			{ "16Rnd_9x21_Mag", "", 1000 }
        };
    };
	class hunt {
        name = "Juan's Hunting Store";
        side = "civ";
        license = "hunt";
        level = -1;
        msg = "";
        items[] = {
			{ "CUP_srifle_CZ550", "", 1000 }, 
			{ "CUP_5x_22_LR_17_HMR_M", "", 1000 }
        };
    };
    class rebelsmg {
        name = "Cobra's Jihadi SMG Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
			{ "CUP_smg_bizon", "", 1000 }, 
			{ "CUP_64Rnd_9x19_Bizon_M", "", 1000 }
        };
    };
   class rebelar {
        name = "Jackie's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
			{ "CUP_arifle_AK74", "", 1000 }, 
			{ "CUP_30Rnd_545x39_AK_M", "", 1000 }
        };
    };
	class rebellmg {
        name = "Pete's Jihadi LMG Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
        { "CUP_lmg_L7A2", "", 1000 }, 
        { "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 1000 }
        };
    };
	class rebelexp {
        name = "Alex's Jihadi Explosive Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
			{ "CUP_launch_Igla", "IGLA AA Launcher", 1000 }, 
			{ "CUP_Igla_M", "IGLA Missile", 1000 }
        };
    };	
	class rebeladv {
        name = "Advanced Rebel Weapons";
        side = "civ";
        license = "rebeladvanced";
        level = -1;
        msg = "";
        items[] = {
			{ "CUP_arifle_Sa58RIS1", "", 1000 }, 
			{ "CUP_30Rnd_Sa58_M_TracerG", "", 1000 }
        };
    };
	class rebeloptics {
        name = "Mohammed's Jihadi Optics & Accessories Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
        { "optic_ACO_grn", "", 100 }, 
		{ "optic_Aco", "", 100 }, 
        { "optic_ACO_grn_smg", "", 100 }, 
        { "optic_Aco_smg", "", 100 },
		{ "optic_AMS", "", 5000 },
		{ "optic_Arco", "", 7500 },
		{ "optic_DMS", "", 5000 },
		{ "optic_KHS_blk", "", 7500 },
		{ "optic_LRPS", "", 10000 },
		{ "optic_Holosight", "", 1000 },
		{ "optic_SOS", "", 5000 },
		{ "optic_MRCO", "", 5000 },
		{ "optic_Hamr", "", 7500 },
		{ "CUP_optic_Kobra", "", 1000 },
		{ "CUP_optic_PSO_3", "", 5000 },
		{ "CUP_optic_MRad", "", 1000 },
		{ "CUP_optic_HoloBlack", "", 2000 },
		{ "bipod_01_F_snd", "", 2000 },
        { "acc_flashlight", "", 1000 },
        { "Binocular", "", 300 },
        { "Rangefinder", "", 1500 },
		{ "ItemGPS", "", 200 },
		{ "ToolKit", "", 2500 },
		{ "FirstAidKit", "", 300 },
		{ "NVGoggles", "", 4000 },
		{ "tf_fadak", "Fadak Radio (5km)", 3000 },
		{ "Chemlight_red", "", 600 },
		{ "Chemlight_yellow", "", 600 },
		{ "Chemlight_green", "", 600 },
		{ "Chemlight_blue", "", 600 }
        };
    };
	class alkhadim {
        name = "Al Khadim Weapon Locker";
        side = "civ";
        license = "khadim";
        level = -1;
        msg = "";
        items[] = {
        };
	};
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
		{ "hgun_Pistol_heavy_02_F", "", 2500 },
		{ "hgun_ACPC2_F", "", 4500 },
		{ "hgun_PDW2000_F", "", 9500 },
		{ "tf_anprc148jem", "", 2000 },
		{ "optic_ACO_grn_smg", "", 950 },
		{ "V_Rangemaster_belt", "", 1900 },
		{ "16Rnd_9x21_Mag", "", 25 },
		{ "9Rnd_45ACP_Mag", "", 45 },
		{ "6Rnd_45ACP_Cylinder", "", 50 },
		{ "30Rnd_9x21_Mag", "", 75 }
        };
    };
    //Basic Shops
    class genstore {
        name = "General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
		{ "Binocular", "", 150 },
		{ "ItemGPS", "", 100 },
		{ "ToolKit", "", 2500 },
		{ "ItemMap", "Map", 10},
		{ "FirstAidKit", "", 150 },
		{ "NVGoggles", "", 2000 },
		{ "tf_fadak", "Fadak Radio (5km)", 1500 },
		{ "Chemlight_red", "", 300 },
		{ "Chemlight_yellow", "", 300 },
		{ "Chemlight_green", "", 300 },
		{ "Chemlight_blue", "", 300 }
        };
    };
	////////////////////////////////////////////////////////////////////////////////////
	class taki_recruit {
	name = "Nato Recruit Weapons Shop";
	side = "cop";
	license = "";
	level = 1; //Recruit
	msg = "You are not a Recruit in the Nato.";
	items[] = {
		{ "Taser_26", "", 1000 },
		{ "26_cartridge", "", 1000 },
		{ "CUP_hgun_Duty", "", 3500 },
		{ "16Rnd_9x21_Mag", "", 150 }
		};
	};
	class taki_private {
	name = "Nato Private Weapons Shop";
	side = "cop";
	license = "";
	level = 2; //Private
	msg = "You are not a Private in the Nato.";
	items[] = {
		{ "CUP_arifle_L85A2", "", 3000 },
		{ "CUP_30Rnd_556x45_Stanag", "", 500 }
		};
	};
	class taki_pfc {
	name = "Nato Private First Class Weapons Shop";
	side = "cop";
	license = "";
	level = 3; //Private First Class
	msg = "You are not a Private First Class in the Nato.";
	items[] = {
		{ "CUP_arifle_L85A2", "", 1000 },
		{ "CUP_30Rnd_556x45_Stanag", "", 1000 }
		};
	};
	class taki_corporal {
	name = "Nato Corporal Weapons Shop";
	side = "cop";
	license = "";
	level = 4; //Corporal
	msg = "You are not a Corporal in the Nato.";
	items[] = {
		{ "CUP_arifle_L85A2", "", 1000 },
		{ "CUP_30Rnd_556x45_Stanag", "", 1000 }
		};
	};
	class taki_sergeant {
	name = "Nato Sergeant Weapons Shop";
	side = "cop";
	license = "";
	level = 5; //Sergeant
	msg = "You are not a Sergeant in the Nato.";
	items[] = {
		{ "CUP_arifle_G36C", "", 1000 },
		{ "CUP_30Rnd_556x45_G36", "", 1000 }
		};
	};
	class taki_ssergeant {
	name = "Nato Staff Sergeant Weapons Shop";
	side = "cop";
	license = "";
	level = 6; //Staff Sergeant
	msg = "You are not a Staff Sergeant in the Nato.";
	items[] = {
		{ "CUP_launch_Igla", "", 1000 },
		{ "CUP_Igla_M", "", 1000 }
		};
	};
	class taki_command {
	name = "Nato Command Weapons Shop";
	side = "cop";
	license = "";
	level = 6; //Command
	msg = "You are not part of the Nato Command!";
	items[] = {
		{ "SmokeShellOrange", "Teargas", 2500 },
		{ "MASK_M50", "", 2000 },
		{ "tf_anprc152", "", 50 },
		{ "tf_rt1523g", "", 50 },
		{ "CUP_hgun_Duty", "", 3500 },
		{ "16Rnd_9x21_Mag", "", 150 },
		{ "CUP_arifle_M16A4_Base", "", 3000 },
		{ "CUP_30Rnd_556x45_Stanag", "", 500 },
		{ "CUP_arifle_AK107", "", 3000 },
		{ "CUP_30Rnd_545x39_AK_M", "", 500 },
		{ "CUP_arifle_M4A1_black", "", 3000 },
		{ "CUP_30Rnd_556x45_Stanag", "", 500 },	
		{ "CUP_arifle_L85A2", "", 3000 },
		{ "CUP_30Rnd_556x45_Stanag", "", 500 },
		{ "CUP_arifle_G36C", "", 3000 },
		{ "CUP_30Rnd_556x45_G36", "", 500 },
		{ "CUP_launch_Igla", "", 3000 },
		{ "CUP_Igla_M", "", 500 },
	    { "CUP_arifle_Sa58RIS1", "", 3000 },
		{ "CUP_30Rnd_Sa58_M_TracerG", "", 500 },
		{ "CUP_lmg_M249", "", 3000 },
		{ "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "", 500 },
		{ "CUP_optic_CompM4", "", 70 },
		{ "optic_LRPS", "", 100 },
		{ "B_UavTerminal", "", 3000 }
		};
	};
	class taki_acc {
        name = "Nato Optics & Accessories Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
		{ "HandGrenade_Stone", "Flashbang", 1000 },
		{ "Medikit", "", 200 },
		{ "SmokeShellOrange", "Teargas", 2500 },
		{ "MASK_M50", "", 2000 },
		{ "muzzle_snds_L", "", 650 },
		{ "Rangefinder", "", 150 },
		{ "Binocular", "", 150 },
		{ "ItemGPS", "", 100 },
		{ "ItemMap", "Map", 10},
		{ "ToolKit", "", 2500 },
		{ "FirstAidKit", "", 150 },
		{ "tf_anprc152", "", 50 },
		{ "tf_rt1523g", "", 50 },
		{ "NVGoggles", "", 2000 },
		{ "optic_SOS", "", 500 },
		{ "optic_AMS", "", 500 },
		{ "optic_KHS_old", "", 500 },
		{ "optic_MRCO", "", 500 },
		{ "optic_DMS", "", 500 },
		{ "optic_Aco", "", 500 },
		{ "optic_ACO_grn", "", 500 },
		{ "optic_ARCO", "", 500 },
		{ "bipod_01_F_snd", "", 500 },
		{ "CUP_optic_AN_PVS_10", "", 500 },
		{ "CUP_acc_ANPEQ_2_desert", "", 500 },
		{ "CUP_optic_Kobra", "", 500 },
		{ "optic_Hamr", "", 500 },
		{ "acc_flashlight", "", 500 }
        };
    };
	
	////////////////////////////////////////////////////////////////////////////////////
    //Medic Shops
    class med_basic {
		name = "Medical Equipment";
		side = "med";
		license = "";
		level = -1;
		items[] = {
		{ "ItemGPS", "", 100 },
		{ "tf_anprc152", "", 50 },
		{ "Binocular", "", 150 },
		{ "ToolKit", "", 2500 },
		{ "FirstAidKit", "", 150 },
		{ "Medikit", "", 500 }
		};
    };
};
