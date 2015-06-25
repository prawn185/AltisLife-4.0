
/*
file: fn_captureArea.sqf
Author: Hammerite
Description:Allows players to capture areas using addAction on a object. Places a marker on the map with zone and who captured the area. Object needs to be named accordinly to prevent bugs acroos multiple captures. Works well with fn_liberateArea.sqf
*/
//this addAction["capture","captureArea.sqf"];

//[the objected that the addaction is assigned to ,  the one activting it, bla bla bla]


private["_gangName","_cops","_exit","_timeCapture","_timeCapture"];

// variable Presets.

flagObj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
flagName = flagObj;
timeCapture = 300;
_firstHint = 1;

_active = 0;
_group = flagObj getVariable ["gangOwner",grpNull];
 gangName = (group player) getVariable "gang_name";
_playerName = name player;
_funds = 20000;
_maxPaychecks = 20;
_pos = getpos flagObj;
_markerAreaName = (str flagName) + "AreaMarker";
_markerTextName = (str flagName) + "TextMarker";
_timeText = format ["You are now capturing %1. Hold it for another %2 seconds.",flagName, timeCapture];
_textMarkerText = format ["%1 has captured %2.",(group player) getVariable "gang_name", flagName];
_liberateArea = format ["Liberate %1", flagName];



//_-----------------------------------------------------
// prechecks.
//-------------------------------------------------------

// check for cops.
_cops = 0;
{if(alive _x && side _x == WEST)then{_cops = _cops + 1 };}forEach playableUnits; 
if(_cops < 1)exitWith{hint "You need at least 2 cops online to capture this!";};
// check if player has a weapon.
if (currentWeapon player == "")exitWith{hint"You need a weapon if you want to capture this!";};

if(isNil {(group player) getVariable "gang_name"}) exitWith {titleText[localize "STR_GNOTF_CreateGang","PLAIN"];};
// if you arent a civilian, you should not missuse your power to supress and dictate an area
if(side player != civilian) exitWith { hint "You can't capture this." };

// Dou you have a groop that has a groopname ? 	

if(((group player) getVariable "gang_name") == "")exitWith{hint "You must create a gang first.";};

if(_group == group player) exitWith {titleText[localize "STR_GNOTF_Controlled","PLAIN"]};

// lets check for the coolDown;
if(cooldown == 1)then{
	
	hint "Someone has recently captured this, please wait a while before trying again.";
};

// spawn a counter and the moment this returns a value our waituntil will be done.
While{timeCapture > 0} do {
		timeCapture = timeCapture - 1;
		_timeText = format ["You are now capturing %1. Hold it for another %2 seconds.",flagName, timeCapture];
		hint str _timeText;
		publicVariable "cooldown";
		cooldown = 1;
		sleep 1;
		if (_firstHint == 1) then { _firstHint = 0; [] call life_fnc_captureBroadcast;};
		if !(alive player) exitWith {_exit = true; cooldown = 0;};
		if(player distance flagObj > 50) exitWith {
			hint "You need to stay near to the flag to capture the area...";
	        _exit = true;
	        publicVariable "cooldown";
			cooldown = 0;
		};
		_exit = false;
};
hint "";


//exit if something went wrong.   ehem someone fucked up xD
if (!_exit) then {
publicVariable "cooldown";
cooldown = 1;

// delete the old markers
deleteMarker _markerAreaName;
deleteMarker _markerTextName;

// create new markers
_markerArea = createMarker [_markerAreaName, _pos];
_markerAreaName setMarkerColor "ColorRed";
_markerAreaName setMarkerShape "ELLIPSE";
_markerAreaName setMarkerSize [400, 400];

_markerText = createMarker [_markerTextName, _pos];

_markerTextName setMarkerType "mil_warning";
_markerTextName setMarkerColor "ColorBlack";
_markerTextName setMarkerText (str _textMarkerText);
_active = 1;



[gangName, flagName] call life_fnc_captureBroadcast2;


};

while {_active < _maxPaychecks} do {
  _active = _active + 1;
  life_cash = life_cash + _funds;
  sleep 1200;

};
sleep 1800;
publicVariable "cooldown";
cooldown = 0;