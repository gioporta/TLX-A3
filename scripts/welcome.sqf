//Edited by Frank
//Original script from altisliferpg.com

_text = format["<br/><t color='#C5B6B5' size='1.8' align='center'>Welcome %1 to Takistan Life Xtreme!</t><br/><br/>",ProfileName];  
hint parseText ( _text);

_onScreenTime = 3;
sleep 2; 
_role1 = "Briefing";
_role1names = ["The year is 2017. Opfor left southern Takistan, destabilizing the southern area for some time."];       
_role2 = "Insurgents";
_role2names = ["The Insurgent's remain. They are more contained and harder to find after the bomb drop of 2016."];
_role3 = "Radiation";
_role3names = ["Before the opfor left, they droped a nuclear bomb on the known location of INS."];
_role4 = "Roleplay!";
_role4names = ["Ensure you roleplay to the best possible standard!"];

{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.60' color='#f2cb0b' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.70' color='#FFFFFF' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [


[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names]
];