#include <macro.h>
/*
	File: fn_adminGodMode.sqf
	Author: Tobias 'Xetoxyc' Sittenauer
 
	Description: Enables God mode for Admin
*/

if(__GETC__(life_adminlevel) < 3) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};
 
if(life_god) then {
	[[0,format["%1 has put hes godmode off!",profileName]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
	life_god = false;
	titleText ["God mode disabled","PLAIN"]; titleFadeOut 2;
	player allowDamage true;
} else {
	[[0,format["%1 has put hes godmode on!",profileName]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
	life_god = true;
	titleText ["God mode enabled","PLAIN"]; titleFadeOut 2;
	player allowDamage false;
}; 
