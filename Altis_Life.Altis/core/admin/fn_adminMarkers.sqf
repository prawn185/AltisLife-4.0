#include <macro.h>
/*
	File: fn_adminMarkers.sqf
	Sourced from Lystics Player Markers Loop
*/
if(__GETC__(life_adminlevel) < 3) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};
life_markers = !life_markers;
if(life_markers) then {
	PlayerMarkers = [];
	FinishedLoop = false;
	[[0,format["%1 has put his markers on!",profileName]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
	hint localize "STR_ANOTF_MEnabled";
	while{life_markers} do {
		{
			if !(_x in allUnits) then {
				deleteMarkerLocal str _x;
			};
		} forEach PlayerMarkers;
		PlayerMarkers = [];
		{
			if(alive _x && isplayer _x) then {
				deleteMarkerLocal str _x;
				_pSee = createMarkerLocal [str _x,getPos _x];
				_pSee setMarkerTypeLocal "mil_triangle";
				_pSee setMarkerPosLocal getPos _x;
				_pSee setMarkerSizeLocal [1,1];
				_pSee setMarkerTextLocal format['%1',_x getVariable["realname",name _x]];
				_pSee setMarkerColorLocal ("ColorRed");
				PlayerMarkers = PlayerMarkers + [_x];
				

		
		}; 
		      
	} forEach allUnits;
	sleep 0.2;
};
FinishedLoop = true;
} else {
	[[0,format["%1 has put his markers off!",profileName]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
	if(isNil "FinishedLoop") exitWith {};
	hint localize "STR_ANOTF_MDisabled";
	waitUntil{FinishedLoop};
	{
		deleteMarkerLocal str _x;
	} forEach PlayerMarkers;	
};
