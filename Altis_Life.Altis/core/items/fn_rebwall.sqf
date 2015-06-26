//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	File: fn_rebwall.sqf                                                                                                                //
//	Author: Bryan "Tonic" Boardwine                                                                                                     //
//	Edited by Demigod                                                                                                                   //
//	Description: Originally; Deploys a Spike Strip.                                                                                     //
//	Currently; Deploys a Rebel Wall with a progress bar.                                                                                //
//  Disclaimer: If you like this script, you can take it. BUT, please give me credit for it :).                                         //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private["_position","_rebwall","_upp","_ui","_progress","_pgText","_cP"];

if(!license_civ_rebel) exitWith {hint parseText format["<t color='#FA4F4F'><t size='1.2'>You need Rebel Training to build this structure. Purchase it from the Rebel Outpost."];}; 

if ((player distance (getMarkerPos "SafezoneSydney") < 300) OR (player distance (getMarkerPos "SafezoneMelbourne") < 300) OR (player distance (getMarkerPos "SafezoneBrisbane") < 300)) exitWith 
{
	hint parseText format["<t color='#FA4F4F'><t size='1.2'>You must be 300m outside all main towns to build a Rebel Wall."];
	[true,"rebwall",1] call life_fnc_handleInv;
};

_rebwall = "Land_Mil_WallBig_4m_F" createVehicle [0,0,0];
_rebwall attachTo[player,[0,2,3]];
_rebwall setVariable["item","rebwall",true];


life_action_rebwallDeploy = player addAction[localize "STR_rebwall_Place",{
if(!isNull life_rebwall) then 
{
    if ((player distance (getMarkerPos "SafezoneSydney") < 300) OR (player distance (getMarkerPos "SafezoneMelbourne") < 300) OR (player distance (getMarkerPos "SafezoneBrisbane") < 300)) then 
	{
		detach life_rebwall; 
		deleteVehicle life_rebwall;
		[true,"rebwall",1] call life_fnc_handleInv; 
		hint parseText format["<t color='#FA4F4F'><t size='1.2'>You must be 300m outside all main towns to build a Rebel Wall."];
    } else {
		detach life_rebwall; 
		life_rebwall = ObjNull;
		[false,"rebwall",1] call life_fnc_handleInv;
		};
}; player removeAction life_action_rebwallDeploy; 
life_action_rebwallDeploy = nil;},"",999,false,false,"",'!isNull life_rebwall'];


life_rebwall = _rebwall;
waitUntil {isNull life_rebwall};
if(!isNil "life_action_rebwallDeploy") then {player removeAction life_action_rebwallDeploy;};
if(isNull _rebwall) exitWith {life_rebwall = ObjNull;};


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
_rebwall say3D "building";

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
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false; deleteVehicle _rebwall; [true,"rebwall",1] call life_fnc_handleInv; };
hint parseText format["<t size='1.2'><t color='#38C40A'>You have successfully Constructed a Rebel Wall!"];

_rebwall setPos [(getPos _rebwall select 0),(getPos _rebwall select 1),0];
//[[3,"STR_ISTR_Item_Alert",true,[profileName]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
life_action_rebwallremove = player addAction[localize "STR_rebwall_Pack",life_fnc_rebwallremove,"",0,false,false,"",
' _rebwall = nearestObjects[getPos player,["Land_Mil_WallBig_4m_F"],8] select 0; !isNil "_rebwall" && !isNil {(_rebwall getVariable "item")}'];
//[[_rebwall],"TON_fnc_rebwall",false,false] spawn life_fnc_MP;