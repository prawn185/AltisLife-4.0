

/*
file: fn_liberateArea.sqf
Author: Hammerite
Description:Allows players to liberate areas using addAction on a object. 

this addAction["capture","fn_liberateArea.sqf"];
[the objected that the addaction is assigned to ,  the one activting it, bla bla bla]
*/

_flag = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_flagName = _flag;
_group = groupId (group player);

_pos = getpos _flag;
_markerAreaName = (str _flagName) + "AreaMarker";
_markerTextName = (str _flagName) + "TextMarker";
_time = 10;
_timeText = format ["You are now liberating %1. Hold it for another %2 seconds.",_flagName, _time];
_markerText = format ["%1 and his gang has captured %2.",_group, _flagName];
_CaptureArea = format ["Capture %1", _flagName];
_message = format["%1 has been liberated.", _flagName];

private["_exit"];
_exit = false;

if (getMarkerColor _markerAreaName == "") then {
	hint "This area hasn't been captured yet";
	_exit = true;
};
if (_exit) exitWith{};
//if(side player != civilian) exitWith { hint "You can't capture this." };
//if(isNil {grpPlayer getVariable "gang_name"}) exitWith {titleText[localize "STR_GNOTF_CreateGang","PLAIN"];};
//if(_group == grpPlayer) exitWith {titleText[localize "STR_GNOTF_Controlled","PLAIN"]};



while {_time > 0} do {
	_time = _time - 1;
	_timeText = format ["You are now liberating %1. Hold it for another %2 seconds.",_flagName, _time];
	hint str _timeText;
	sleep 1;	
	if !(alive player) exitWith {};
	if(player distance _flag > 20) exitWith { 
		hint "You need to stay near to the flag to liberate the area...";
		sleep 1;
        _exit = true;
	};
};
hint "";

if (!_exit) then {

deleteMarker _markerAreaName;
deleteMarker _markerTextName;
[[3,_message],"life_fnc_broadcast",true,false] spawn life_fnc_MP;


};
