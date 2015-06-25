#define __GETC__(var) (call var)
private["_uniform","_backpack","_headgear"];

_uniform = uniform player; //Local variable short-cut for "Uniform Player"
_backpack = backpack player; //Local variable short-cut for "Backpack Player"
_headgear = headgear player; //local variable short-cut for "Headgear Player"

switch (playerSide) do {
	case west: {                     //Police
		switch(_uniform)do{
			case "U_Rangemaster":{
				switch(true)do{
					//case (license_cop_kavalaPD):{player setObjectTextureGlobal [0,"textures\cop\PoliceUniformK.jpg"];};
					
					default{player setObjectTextureGlobal [0,"textures\Clothing\cop\police_shirt.paa"];};
				};
			};
			case "U_B_CombatUniform_mcam":{
				switch(true)do{
				    case (license_cop_swat):{player setObjectTextureGlobal [0,"textures\Clothing\cop\swat_shirt.paa"];};
				
				};
			};
		};
	};
	case civilian: {
		switch(true)do{
			case (license_civ_Pmc):{    //PMC
				switch (_uniform) do{
					case "U_B_CombatUniform_mcam_vest":{player setObjectTextureGlobal [0,"textures\clothing\pmc\U_PMC_CombatUniform_SSBPBB.jpg"];};
					case "B_RangeMaster_F":{player setObjectTextureGlobal [0,"textures\clothing\pmc\U_PMC_RedPlaidShirt_DenimCords.jpg"];};
					case "U_I_CombatUniform_shortsleeve":{player setObjectTextureGlobal [0,"textures\clothing\pmc\PMCuniform.jpg"];};
					case "U_IG_leader":{player setObjectTextureGlobal [0,"textures\clothing\pmc\PMChero.jpg"];};
					
					default{};
				};
			};
//			case (license_civ_Terror):{   //TERRORIST
//				switch (_uniform) do{
//				    case "U_O_OfficerUniform_ocamo":{player setObjectTextureGlobal [0,"textures\isis\officer_hex_co.paa"];};
//	            };
//				switch (_backpack) do{
//					case "B_AssaultPack_rgr_Medic":{player setObjectTextureGlobal [0,"textures\isis\backpack2_compact_medic_rgr_co.paa"];};
//		        };
//				switch (_headgear) do{
//				    case "H_Shemag_olive":{player setObjectTextureGlobal [0,"textures\isis\h_shemag_olive_co.paa"];};
//				};
//			};
		};
	};
};

