SpeakerObj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString;
_soundToPlay = _soundPath + "sounds\hitler2.ogg";
while {true} do {
  // code...
  playSound3D [_soundToPlay, SpeakerObj, false, getPos SpeakerObj, 40, 1, 200]; 
  sleep 277;
};