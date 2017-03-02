//Uranium
[] spawn
{
    while {true} do
    {
        private["_damage"];
        sleep 1;
        while {((player distance (getMarkerPos "Radiated Zone") < 50) && (player getVariable["Revive",TRUE]))} do
        {
            if(uniform player == "U_C_Scientist") then
            {
                hint "You're currently in a radioactive zone however, your clothes are protecting you.";
                sleep 15;
				hint "You still feel mild effects from the radiation, but nothing too serious.";
				sleep 15;


            }else
            {
                hint "You have entered a highly radioactive zone, get out now.";
				sleep 10;
				player setFatigue 1;
				enableCamShake true;
				addcamShake[random 4, 2, random 4];
				"dynamicBlur" ppEffectEnable true;
				"dynamicBlur" ppEffectAdjust [8];
				"dynamicBlur" ppEffectCommit 8;
				sleep 10;
				player say2d "cough";
				_damage = damage player;
                _damage = _damage + 0.3;
                player setDamage (_damage);
                sleep 45;
            };
        };
    };
};

//Carrying Uranium
[] spawn
{
    while {true} do
    {
        sleep 1.5;
        if(life_inv_uranium > 5) then {
            player forceWalk true;
            player setFatigue 1;
            hint "There is a large amount of uranium in your backpack so you cannot move very fast.";
        } else {
            if(isForcedWalk player) then {
                player forceWalk false;
};

[] spawn
{
	if(side player == civilian) then {
		while {true} do {
			uiSleep 2;
			_radios = player call TFAR_fnc_radiosList;
			if(count _radios < 2) then {
				_wtflol = call TFAR_fnc_haveLRRadio;
				if(_wtflol) then {
				_channel = (call TFAR_fnc_ActiveLRRadio) call TFAR_fnc_getLRChannel;
				_channel = _channel + 1;
					if (driver (vehicle player) == player && (vehicle player) != player) then {
						_curfreqlr = [(call TFAR_fnc_activeLrRadio), _channel] call TFAR_fnc_GetChannelFrequency;
						_curfreqlr = parseNumber _curfreqlr;
						if( _curfreqlr > 33 && _curfreqlr < 34 ) then {
							hint "33.1 - 33.9 are blocked frequencies.";
							[(call TFAR_fnc_activeLrRadio), _channel, "40"] call TFAR_fnc_SetChannelFrequency;
						};
					};
				};

				_wtfno = call TFAR_fnc_haveSWRadio;
				if(_Wtfno) then {
					_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
					_channel = _channel + 1;
					_curfreqsr = [(call TFAR_fnc_activeSwRadio), _channel] call TFAR_fnc_GetChannelFrequency;
					_curfreqsr = parseNumber _curfreqsr;
					if(!isNil "_curfreqsr") then {
						if( _curfreqsr > 33 && _curfreqsr < 34 ) then {
							hint "33.1 - 33.9 are blocked frequencies.";
							[(call TFAR_fnc_activeSwRadio), _channel, "40"] call TFAR_fnc_SetChannelFrequency;
						};
					};
				};
			}
			else
			{
				hint "Your radios are interfering with each other, drop one to fix it.";
				{
					if(_forEachIndex != 0) then
					{
						player unassignItem (_radios select (_forEachIndex - 1));
						player assignItem (_radios select (_forEachIndex));
					};
					_wtfno = call TFAR_fnc_haveSWRadio;
					if(_Wtfno) then {
						_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
						_channel = _channel + 1;
						_curfreqsr = [(call TFAR_fnc_activeSwRadio), _channel] call TFAR_fnc_GetChannelFrequency;
						if(!isNil "_curfreqsr") then {
							[(call TFAR_fnc_activeSwRadio), _channel, str (round(random 480)+30)] call TFAR_fnc_SetChannelFrequency;
						};
					};
					if((count _radios - 1) == _forEachIndex) then
					{
						player unassignItem (_radios select (_forEachIndex));
						player assignItem (_radios select 0);
					};
				} forEach _radios;
				uiSleep 3;
			};
		};
	};
};