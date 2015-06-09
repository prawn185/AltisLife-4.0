
/*
file: fn_captureArea.sqf
Author: Hammerite
Description:Allows players to capture areas using addAction on a object. Places a marker on the map with zone and who captured the area. Object needs to be named accordinly to prevent bugs acroos multiple captures. Works well with fn_liberateArea.sqf
*/
//this addAction["capture","captureArea.sqf"];

//[the objected that the addaction is assigned to ,  the one activting it, bla bla bla]



private["_gangName"];
//_cops = {alive _x && side _x == WEST} count allUnits;

_active = 0;
_flag = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_flagName = _flag;
_group = _flag getVariable ["gangOwner",grpNull];
_gangName = _group getVariable ["gang_name",""];
_playerName = name player;
_funds = 30000;
_maxPaychecks = 20;

_pos = getpos _flag;
_markerAreaName = (str _flagName) + "AreaMarker";
_markerTextName = (str _flagName) + "TextMarker";
_time = 30;
_timeText = format ["You are now capturing %1. Hold it for another %2 seconds.",_flagName, _time];
_textMarkerText = format ["%1 has captured %2.",(group player) getVariable "gang_name", _flagName];
_liberateArea = format ["Liberate %1", _flagName];



if(side player != civilian) exitWith { hint "You can't capture this." };
//if(isNil {grpPlayer getVariable "gang_name"}) exitWith {titleText[localize "STR_GNOTF_CreateGang","PLAIN"];};
//if(_group == grpPlayer) exitWith {titleText[localize "STR_GNOTF_Controlled","PLAIN"]};

private["_exit"];
_exit = false;

deleteMarker _markerAreaName;
deleteMarker _markerTextName;

while {_time > 0} do {
	_time = _time - 1;
	_timeText = format ["You are now capturing %1. Hold it for another %2 seconds.",_flagName, _time];
	hint str _timeText;
	sleep 1;
	if !(alive player) exitWith {};
	if(player distance _flag > 20) exitWith {
		hint "You need to stay near to the flag to capture the area...";
        _exit = true;
	};
};
hint "";
if (!_exit) then {

_markerArea = createMarker [_markerAreaName, _pos];
_markerAreaName setMarkerColor "ColorRed";
_markerAreaName setMarkerShape "ELLIPSE";
_markerAreaName setMarkerSize [400, 400];

_markerText = createMarker [_markerTextName, _pos];

_markerTextName setMarkerType "mil_warning";
_markerTextName setMarkerColor "ColorBlack";
_markerTextName setMarkerText (str _textMarkerText);
_active = 1;


[[0,"STR_capturedArea",true,[name player,(group player) getVariable "gang_name",_flagName]],"life_fnc_broadcast",true,false] call life_fnc_MP;
};


while {_active < _maxPaychecks} do {
  _active = _active + 1;
  life_cash = life_cash + _funds;
  sleep 1200;

};
