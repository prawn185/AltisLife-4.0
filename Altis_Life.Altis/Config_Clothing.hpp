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
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "rds_uniform_assistant", "", 1100, { "", "", -1 } },
			{ "rds_uniform_citizen1", "", 1100, { "", "", -1 } },
			{ "rds_uniform_citizen3", "", 1100, { "", "", -1 } },
			{ "rds_uniform_doctor", "", 1100, { "", "", -1 } },
			{ "rds_uniform_Functionary1", "", 1100, { "", "", -1 } },
			{ "rds_uniform_Functionary2", "", 1100, { "", "", -1 } },
			{ "U_BG_Guerilla2_1", "", 1100, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "", 1100, { "", "", -1 } },
			{ "U_Marshal", "", 1100, { "", "", -1 } },
			{ "sab_CU_OSCE_Clothing", "", 1100, { "", "", -1 } },
			{ "rds_uniform_Policeman", "", 1100, { "", "", -1 } },
			{ "rds_uniform_priest", "", 1100, { "", "", -1 } },
			{ "rds_uniform_Profiteer1", "", 1100, { "", "", -1 } },
			{ "rds_uniform_Profiteer2", "", 1100, { "", "", -1 } },
			{ "rds_uniform_schoolteacher", "", 1100, { "", "", -1 } },
			{ "demian2435_criminal_shirt", "", 1100, { "", "", -1 } },
			{ "sab_CU_TF_Clothing", "", 1100, { "", "", -1 } },
			{ "rds_uniform_Villager1", "", 1100, { "", "", -1 } },
			{ "rds_uniform_Woodlander4", "", 1100, { "", "", -1 } },
			{ "rds_uniform_Worker4", "", 1100, { "", "", -1 } },
			{ "U_PMC_RedPlaidShirt_DenimCords", "", 1100, { "", "", -1 } },
			{ "U_PMC_BluePlaidShirt_BeigeCords", "", 1100, { "", "", -1 } },
			{ "sab_CU_BS_Clothing", "", 1100, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "", 1100, { "", "", -1 } },
			{ "U_C_Journalist", "", 1100, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "police_biker_uniform", "Cop Uniform", 25, { "", "", -1 } },
			{ "police_man_uniform", "", 350, { "life_coplevel", "SCALAR", 1 } },
			{ "police_man_uniform", "", 350, { "life_coplevel", "SCALAR", 2 } },
			{ "max_sergeant_uniform", "", 350, { "life_coplevel", "SCALAR", 4 } },
			{ "sea_police_uniform", "", 350, { "life_coplevel", "SCALAR", 5 } },
			{ "police_officer_uniform", "", 350, { "life_coplevel", "SCALAR", 6 } },
			{ "swat_unit_uniform", "", 350, { "life_coplevel", "SCALAR", 5 } },
			{ "swat_officer_uniform", "", 350, { "life_coplevel", "SCALAR", 6 } },
			
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "demian2435_swat_leader_helmet", "", 75, { "life_coplevel", "SCALAR", 6 } },
			{ "police_swat_cap", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "rds_police_cap", "", 100, { "life_coplevel", "SCALAR", 2 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "demian2435_swat_leader_vest", "", 800, { "life_coplevel", "SCALAR", 5 } },
			{ "demian2435_police_vest", "", 1500, { "life_coplevel", "SCALAR", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "PMC_B_Kitbag_blk", "", 800, { "", "", -1 } },
			
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
	class pmc {
		title = "pmc";
		license = "pmc";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_PMC_GTShirt_DJeans", "", 250, { "", "", -1 } },
			{ "U_PMC_GTShirt_SJeans", "", 250, { "", "", -1 } },
			{ "U_PMC_BlkTShirt_DJeans", "", 250, { "", "", -1 } },
			{ "U_PMC_BlkTShirt_SJeans", "", 250, { "", "", -1 } },
			{ "U_PMC_BluTShirt_SJeans", "", 250, { "", "", -1 } },
			{ "U_PMC_WTShirt_DJeans", "", 250, { "", "", -1 } },
			{ "U_PMC_BluePlaidShirt_BeigeCords", "", 250, { "", "", -1 } },
			{ "U_PMC_RedPlaidShirt_DenimCords", "", 250, { "", "", -1 } },
			{ "U_PMC_BlackPoloShirt_BeigeCords", "", 250, { "", "", -1 } },
			{ "U_PMC_BluPolo_BgPants", "", 250, { "", "", -1 } },
			{ "U_PMC_BgPolo_GrnPants", "", 250, { "", "", -1 } },
			{ "U_PMC_BlckPolo_BgPants", "", 250, { "", "", -1 } },
			{ "U_PMC_BlckPolo_BluPants", "", 250, { "", "", -1 } },
			{ "U_PMC_BluPolo_GrnPants", "", 250, { "", "", -1 } },
			{ "U_PMC_BrnPolo_BgPants", "", 250, { "", "", -1 } },
			{ "U_PMC_BrnPolo_BluPants", "", 250, { "", "", -1 } },
			{ "U_PMC_GrnPolo_BgPants", "", 250, { "", "", -1 } },
			{ "U_PMC_WhtPolo_BgPants", "", 250, { "", "", -1 } },
			{ "U_PMC_WhtPolo_BluPants", "", 250, { "", "", -1 } },
			{ "U_PMC_WhtPolo_GrnPants", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_BSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_BSGPSB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_BSSPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_BSSPSB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_GSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_GSSPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_IndPBSBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_SSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_SSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_SSGPSB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckDBS_GPSB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckLB_GPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckLR_SPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckP_BPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_BSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_BSGPSB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_BSSPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_BSSPSB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_GSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_GSSPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_IndPBSBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_SSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_SSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_SSGPSB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_ChckDBS_GPSB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_ChckLB_GPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_ChckLR_SPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_ChckP_BPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_BSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_BSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_BSTPTB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_GSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_GSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_GSTPTB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_TSTPTB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_TSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformLS_TSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_BSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_BSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_BSTPTB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_GSGPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_GSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_GSTPTB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSTPTB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSBPBB", "", 250, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSGPBB", "", 250, { "", "", -1 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_pmc", "", 135, { "", "", -1 } },
			{ "H_Cap_tan_pmc", "", 135, { "", "", -1 } },
			{ "H_Cap_pmc_headphones", "", 135, { "", "", -1 } },
			{ "H_Capbw_pmc", "", 135, { "", "", -1 } },
			{ "H_Capbw_tan_pmc", "", 135, { "", "", -1 } },
			{ "H_Booniehat_rgr", "", 135, { "", "", -1 } },
			{ "H_Booniehat_GCAMO", "", 135, { "", "", -1 } },
			{ "H_Booniehat_DMARPAT", "", 135, { "", "", -1 } },
			{ "H_HelmetB_plain_blk", "", 135, { "", "", -1 } },
			{ "H_PilotHelmetHeli_PMC", "", 135, { "", "", -1 } }

		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "Pomi_Goggles", "", 25, { "", "", -1 } },
			{ "Pomi_Goggles_Grn", "", 25, { "", "", -1 } },
			{ "Pomi_Goggles_Snd", "", 25, { "", "", -1 } }


		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_PlateCarrier1_PMC_rgr", "", 800, { "", "", -1 } },
			{ "V_PlateCarrier1_PMC_blk", "", 800, { "", "", -1 } },
			{ "V_PlateCarrier1_PMC_marpat", "", 800, { "", "", -1 } },
			{ "V_PlateCarrier1_PMC_khki", "", 800, { "", "", -1 } },
			{ "V_PlateCarrier1_PMC_coyote", "", 800, { "", "", -1 } },
			{ "V_PlateCarrierInd_PMC_blk", "", 800, { "", "", -1 } },
			{ "V_PlateCarrierInd_PMC_grn", "", 800, { "", "", -1 } },
			{ "V_TacVest_darkblck", "", 800, { "", "", -1 } }

		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
		    { "B_Bergen_rgr_Exp", "", 800, { "", "", -1 } },
			{ "B_Kitbag_blk_Medic", "", 800, { "", "", -1 } },
			{ "PMC_B_Kitbag_blk", "", 800, { "", "", -1 } },
			{ "PMC_B_Carryall_blk", "", 800, { "", "", -1 } },
			{ "PMC_AssaultPack_Tan", "", 800, { "", "", -1 } },
			{ "PMC_AssaultPack_Blk", "", 800, { "", "", -1 } },
			{ "PMC_AssaultPack_Rgr", "", 800, { "", "", -1 } }

		};
	};

    class medic {
		title = "Medic";
		license = "";
		side = "med";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "sab_CU_Medic_Clothing", "", 2000, { "", "", -1 } }


		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "sab_CU_Medic_Cap", 0, { "", "", -1} }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
			
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "sab_CU_Medic_Vest", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "CUP_B_AssaultPack_ACU", 200, { "", "", -1 } }
		};
	};
	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
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
	class security {
		title = "Security Clothing";
		license = "security";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "security_uniform", "", 3500, { "", "", -1 } },
			{ "rds_uniform_Functionary1", "", 3500, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "security_cap", "", 1000, { "", "", -1 } },
			
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