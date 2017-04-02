/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //NATO Shops
    class nato_armory {
        name = "NATO Armory";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "Rangefinder", "", 500, 250, "" },
            { "ItemMap", "Map", 10, 5, ""},
            { "ItemGPS", "", 100, 50, "" },
            { "ToolKit", "", 1500, 750, "" },
            { "FirstAidKit", "", 250, 125, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "MASK_M50", "", 2000, 1000, "" },
            { "tf_anprc152", "", 50, 25, "" },
            { "tf_rt1523g", "", 100, 50, "" },
            { "B_UavTerminal", "", 3000, 1500, "call life_coplevel >=5" }
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "SmokeShellOrange", "Teargas", 2500, 1250, "" }, //TODO
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" }, //temp
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" }, //temp
            { "Taser_26", "", 1000, 500, "" },
            { "CUP_hgun_Duty", "", 3500, 1750, "" },
            { "CUP_arifle_L85A2", "", 5000, 1500, "call life_coplevel >= 2" },
            { "CUP_arifle_G36C", "", 7000, 3500, "call life_coplevel >= 5" },
            { "CUP_arifle_M16A4_Base", "", 5000, 2500, "call life_coplevel >= 6" },
            { "CUP_arifle_M4A1_black", "", 7000, 3500, "call life_coplevel >= 6" },
            { "CUP_arifle_Sa58RIS1", "", 5000, 2500, "call life_coplevel >= 6" },
            { "CUP_lmg_M249", "", 9000, 4500, "call life_coplevel >= 6" },
            { "CUP_launch_Igla", "", 12000, 6000, "call life_coplevel >= 6" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" }, //temp
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" }, //temp
            { "26_cartridge", "", 1000, 500, "" },
            { "16Rnd_9x21_Mag", "", 150, 75, "" },
            { "CUP_30Rnd_556x45_Stanag", "", 250, 125, "call life_coplevel >= 2" },
            { "CUP_30Rnd_556x45_G36", "", 500, 250, "call life_coplevel >=5" },
            { "CUP_30Rnd_Sa58_M_TracerG", "", 500, 250, "call life_coplevel >= 6" },
            { "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "", 500, 250, "call life_coplevel >= 6" },
            { "CUP_Igla_M", "", 2000, 1000, "call life_coplevel >= 6" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 500, 250, "" },
            { "muzzle_snds_H", "", 500, 250, "" },
            { "optic_MRD", "", 500, 250, "" },
            { "optic_Holosight", "", 500, 250, "" },
            { "optic_SOS", "", 500, 250, "" },
            { "optic_AMS", "", 500, 250, "" },
            { "optic_KHS_old", "", 500, 250, "" },
            { "optic_MRCO", "", 500, 250, "" },
            { "optic_DMS", "", 500, 250, "" },
            { "optic_Aco", "", 500, 250, "" },
            { "optic_ACO_grn", "", 500, 250, "" },
            { "optic_ARCO", "", 500, 250, "" },
            { "bipod_01_F_snd", "", 500, 250, "" },
            { "CUP_optic_AN_PVS_10", "", 500, 250, "" },
            { "CUP_acc_ANPEQ_2_desert", "", 500, 250, "" },
            { "CUP_optic_Kobra", "", 500, 250, "" },
            { "optic_Hamr", "", 500, 250, "" },
            { "acc_flashlight", "", 500, 250, "" },
            { "CUP_optic_CompM4", "", 500, 250, "call life_coplevel >= 6" },
            { "optic_LRPS", "", 500, 250, "call life_coplevel >= 6" },
            };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
