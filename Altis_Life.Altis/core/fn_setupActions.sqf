#include <macro.h>
/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && ((animationState cursorTarget == "Incapacitated") OR (animationState cursorTarget == "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon")) && !(cursorTarget GVAR["robbed",FALSE]) ']];
		
		//punch in balls
		life_actions = life_actions + [player addAction["Punch Balls",life_fnc_punchBallsAction,"",0,false,false,"",'
        !isNull cursorTarget && player distance cursorTarget < 5 && isPlayer cursorTarget && animationState cursorTarget in ["Incapacitated","amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon"]']];

	};
	case west:
	{
		//Ability to Remove Rebel Walls
		life_action_rebwallremove = player addAction[localize "STR_rebwall_Pack",life_fnc_rebwallremove,"",0,false,false,"",
		' _rebwall = nearestObjects[getPos player,["Land_Mil_WallBig_4m_F"],8] select 0; !isNil "_rebwall" && !isNil {(_rebwall getVariable "item")}'];
		
		//Ability to Remove Rebel Towers
		life_action_miltowerremove = player addAction[localize "STR_miltower_Pack",life_fnc_miltowerremove,"",0,false,false,"",
		' _miltower = nearestObjects[getPos player,["Land_Cargo_Patrol_V2_F"],8] select 0; !isNil "_miltower" && !isNil {(_miltower getVariable "item")}'];
	};
};
