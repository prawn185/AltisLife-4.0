//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	File: fn_miltower.sqf                                                                                                               //
//	Author: Bryan "Tonic" Boardwine                                                                                                     //
//	Edited by Demigod                                                                                                                   //
//	Description: Originally; Deploys a Spike Strip.                                                                                     //
//	Currently; Deploys a Military Tower with a progress bar.                                                                            //
//  Disclaimer: If you like this script, you can take it. BUT, please give me credit for it :).                                         //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private["_position","_miltower","_upp","_ui","_progress","_pgText","_cP"];

if(!license_civ_rebel) exitWith {hint parseText format["<t color='#FA4F4F'><t size='1.2'>You need Rebel Training to build this structure. Purchase it from the Rebel Outpost."];}; 

if ((player distance (getMarkerPos "SafezoneSydney") < 300) OR (player distance (getMarkerPos "SafezoneMelbourne") < 300) OR (player distance (getMarkerPos "SafezoneBrisbane") < 300)) exitWith 
{
	hint parseText format["<t color='#FA4F4F'><t size='1.2'>You must be 300m outside all main towns to build a Military Tower."];
	[true,"miltower",1] call life_fnc_handleInv;
};

_miltower = "Land_Cargo_Patrol_V2_F" createVehicle [0,0,0];
_miltower attachTo[player,[0,4,5]];
_miltower setDir 90;
_miltower setVariable["item","miltower",true];

life_action_miltowerDeploy = player addAction[localize "STR_miltower_Place",{
if(!isNull life_miltower) then 
{
    if ((player distance (getMarkerPos "SafezoneSydney") < 300) OR (player distance (getMarkerPos "SafezoneMelbourne") < 300) OR (player distance (getMarkerPos "SafezoneBrisbane") < 300)) then 
	{
		detach life_miltower; 
		deleteVehicle life_miltower;
		[true,"miltower",1] call life_fnc_handleInv; 
		hint parseText format["<t color='#FA4F4F'><t size='1.2'>You must be 300m outside all main towns to build a Rebel Military Tower."];
    } else {
		detach life_miltower; 
		life_miltower = ObjNull;
		[false,"miltower",1] call life_fnc_handleInv;
	};
}; player removeAction life_action_miltowerDeploy; 
life_action_miltowerDeploy = nil;},"",999,false,false,"",'!isNull life_miltower'];

life_miltower = _miltower;
waitUntil {isNull life_miltower};
if(!isNil "life_action_miltowerDeploy") then {player removeAction life_action_miltowerDeploy;};
if(isNull _miltower) exitWith {life_miltower = ObjNull;};


life_action_inUse = true;
_upp = format[localize "STR_NOTF_constructing"];
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_miltower say3D "building";
				
while{true} do
{
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[[player,"AinvPknlMstpSnonWnonDnon_medic_1"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	sleep 0.10;
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
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false; deleteVehicle _miltower; [true,"miltower",1] call life_fnc_handleInv; };
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully Constructed a Rebel Military Tower!"];

_miltower setPos [(getPos _miltower select 0),(getPos _miltower select 1),0];
life_action_miltowerremove = player addAction[localize "STR_miltower_Pack",life_fnc_miltowerremove,"",0,false,false,"",
' _miltower = nearestObjects[getPos player,["Land_Cargo_Patrol_V2_F"],8] select 0; !isNil "_miltower" && !isNil {(_miltower getVariable "item")}'];
//[[3,"STR_ISTR_Item_Alert",true,[profileName]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
//[[_miltower],"TON_fnc_miltower",false,false] spawn life_fnc_MP; 