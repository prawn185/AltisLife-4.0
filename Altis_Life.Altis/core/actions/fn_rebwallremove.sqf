//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	File: fn_rebelwallremove.sqf                                                                                                        //
//	Author: Bryan "Tonic" Boardwine                                                                                                     //
//	Edited by Demigod                                                                                                                   //
//	Description: Originally; Packs up a deployed spike strip.                                                                           //
//	Currently; De-constructs a deployed Rebel Wall.                                                                                     //
//  Disclaimer: If you like this script, you can take it. BUT, please give me credit for it :).                                         //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private["_rebwall","_upp","_ui","_progress","_pgText","_cP","_rebel"];

//Civilian/Rebel
if (playerSide == civilian) then {
_rebel = "<t color='#FA4F4F'><t size='1.2'>You need Rebel Training to build this Structure. Purchase it from the Rebel Outpost.</t></t>";
if(!license_civ_rebel) exitWith {hint parseText _rebel;};
_rebwall = nearestObjects[getPos player,["Land_Mil_WallBig_4m_F"],8] select 0;
if(isNil "_rebwall") exitWith {};
life_interrupted = false;

if(([true,"rebwall",1] call life_fnc_handleInv)) then
	{
		life_action_inUse = true;
		_upp = format[localize "STR_NOTF_deconstructing"];
		disableSerialization;
		5 cutRsc ["life_progress","PLAIN"];
		_ui = uiNameSpace getVariable "life_progress";
		_progress = _ui displayCtrl 38201;
		_pgText = _ui displayCtrl 38202;
		_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
		_progress progressSetPosition 0.01;
		_cP = 0.01;
		
		while{true} do
		{
			if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
				[[player,"AinvPknlMstpSnonWnonDnon_medic_1"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
				player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
			};
			sleep 0.27;
			_cP = _cP + 0.01;
			_progress progressSetPosition _cP;
			_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
			if(_cP >= 1) exitWith {};
			if(!alive player) exitWith {};
			if(life_interrupted) exitWith {};
		};
		
		life_action_inUse = false;
		5 cutText ["","PLAIN"];
		player playActionNow "stop";
		if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
		//[[3,"STR_ISTR_Item_Alert",true,[profileName]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
		hint "You have successfully De-constructed a Rebel Wall";
		player removeAction life_action_rebwallremove;
		life_action_rebwallremove = nil;
		deleteVehicle _rebwall;
	};
	} else {

//Officer
_rebwall = nearestObjects[getPos player,["Land_Mil_WallBig_4m_F"],8] select 0;
if(isNil "_rebwall") exitWith {};
life_interrupted = false;

	life_action_inUse = true;
	_upp = format[localize "STR_NOTF_deconstructing"];
	disableSerialization;
	5 cutRsc ["life_progress","PLAIN"];
	_ui = uiNameSpace getVariable "life_progress";
	_progress = _ui displayCtrl 38201;
	_pgText = _ui displayCtrl 38202;
	_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
	_cP = 0.01;
	
	while{true} do
	{
		if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
			[[player,"AinvPknlMstpSnonWnonDnon_medic_1"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
			player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
		};
		sleep 0.27;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(!alive player) exitWith {};
		if(life_interrupted) exitWith {};
	};
	
	life_action_inUse = false;
	5 cutText ["","PLAIN"];
	player playActionNow "stop";
	if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
	//[[3,"STR_ISTR_Item_Alert",true,[profileName]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
	titleText ["You have successfully De-constructed a Rebel Wall, here's a $2,000 reward!","PLAIN"];
	life_straya = life_straya + 2000;
	//player removeAction life_action_rebwallremove;
	//life_action_rebwallremove = nil;
	deleteVehicle _rebwall;
}; 