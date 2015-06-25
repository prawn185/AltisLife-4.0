StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\zlt_fastrope.sqf";
_igiload = execVM "IgiLoad\IgiLoadInit.sqf";
//Helipad lights

if (isServer) then {
null = [5, "scripts"] execVM "scripts\helipad_lights\helipad_light_auto.sqf";	
};
StartProgress = true;
