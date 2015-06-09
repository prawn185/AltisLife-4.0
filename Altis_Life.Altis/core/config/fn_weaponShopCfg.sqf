#include <macro.h>
/*
	File: fn_weaponShopCfg.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Master configuration file for the weapon shops.

	Return:
	String: Close the menu
	Array:
	[Shop Name,
	[ //Array of items to add to the store
		[classname,Custom Name (set nil for default),price]
	]]
*/
private["_shop"];
_shop = [_this,0,"",[""]] call BIS_fnc_param;
if(_shop == "") exitWith {closeDialog 0}; //Bad shop type passed.

switch(_shop) do {
	case "cop_basic": {
		switch(true) do {
			case (playerSide != west): {"You are not a cop!"};
			default {
				["Altis Cop Shop",
					[
						["arifle_sdar_F","Taser Rifle",20000],
						["hgun_P07_snds_F","Stun Pistol",2000],
						["hgun_P07_F",nil,7500],
						["HandGrenade_Stone","Flashbang",1700],
						["Binocular",nil,150],
						["ItemGPS",nil,100],
						["ToolKit",nil,250],
						["muzzle_snds_L",nil,650],
						["FirstAidKit",nil,150],
						["Medikit",nil,1000],
						["NVGoggles",nil,2000],
						["16Rnd_9x21_Mag",nil,50],
						["20Rnd_556x45_UW_mag","Taser Rifle Magazine",125],
						["CUP_7Rnd_45ACP_1911",nil,120],
						["CUP_hgun_Colt1911",nil,1200]
					]
				];
			};
		};
	};

	case "med_basic": {
		switch (true) do {
			case (playerSide != independent): {"You are not an EMS Medic"};
			default {
				["Hospital EMS Shop",
					[
						["ItemGPS",nil,100],
						["Binocular",nil,150],
						["ToolKit",nil,250],
						["FirstAidKit",nil,150],
						["Medikit",nil,500],
						["NVGoggles",nil,1200],
						["B_FieldPack_ocamo",nil,3000]
					]
				];
			};
		};
	};

	case "cop_patrol":
	{
		switch(true) do
		{
			case (playerSide != west): {"You are not a cop!"};
			case (FETCH_CONST(life_coplevel) < 2): {"You are not at a patrol officer rank!"};
			default
			{
				["Altis Patrol Officer Shop",
					[
						["arifle_MX_F",nil,35000],
						["SMG_02_ACO_F",nil,30000],
						["HandGrenade_Stone","Flashbang",1700],
						["MineDetector",nil,1000],
						["acc_flashlight",nil,750],
						["optic_Holosight",nil,1200],
						["optic_Arco",nil,2500],
						["muzzle_snds_H",nil,2750],
						["30Rnd_65x39_caseless_mag",nil,130],
						["30Rnd_9x21_Mag",nil,250],
						["CUP_7Rnd_45ACP_1911",nil,120],
						["CUP_hgun_Colt1911",nil,1200]
					]
				];
			};
		};
	};

	case "cop_sergeant":
	{
		switch(true) do
		{
			case (playerSide != west): {"You are not a cop!"};
			case (FETCH_CONST(life_coplevel) < 3): {"You are not at a sergeant rank!"};
			default
			{
				["Altis Sergeant Officer Shop",
					[
						["SMG_02_ACO_F",nil,15000],
						["hgun_ACPC2_F",nil,17500],
						["HandGrenade_Stone","Flashbang",1700],
						["arifle_MXC_F",nil,30000],
						["optic_Arco",nil,2500],
						["muzzle_snds_H",nil,2750],
						["30Rnd_65x39_caseless_mag",nil,100],
						["30Rnd_9x21_Mag",nil,60],
						["9Rnd_45ACP_Mag",nil,200],
						["CUP_30Rnd_556x45_Stanag",nil,100],
						["CUP_arifle_M4A1_black",nil,12000],
						["CUP_muzzle_snds_M16",nil,12000],
						["CUP_acc_ANPEQ_2",nil,1200],
						["CUP_optic_HoloBlack",nil,1000],
						["CUP_15Rnd_9x19_M9",nil,100],
						["CUP_hgun_M9",nil,1200],
						["CUP_15Rnd_9x19_M9",nil,100],
						["CUP_hgun_M9",nil,12000],
						["CUP_7Rnd_45ACP_1911",nil,120],
						["CUP_hgun_Colt1911",nil,1200]
					]
				];
			};
		};
	};

	case "rebel":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_rebel): {"You don't have a Rebel training license!"};
			default
			{
				["Mohammed's Jihadi Shop",
					[
						["arifle_TRG20_F",nil,25000],
						["arifle_Katiba_F",nil,30000],
						["srifle_DMR_01_F",nil,50000],
						["arifle_SDAR_F",nil,20000],
						["optic_ACO_grn",nil,3500],
						["optic_Holosight",nil,3600],
						["acc_flashlight",nil,1000],
						["optic_Hamr",nil,7500],
						["30Rnd_9x21_Mag",nil,200],
						["20Rnd_556x45_UW_mag",nil,125],
						["30Rnd_556x45_Stanag",nil,300],
						["10Rnd_762x51_Mag",nil,500],
						["30Rnd_65x39_caseless_green",nil,275]
					]
				];
			};
		};
	};
	case "security":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_security): {"You don't have a Security License!"};
			default
			{
				["Security Officer's locker",
					[

						["optic_ACO_grn",nil,3500],
						["optic_Holosight",nil,3600],
						["acc_flashlight",nil,1000],
						["optic_Hamr",nil,7500],
						["CUP_30Rnd_9x19_MP5",nil,40],
						["CUP_30Rnd_9x19_UZI",nil,40],
						["CUP_30Rnd_9x19_MP5",nil,40],
						["CUP_smg_MP5SD6",nil,4000],
						["CUP_hgun_MicroUzi",nil,4000]
					]
				];
			};
		};
	};

	case "gun":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_gun): {"You don't have a Firearms license!"};
			default
			{
				["Billy Joe's Firearms",
					[
						["hgun_Rook40_F",nil,6500],
						["hgun_Pistol_heavy_02_F",nil,9850],
						["hgun_ACPC2_F",nil,11500],
						["hgun_PDW2000_F",nil,20000],
						["optic_ACO_grn_smg",nil,2500],
						["V_Rangemaster_belt",nil,4900],
						["16Rnd_9x21_Mag",nil,25],
						["9Rnd_45ACP_Mag",nil,45],
						["6Rnd_45ACP_Cylinder",nil,50],
						["30Rnd_9x21_Mag",nil,75],
						["CUP_hgun_Compact",nil,15000],
						["CUP_hgun_MicroUzi",nil,15000],
						["CUP_hgun_SA61",nil,15000],
						["asdg_hgun_Pistol_heavy_01_F",nil,150],
						["CUP_30Rnd_9x19_UZI",nil,15000],
						["CUP_20Rnd_B_765x17_Ball_M",nil,150],
						["11Rnd_45ACP_Mag",nil,150],
						["CUP_10Rnd_9x19_Compact",nil,100]
					]
				];
			};
		};
	};

	case "gang":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			default
			{
				["Hideout Armament",
					[
						["hgun_Rook40_F",nil,1500],
						["hgun_Pistol_heavy_02_F",nil,2500],
						["hgun_ACPC2_F",nil,4500],
						["hgun_PDW2000_F",nil,9500],
						["optic_ACO_grn_smg",nil,950],
						["V_Rangemaster_belt",nil,1900],
						["16Rnd_9x21_Mag",nil,25],
						["9Rnd_45ACP_Mag",nil,45],
						["6Rnd_45ACP_Cylinder",nil,50],
						["30Rnd_9x21_Mag",nil,75]
					]
				];
			};
		};
	};
	case "pmc":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			default
			{
				["Hideout Armament",
					[
						["hgun_Rook40_F",nil,1500],
						["hgun_Pistol_heavy_02_F",nil,2500],
						["hgun_ACPC2_F",nil,4500],
						["hgun_PDW2000_F",nil,9500],
						["optic_ACO_grn_smg",nil,950],
						["V_Rangemaster_belt",nil,1900],
						["16Rnd_9x21_Mag",nil,25],
						["9Rnd_45ACP_Mag",nil,45],
						["6Rnd_45ACP_Cylinder",nil,50],
						["30Rnd_9x21_Mag",nil,75],
						["PMC_m249",nil,9000],
						["PMC_m4",nil,9000],
						["CUP_arifle_AK74",nil,9000],
						["CUP_arifle_AKS_Gold",nil,500000],
						["CUP_arifle_AKS74U",nil,9000],
						["CUP_srifle_CZ550",nil,9000],
						["CUP_arifle_CZ805_A1",nil,9000],
						["CUP_arifle_FNFAL",nil,9000],
						["CUP_arifle_G36A",nil,9000],
						["CUP_srifle_LeeEnfield",nil,9000],
						["CUP_sgun_M1014",nil,9000],
						["CUP_srifle_DMR",nil,9000],
						["CUP_arifle_M16A2",nil,9000],
						["CUP_arifle_Mk17_CQC",nil,9000],
						["CUP_smg_MP5SD6",nil,9000],
						["hgun_PDW2000_F",nil,9000],
						["CUP_lmg_PKM",nil,9000],
						["CUP_arifle_XM8_Railed",nil,9000],
						["CUP_arifle_XM8_Carbine_GL",nil,9000],
						["CUP_arifle_Sa58P_v2",nil,9000],
						["CUP_srifle_SVD_des_ghillie_pso",nil,9000],
						["CUP_sgun_Saiga12K",nil,9000],
						["arifle_MX_Black_F",nil,9000],
						["arifle_MXM_Black_F",nil,9000],
						["PMC_m249_mag",nil,90],
						["30Rnd_556x45_Stanag",nil,90],
						["CUP_30Rnd_545x39_AK_M",nil,90],
						["CUP_30Rnd_762x39_AK47_M",nil,90],
						["CUP_30Rnd_545x39_AK_M",nil,90],
						["CUP_5x_22_LR_17_HMR_M",nil,90],
						["CUP_30Rnd_556x45_Stanag",nil,90],
						["CUP_20Rnd_762x51_FNFAL_M",nil,90],
						["CUP_30Rnd_556x45_G36",nil,90],
						["CUP_10x_303_M",nil,90],
						["CUP_8Rnd_B_Beneli_74Slug",nil,90],
						["CUP_20Rnd_762x51_DMR",nil,90],
						["CUP_30Rnd_556x45_Stanag",nil,90],
						["CUP_20Rnd_762x51_B_SCAR",nil,90],
						["CUP_30Rnd_9x19_MP5",nil,90],
						["30Rnd_9x21_Mag",nil,90],
						["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",nil,90],
						["CUP_30Rnd_556x45_Stanag",nil,90],
						["CUP_30Rnd_556x45_Stanag",nil,90],
						["CUP_30Rnd_Sa58_M_TracerG",nil,90],
						["CUP_10Rnd_762x54_SVD_M",nil,90],
						["CUP_8Rnd_B_Saiga12_74Slug_M",nil,90],
						["30Rnd_65x39_caseless_mag",nil,90],
						["30Rnd_65x39_caseless_mag",nil,90]
                    ]
				];
			};
		};
	};
	case "genstore":
	{
		["Altis General Store",
			[
				["Binocular",nil,150],
				["ItemGPS",nil,100],
				["ToolKit",nil,250],
				["FirstAidKit",nil,150],
				["NVGoggles",nil,2000],
				["Chemlight_red",nil,300],
				["Chemlight_yellow",nil,300],
				["Chemlight_green",nil,300],
				["Chemlight_blue",nil,300]
			]
		];
	};
};
