/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class civilian {
        title = "STR_Shops_C_Civilian";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 2500, "" },
            { "CUP_O_TKI_Khet_Partug_01", "", 100, "" }, //Apex DLC
            { "CUP_O_TKI_Khet_Partug_02", "", 100, "" }, //Apex DLC
            { "CUP_O_TKI_Khet_Partug_03", "", 100, "" }, //Apex DLC
            { "CUP_O_TKI_Khet_Partug_04", "", 100, "" },
            { "CUP_O_TKI_Khet_Partug_05", "", 100, "" },
            { "CUP_O_TKI_Khet_Partug_06", "", 100, "" },
            { "CUP_O_TKI_Khet_Partug_07", "", 100, "" },
            { "CUP_O_TKI_Khet_Partug_08", "", 100, "" },
            { "CUP_O_TKI_Khet_Jeans_01", "", 200, "" },
            { "CUP_O_TKI_Khet_Jeans_02", "", 200, "" },
            { "CUP_O_TKI_Khet_Jeans_03", "", 200, "" },
            { "CUP_O_TKI_Khet_Jeans_04", "", 200, "" },
            { "CUP_U_C_Profiteer_01", "", 500, "" },
            { "CUP_U_C_Profiteer_02", "", 500, "" },
            { "CUP_U_C_Profiteer_03", "", 500, "" },
            { "CUP_U_C_Profiteer_04", "", 500, "" },
            { "CUP_C_U_Priest_01", "", 1000, "" },
            { "CUP_U_C_Suit_01", "", 1000, "" },
            { "CUP_U_C_Suit_02", "", 1000, "" },
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" },
            { "CUP_H_FR_BandanaGreen", "", 500, "" },
			{ "CUP_H_C_Beanie_01", 100, "" },
			{ "CUP_H_C_Beanie_02", 100, "" },
			{ "CUP_H_C_Beanie_03", 100, "" },
			{ "CUP_H_C_Beanie_04", 100, "" },
			{ "CUP_H_TKI_SkullCap_01", "", 100, "" },
			{ "CUP_H_TKI_SkullCap_02", "", 100, "" },
			{ "CUP_H_TKI_SkullCap_03", "", 100, "" },
			{ "CUP_H_TKI_SkullCap_04", "", 100, "" },
			{ "CUP_H_TKI_SkullCap_05", "", 100, "" },
			{ "CUP_H_TKI_SkullCap_06", "", 100, "" },
			{ "CUP_H_TKI_Pakol_1_01", "", 150, "" },
			{ "CUP_H_TKI_Pakol_1_02", "", 150, "" },
			{ "CUP_H_TKI_Pakol_1_03", "", 150, "" },
			{ "CUP_H_TKI_Pakol_1_04", "", 150, "" },
			{ "CUP_H_TKI_Pakol_1_05", "", 150, "" },
			{ "CUP_H_TKI_Pakol_1_06", "", 150, "" },
			{ "CUP_H_TKI_Pakol_2_01", "", 150, "" },
			{ "CUP_H_TKI_Pakol_2_02", "", 150, "" },
			{ "CUP_H_TKI_Pakol_2_03", "", 150, "" },
			{ "CUP_H_TKI_Pakol_2_04", "", 150, "" },
			{ "CUP_H_TKI_Pakol_2_05", "", 150, "" },
			{ "CUP_H_TKI_Pakol_2_06", "", 150, "" },
			{ "CUP_H_TKI_Lungee_Open_01", "", 100, "" },
			{ "CUP_H_TKI_Lungee_Open_02", "", 100, "" },
			{ "CUP_H_TKI_Lungee_Open_03", "", 100, "" },
			{ "CUP_H_TKI_Lungee_Open_04", "", 100, "" },
			{ "CUP_H_TKI_Lungee_Open_05", "", 100, "" },
			{ "CUP_H_TKI_Lungee_Open_06", "", 100, "" },
			{ "CUP_H_TKI_Lungee_03", "", 150, "" },
			{ "CUP_H_TK_Lungee", "", 150, "" },
			{ "CUP_H_TKI_Lungee_01", "", 150, "" },
			{ "CUP_H_TKI_Lungee_02", "", 150, "" },
			{ "CUP_H_TKI_Lungee_04", "", 150, "" },
			{ "CUP_H_TKI_Lungee_05", "", 150, "" },
			{ "CUP_H_TKI_Lungee_06", "", 150, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
            { "CUP_V_OI_TKI_Jacket1_01", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket1_02", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket1_03", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket1_04", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket1_05", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket1_06", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket2_01", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket2_02", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket2_03", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket2_04", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket2_05", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket2_06", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket3_01", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket3_02", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket3_03", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket3_04", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket3_05", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket4_01", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket4_02", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket4_03", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket4_04", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket3_06", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket4_05", "", 100, "" },
			{ "CUP_V_OI_TKI_Jacket4_06", "", 100, "" },
			{ "V_Press_F", "", 1000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" }, //Apex DLC
            { "CUP_B_HikingPack_Civ", "", 1000, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_uniforms, 25, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 550, "call life_coplevel >= 2" },
            { "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" },
            { "CUP_U_B_USArmy_Base", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USArmy_TwoKnee", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USArmy_UBACS", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USArmy_Soft", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USArmy_Ghillie", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USArmy_PilotOverall", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USMC_Officer", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USMC_MARPAT_WDL_RolledUp", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USMC_MARPAT_WDL_Kneepad", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USMC_PilotOverall", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad", "", 100, "call life_coplevel >= 1" },
			{ "CUP_U_B_USMC_Ghillie_WDL", "", 100, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_HelmetB_Enh_tna_F", "", 80, "call life_coplevel >= 1" }, //Apex DLC
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 2" },
            { "H_MilCap_gen_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_tna_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_oucamo", "", 1200, "call life_coplevel >= 2" },
            { "CUP_H_USArmy_Boonie", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USA_Cap", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_HelmetMICH", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_HelmetMICH_ESS", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_HelmetMICH_earpro", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USMC_Officer_Cap", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_HelmetMICH_earpro_ess", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_HelmetMICH_headset", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_HelmetMICH_headset_ess", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_HelmetMICH_wdl", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_ECH1_Sand", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_ECH2_Sand", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_ECH1_Black", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_ECH2_Black", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_ECH1_Green", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_ECH2_GREEN", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_Pro", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_Pro_gog", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_M1_Olive", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_M1_Vine", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_M1_m81", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USArmy_Helmet_M1_btp", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USMC_HelmetWDL", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USMC_Headset_HelmetWDL", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USMC_Headset_GoggleW_HelmetWDL", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USMC_Crew_Helmet", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USMC_Goggles_HelmetWDL", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USMC_Helmet_Pilot", "", 100, "call life_coplevel >= 1" },
			{ "CUP_H_USMC_MICH2000_DES", "", 100, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
            { "CUP_NVG_PVS7", "", 0, "call life_coplevel >= 2" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 1000, "call life_coplevel >= 1" }, //Apex DLC
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 2" },
            { "CUP_V_BAF_Osprey_Mk2_DDPM_Scout", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Crewman", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Medic", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Officer", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Empty", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Pilot", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Scout", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Crewman", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Soldier2", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Grenadier", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Sapper", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Medic", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DPM_Officer", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Empty", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_BAF_Osprey_Mk2_DDPM_Pilot", "", 100, "call life_coplevel >= 1" },
			{ "CUP_V_B_USArmy_PilotVest", "", 100, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Carryall_cbr", "", 3500, "" },
            { "CUP_B_USMC_AssaultPack", "", 100, "" },
			{ "CUP_B_USMC_MOLLE", "", 100, "" },
			{ "CUP_B_USMC_MOLLE_WDL", "", 100, "" },
			{ "CUP_B_USPack_Black", "", 100, "" },
			{ "CUP_B_USPack_Coyote", "", 100, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" },
            { "CUP_C_U_Rescuer_01", "", 1000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" },
            { "H_HelmetB", "", 1000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" },
            { "G_Aviator", "", 1000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Press_F", "", 1000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" },
            { "B_Carryall_ocamo", "", 1000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
