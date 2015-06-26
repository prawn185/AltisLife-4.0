class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_TRG20_F", "", 25000 },
            { "arifle_Katiba_F", "", 30000 },
            { "srifle_DMR_01_F", "", 50000 },
            { "arifle_SDAR_F", "", 20000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "acc_flashlight", "", 1000 },
            { "optic_Hamr", "", 7500 },
            { "30Rnd_9x21_Mag", "", 200 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "10Rnd_762x51_Mag", "", 500 },
            { "30Rnd_65x39_caseless_green", "", 275 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
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
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
        };
    };
    //Cop Shops
    class cop_items {
        name = "Altis Police Equipment Shop";
        side = "cop";
        license = "";
        level = 0;
        msg = "";
        items[] = {
                        { "Binocular","Binocs" ,0 },
                        { "ItemGPS","TomTom SatNav" ,0 },
                        { "ToolKit","Repair Kit" ,0 },
                        { "FirstAidKit","" ,0 },
                        { "Medikit","" ,0 },
                        { "NVGoggles","" ,0 },
                        { "HandGrenade_Stone","Flashbang", 0, { "life_coplevel", 3 } }
        };
    };
    //Cop Shops    
    class cop_cadet {
        name = "Altis Cadet Shop";
        side = "cop";
        license = "";
        level = 0;
        msg = "";
        items[] = {
                        { "hgun_P07_snds_F","Stun Pistol",0 },
                        { "muzzle_snds_L","Taser Pistol Suppressor" ,0 },
                        { "16Rnd_9x21_Mag","Taser Pistol Rounds" ,0 }
        };
    };
    //Cop Shops
    class cop_officer {
        name = "Altis Officer Shop";
        side = "cop";
        license = "";
        level = 1;
        msg = "";
        items[] = {
                        { "arifle_sdar_F","Taser Rifle",0 },
                        { "hgun_P07_snds_F","Stun Pistol",0 },
                        { "muzzle_snds_L","Taser Pistol Suppressor" ,0 },
                        { "16Rnd_9x21_Mag","Taser Pistol Rounds" ,0 },
                        { "20Rnd_556x45_UW_mag","Taser Rifle Magazine",0 },
                        { "SMG_02_ACO_F","Sting" ,0 },
                        { "30Rnd_9x21_Mag","Sting Magazine" ,0 },
                        { "hgun_Rook40_F","Rook" ,0 },
                        { "16Rnd_9x21_Mag","Rook Magazine" ,0 }

        };
    };

     class cop_corporal {
        name = "Altis Corporal Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "";
        items[] = {
                        { "arifle_sdar_F","Taser Rifle",0 },
                        { "hgun_P07_snds_F","Stun Pistol",0 },
                        { "muzzle_snds_L","Taser Pistol Suppressor" ,0 },
                        { "16Rnd_9x21_Mag","Taser Pistol Rounds" ,0 },
                        { "20Rnd_556x45_UW_mag","Taser Rifle Magazine",0 },
                        { "SMG_02_ACO_F","Sting" ,0 },
                        { "30Rnd_9x21_Mag","Sting Magazine" ,0 },
                        { "hgun_Rook40_F","Rook" ,0 },
                        { "16Rnd_9x21_Mag","Rook Magazine" ,0 },
                        { "arifle_MXC_Black_F","" ,0 },
                        { "30Rnd_65x39_caseless_mag","" ,0 }
        };
    };
    
    class cop_sergeant {
        name = "Altis Sergeant Shop";
        side = "cop";
        license = "";
        level = 3;
        msg = "";
        items[] = {
                        { "arifle_sdar_F","Taser Rifle",0 },
                        { "hgun_P07_snds_F","Stun Pistol",0 },
                        { "muzzle_snds_L","Taser Pistol Suppressor" ,0 },
                        { "16Rnd_9x21_Mag","Taser Pistol Rounds" ,0 },
                        { "20Rnd_556x45_UW_mag","Taser Rifle Magazine",0 },
                        { "SMG_02_ACO_F","" ,0 },
                        { "30Rnd_9x21_Mag","" ,0 },
                        { "hgun_Rook40_F","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "arifle_MXC_Black_F","" ,0 },
                        { "30Rnd_65x39_caseless_mag","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "arifle_MX_F","" ,0 },
                        { "30Rnd_65x39_caseless_mag","" ,0 },


        };
    }; 

    class cop_lt {
        name = "Altis Lieutenant Shop";
        side = "cop";
        license = "";
        level = 4;
        msg = "";
        items[] = {
                        { "arifle_sdar_F","Taser Rifle",0 },
                        { "hgun_P07_snds_F","Stun Pistol",0 },
                        { "muzzle_snds_L","Taser Pistol Suppressor" ,0 },
                        { "16Rnd_9x21_Mag","Taser Pistol Rounds" ,0 },
                        { "20Rnd_556x45_UW_mag","Taser Rifle Magazine",0 },
                        { "SMG_02_ACO_F","" ,0 },
                        { "30Rnd_9x21_Mag","" ,0 },
                        { "hgun_Rook40_F","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "arifle_MXC_Black_F","" ,0 },
                        { "arifle_MX_SW_F","" ,0 },
                        { "100Rnd_65x39_caseless_mag","" ,0 },
                        { "30Rnd_65x39_caseless_mag","" ,0 },
                        { "srifle_EBR_MRCO_LP_BI_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_EBR_SOS_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },

        };
    }; 

    class cop_captain {
        name = "Altis Captain Shop";
        side = "cop";
        license = "";
        level = 5;
        msg = "";
        items[] = {
                        { "arifle_sdar_F","Taser Rifle",0 },
                        { "hgun_P07_snds_F","Stun Pistol",0 },
                        { "muzzle_snds_L","Taser Pistol Suppressor" ,0 },
                        { "16Rnd_9x21_Mag","Taser Pistol Rounds" ,0 },
                        { "20Rnd_556x45_UW_mag","Taser Rifle Magazine",0 },
                        { "SMG_02_ACO_F","" ,0 },
                        { "30Rnd_9x21_Mag","" ,0 },
                        { "hgun_Rook40_F","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "arifle_MXC_Black_F","" ,0 },
                        { "arifle_MX_SW_F","" ,0 },
                        { "100Rnd_65x39_caseless_mag","" ,0 },
                        { "30Rnd_65x39_caseless_mag","" ,0 },
                        { "srifle_EBR_MRCO_LP_BI_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_EBR_SOS_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_DMR_02_MRCO_F","" ,0 },
                        { "10Rnd_338_Mag","" ,0 },
                        { "srifle_DMR_06_camo_khs_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_DMR_05_MRCO_F","" ,0 },
                        { "10Rnd_93x64_DMR_05_Mag","" ,0 },


        };
    }; 

    class cop_rc {
        name = "Altis Regional Commander Shop";
        side = "cop";
        license = "";
        level = 6;
        msg = "";
        items[] = {
                        { "arifle_sdar_F","Taser Rifle",0 },
                        { "hgun_P07_snds_F","Stun Pistol",0 },
                        { "muzzle_snds_L","Taser Pistol Suppressor" ,0 },
                        { "16Rnd_9x21_Mag","Taser Pistol Rounds" ,0 },
                        { "20Rnd_556x45_UW_mag","Taser Rifle Magazine",0 },
                        { "SMG_02_ACO_F","" ,0 },
                        { "30Rnd_9x21_Mag","" ,0 },
                        { "hgun_Rook40_F","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "arifle_MXC_Black_F","" ,0 },
                        { "arifle_MX_SW_F","" ,0 },
                        { "100Rnd_65x39_caseless_mag","" ,0 },
                        { "30Rnd_65x39_caseless_mag","" ,0 },
                        { "srifle_EBR_MRCO_LP_BI_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_EBR_SOS_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_DMR_02_MRCO_F","" ,0 },
                        { "10Rnd_338_Mag","" ,0 },
                        { "srifle_DMR_06_camo_khs_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_DMR_05_MRCO_F","" ,0 },
                        { "10Rnd_93x64_DMR_05_Mag","" ,0 },


        };
    }; 
    class cop_swat {
        name = "Altis S.W.A.T Shop";
        side = "cop";
        license = "swat";
        level = 7;
        msg = "";
        items[] = {
                        { "SMG_02_ACO_F","" ,0 },
                        { "30Rnd_9x21_Mag","" ,0 },
                        { "hgun_Rook40_F","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "16Rnd_9x21_Mag","" ,0 },
                        { "arifle_MXC_Black_F","" ,0 },
                        { "arifle_MX_SW_F","" ,0 },
                        { "100Rnd_65x39_caseless_mag","" ,0 },
                        { "30Rnd_65x39_caseless_mag","" ,0 },
                        { "srifle_EBR_SOS_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_DMR_02_MRCO_F","" ,0 },
                        { "10Rnd_338_Mag","" ,0 },
                        { "srifle_DMR_06_camo_khs_F","" ,0 },
                        { "20Rnd_762x51_Mag","" ,0 },
                        { "srifle_DMR_05_MRCO_F","" ,0 },
                        { "10Rnd_93x64_DMR_05_Mag","" ,0 },

        };
    };
    //Cop Shops
    class cop_scopes {
        name = "Altis Police Scope Shop";
        side = "cop";
        license = "";
        level = 0;
        msg = "";
        items[] = {
                        { "muzzle_snds_H","" ,0 },
                        { "muzzle_snds_L","" ,0 },
                        { "muzzle_snds_M","" ,0 },
                        { "muzzle_snds_B","" ,0 },
                        { "muzzle_snds_H_MG","" ,0 },
                        { "muzzle_snds_H_SW","" ,0 },
                        { "optic_Arco","" ,0 },
                        { "optic_Hamr","" ,0 },
                        { "optic_ACO_grn","" ,0 },
                        { "optic_Aco_smg","" ,0 },
                        { "optic_Holosight","" ,0 },
                        { "optic_SOS","" ,0 },
                        { "optic_MRCO","" ,0 },
                        { "optic_NVS","" ,0 },
                        { "optic_Nightstalker","" ,0 },

        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 0 },
			{ "Binocular", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "Medikit", "", 0 },
			{ "NVGoggles", "", 0 },
			{ "B_FieldPack_ocamo", "", 0 }
        };
    };

    class pmc_assault {
        name = "PMC STORE";
        side = "civ";
        license = "pmc";
        level = -1;
        msg = "";
        items[] = {
                        { "arifle_TRG20_F","" ,200000 }, //assault
                        { "30Rnd_556x45_Stanag","" ,5000 },
                        { "30Rnd_556x45_Stanag_Tracer_Red","" ,7500 },
                        { "30Rnd_556x45_Stanag_Tracer_Green","" ,7500 },
                        { "30Rnd_556x45_Stanag_Tracer_Yellow","" ,7500 },
                        { "srifle_DMR_01_F","" ,350000 },
                        { "10Rnd_762x51_Mag","" ,5000 },
                        { "srifle_EBR_F","" ,350000 },
                        { "10Rnd_762x51_Mag","" ,5000 },
                        { "20Rnd_762x51_Mag","" ,5000 },
                        { "arifle_Mk20_F","" ,200000 },
                        { "arifle_Mk20_GL_F","" ,200000 },
                        { "30Rnd_556x45_Stanag","" ,5000 },
                        { "30Rnd_556x45_Stanag_Tracer_Red","" ,7500 },
                        { "30Rnd_556x45_Stanag_Tracer_Green","" ,7500 },
                        { "30Rnd_556x45_Stanag_Tracer_Yellow","" ,7500 },
                        { "arifle_Katiba_C_F","" ,300000 },
                        { "30Rnd_65x39_caseless_green","" ,5000 },
                        { "30Rnd_65x39_caseless_green_mag_Tracer","" ,7500 },
                        { "arifle_MX_F","" ,400000 },
                        { "arifle_MXC_F","" ,400000 },
                        { "arifle_MXC_Black_F","" ,400000 },
                        { "30Rnd_65x39_caseless_mag","" ,5000 },
                        { "30Rnd_65x39_caseless_mag_Tracer","" ,7500 }
                        
        };
    };

    class pmc_attachements {
        name = "PMC STORE";
        side = "civ";
        license = "pmc";
        level = -1;
        msg = "";
        items[] = {
                        { "acc_flashlight","" ,10000 }, //attach+ments
                        { "acc_pointer_IR","" ,10000 },
                        { "optic_Aco","" ,10000 },
                        { "optic_ACO_grn","" ,10000 },
                        { "optic_ACO_grn_smg","" ,10000 },
                        { "optic_Aco_smg","" ,10000 },
                        { "optic_Arco","" ,10000 },
                        { "optic_Hamr","" ,10000 },
                        { "optic_Holosight","" ,10000 },
                        { "optic_Holosight_smg","" ,10000 },
                        { "optic_MRCO","" ,10000 },
                        { "optic_Nightstalker","" ,10000 },
                        { "optic_NVS","" ,10000 },
                        { "optic_SOS","" ,10000 },
                        { "optic_tws","" ,10000 },
                        { "optic_tws_mg","" ,10000 },
                        { "muzzle_snds_acp","" ,10000 },
                        { "muzzle_snds_B","" ,10000 },
                        { "muzzle_snds_H","" ,10000 },
                        { "muzzle_snds_H_MG","" ,10000 },
                        { "muzzle_snds_L","" ,10000 },
                        { "muzzle_snds_M","" ,10000 },
                        { "NVGoggles_OPFOR","" ,2000 },
                        { "Rangefinder","" ,1000 },
                        { "ItemMap","" ,1000 },
                        { "ItemGPS","" ,1000 }      
        };
    };
    class pmc_sniper {
        name = "PMC STORE";
        side = "civ";
        license = "pmc";
        level = -1;
        msg = "";
        items[] = {
                        { "srifle_GM6_F","" ,2000000 }, //sniper
                        { "5Rnd_127x108_Mag","" ,1000 },
                        { "5Rnd_127x108_APDS_Mag","" ,1000 },
                        { "srifle_LRR_F","" ,1000000 },
                        { "7Rnd_408_Mag","" ,1000 }
        };
    };
    class pmc_sub {
        name = "PMC STORE";
        side = "civ";
        license = "pmc";
        level = -1;
        msg = "";
        items[] = {
                        { "SMG_01_F","" ,200000 }, // Sub Machine Gun
                        { "30Rnd_45ACP_Mag_SMG_01","" ,2500 },
                        { "30Rnd_45ACP_Mag_SMG_01_tracer_green","" ,5000 },
                        { "SMG_02_F","" ,200000 },
                        { "30Rnd_9x21_Mag","" ,2500 }
        };
    };
    class pmc_lmg {
        name = "PMC STORE";
        side = "civ";
        license = "pmc";
        level = -1;
        msg = "";
        items[] = {
                        { "LMG_Mk200_F","" ,100000 }, //lmg
                        { "200Rnd_65x39_cased_Box","" ,7500 },
                        { "200Rnd_65x39_cased_Box_Tracer","" ,10000 },
                        { "LMG_Zafir_F","" ,1000000 },
                        { "150Rnd_762x51_Box","" ,7500 },
                        { "150Rnd_762x51_Box_Tracer","" ,5000 }
        };
    };
};
