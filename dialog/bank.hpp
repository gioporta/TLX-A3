class Life_atm_management {
	idd = 2700;
	name= "life_atm_menu";
	movingEnable = false;
	enableSimulation = true;

	class controlsBackground {
		class MainBackground:Life_RscPicture {
			idc = 1200;
			text = "Images\ATM.paa";
			x = 0.1456 * safezoneW + safezoneX;
			y = -0.00404389 * safezoneH + safezoneY;
			w = 0.702237 * safezoneW;
			h = 0.994087 * safezoneH;
		};
	};

	class controls {
		class CheckBalance_Button: Life_RscButtonSilent
		{
			idc = 1600;
			onButtonClick = "createDialog'life_atm_balance';call life_fnc_atmMenu;";
			x = 0.316237 * safezoneW + safezoneX;
			y = 0.443995 * safezoneH + safezoneY;
			w = 0.0328148 * safezoneW;
			h = 0.0280024 * safezoneH;
		};
		class Withdraw_Button: Life_RscButtonSilent
		{
			idc = 1601;
			onButtonClick = "createDialog'Life_atm_withdraw';ctrlSetText[1100, [CASH] call life_fnc_numberText];ctrlSetText[1400, [BANK] call life_fnc_numberText];";
			x = 0.316237 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0328148 * safezoneW;
			h = 0.0280024 * safezoneH;
		};
		class Deposit_Balance: Life_RscButtonSilent
		{
			idc = 1602;
			onButtonClick = "createDialog'life_atm_deposit';ctrlSetText[1400, [CASH] call life_fnc_numberText];ctrlSetText[1100, [BANK] call life_fnc_numberText];";
			x = 0.316237 * safezoneW + safezoneX;
			y = 0.542004 * safezoneH + safezoneY;
			w = 0.0328148 * safezoneW;
			h = 0.0280024 * safezoneH;
		};
		class Trasnfer_Button: Life_RscButtonSilent
		{
			idc = 1603;
			onButtonClick = "createDialog'Life_atm_transfer';[] call life_fnc_atm_transferz;[] call life_fnc_atmMenu;";
			x = 0.552504 * safezoneW + safezoneX;
			y = 0.443995 * safezoneH + safezoneY;
			w = 0.0328148 * safezoneW;
			h = 0.0280024 * safezoneH;
		};
		class ATM_Button5: Life_RscButtonSilent
		{
			idc = 1604;
			onButtonClick = "";
			x = 0.552504 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0328148 * safezoneW;
			h = 0.0280024 * safezoneH;
		};
		class ATM_Button6: Life_RscButtonSilent
		{
			idc = 1605;
			onButtonClick = "";
			x = 0.552504 * safezoneW + safezoneX;
			y = 0.542004 * safezoneH + safezoneY;
			w = 0.0328148 * safezoneW;
			h = 0.0280024 * safezoneH;
		};
	};
};

////////////////////////////////
///////////ATM DEPOSIT/////////
//////////////////////////////
class Life_atm_deposit {
	idd = 2704;
	name= "life_atm_deposit";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	class controlsBackground {
		class MainBackground: Life_RscPicture
		{
			idc = 1200;
			text = "Images\Atm_deposit.paa";
			x = 0.1456 * safezoneW + safezoneX;
			y = -0.00404389 * safezoneH + safezoneY;
			w = 0.702237 * safezoneW;
			h = 0.994087 * safezoneH;
		};
	};

	class controls {
		class bankmoney: Life_RscEdit
		{
			idc = 1400;
			text = "12345"; //--- ToDo: Localize;
			shadow = 0;
			colorBackground[] = {0.098,0.306,0.627,1};
			x = 0.275;
			y = 0.48;
			w = 0.1375;
			h = 0.04;
		};
		class Deposit_button: Life_RscButtonSilent
		{
			idc = 1600;
			onButtonClick = "[] call life_fnc_bankDeposit";
			x = 0.316237 * safezoneW + safezoneX;
			y = 0.542004 * safezoneH + safezoneY;
			w = 0.0328148 * safezoneW;
			h = 0.0280024 * safezoneH;
		};

	};
};


////////////////////////////////
///////////ATM WITHDRAW/////////
//////////////////////////////
class Life_atm_withdraw {
	idd = 2701;
	name= "Life_atm_withdraw";
	movingEnable = false;
	enableSimulation = true;

	class controlsBackground {
		class MainBackground: Life_RscPicture
		{
			idc = 1200;
			text = "Images\ATM_Withdraw.paa";
			x = 0.1456 * safezoneW + safezoneX;
			y = -0.00404389 * safezoneH + safezoneY;
			w = 0.702237 * safezoneW;
			h = 0.994087 * safezoneH;
		};
	};

	class controls {

		class bankmoney: Life_RscEdit
		{
			idc = 1400;
			text = "12345"; //--- ToDo: Localize;
			shadow = 0;
			colorBackground[] = {0.098,0.306,0.627,1};
			x = 0.275;
			y = 0.48;
			w = 0.1375;
			h = 0.04;
		};
		class Withdraw_button: Life_RscButtonSilent
		{
			idc = 1600;
			onButtonClick = "[] call life_fnc_bankWithdraw";
			x = 0.316237 * safezoneW + safezoneX;
			y = 0.542004 * safezoneH + safezoneY;
			w = 0.0328148 * safezoneW;
			h = 0.0280024 * safezoneH;
		};

	};
};

////////////////////////////////
///////////ATM BALANCE/////////
//////////////////////////////

class Life_atm_balance {
	idd = 2702;
	name= "Life_atm_balance";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[]call life_fnc_atmMenu;";

	class controlsBackground {
		class MainBackground: Life_RscPicture
		{
			idc = 1200;
			text = "Images\ATM_Balance.paa";
			x = 0.1456 * safezoneW + safezoneX;
			y = -0.00404389 * safezoneH + safezoneY;
			w = 0.702237 * safezoneW;
			h = 0.994087 * safezoneH;
		};
	};

	class controls {
		class WelcomeText: Life_RscStructuredText
		{
			idc = 2643;
			x = 0.2538;
			y = 0.346742;
			w = 0.2625;
			h = 0.04;
		}
		class inDuhBank: Life_RscStructuredText
		{
			idc = 1100;
			text = "123"; //--- ToDo: Localize;
			x = 0.349442;
			y = 0.571614;
			w = 0.175;
			h = 0.04;
			sizeEx = -2 * GUI_GRID_H;
		};
		class MoneyOnHnad: Life_RscStructuredText
		{
			idc = 1101;
			text = "123"; //--- ToDo: Localize;
			x = 0.348507;
			y = 0.431289;
			w = 0.175;
			h = 0.04;
		};
	};
};

class Life_atm_transfer {
	idd = 2706;
	name= "Life_atm_transfer";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	class controlsBackground {
		class MainBackground: Life_RscPicture
		{
			idc = 1200;
			text = "Images\ATM_Transfer.paa";
			x = 0.1456 * safezoneW + safezoneX;
			y = -0.00404389 * safezoneH + safezoneY;
			w = 0.702237 * safezoneW;
			h = 0.994087 * safezoneH;
		};
};

	class controls {

		class TransferButton: Life_RscButtonSilent
		{
			idc = 2400;
			onButtonClick = "[] call life_fnc_bankTransfer;";
			x = 0.05;
			y = 0.58;
			w = 0.125;
			h = 0.06;
		};
		class PlayerList: Life_RscCombo
		{
			idc = 2703;
			x = 0.2125;
			y = 0.5;
			w = 0.2;
			h = 0.04;
		};
		class TransferMoolah: Life_RscEdit
		{
			idc = 1400;
			colorBackground[] = {0.098,0.306,0.627,1};
			text = "1"; //--- ToDo: Localize;
			x = 0.270522;
			y = 0.415193;
			w = 0.15;
			h = 0.04;
		};
	};
};
