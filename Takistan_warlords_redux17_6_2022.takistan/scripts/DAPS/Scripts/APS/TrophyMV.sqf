private["_v","_i","_b","_p","_d","_ex","_a","_rd","_s","_id"];
_v=_this select 0;
_i=_this select 1;
if((typeOf _i)in dapsExcludedAmmo)exitWith{};
_s="";
_a=0;
_p=getPos _i;
_d=_v distance _i;
if(_d<30)exitWith{};
sleep 0.001;
if((_v distance _i)>_d)exitWith{};
if((getNumber(configFile>>"CfgAmmo">>typeOf _i>>"hit"))>999)exitWith{};
_id=getDir _i;
[_v,_id,_p,_i]call DAPS_fnc_React;
_rd=[_id,_v]call DAPS_fnc_RelDir2;
if(_rd>180)then{_a=_v getVariable"dapsAmmoL"}else{_a=_v getVariable"dapsAmmoR"};
if(_a<1)exitWith{};
_ex=TRUE;
while{TRUE}do{
	if!(alive _i)exitWith{_ex=FALSE};
	if!(alive _v)exitWith{};
	_d=_v distance _i;
	if(_d>101)exitWith{_ex=FALSE};
	if(_d<30)exitWith{};
	sleep 0.01;
};
if!(alive _v)exitWith{};
if!(_ex)exitWith{};
_p=getPosATL _i;
deleteVehicle _i;
_p call DAPS_fnc_Blast;
if(_rd>180)then{_s="LEFT"}else{_s="RIGHT"};
[_v,_s,_a]call DAPS_fnc_DeductAmmo;
[_v,_s,_rd,TRUE]remoteExec["DAPS_fnc_Report"];