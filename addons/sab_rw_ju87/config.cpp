class CfgPatches
{
	class sab_rw_bf109
	{
		author = "Donov C.";
		name = "Secret Weapons Rework";
		url = "http://www.arma3.com";
		version = 1;
		units[] =
			{};
		weapons[] = {};
		requiredAddons[] =
			{
				"sab_secretweapons",
				"sab_ju87"

		};
	};
};

class CfgVehicles
{
	class sab_ju87_base;
	class sab_ju87 : sab_ju87_base

	{
		//Weapons of the Ju-87
		//weapons[] = {"sab_2xMGFF_weapon"};
		//magazines[] = {"sab_600Rnd_200x99_mag_Tracers_mag"};
		displayName = "Ju 87 D-5";
		armor = 11;
		elevatorControlsSensitivityCoef = 3;
		aileronControlsSensitivityCoef = 3;
		rudderControlsSensitivityCoef = 3;
		aileronSensitivity = 0.3;
		elevatorSensitivity = 0.2;
		rudderInfluence = 0.34999999;
		elevatorCoef[] =
			{
				0.40000001,
				0.5,
				0.7,
				0.7,
				0.9,
				1,
				0.89999998,
				0.80000001,
				0.69999999,
				0.60000002,
				0.5,
				0.30000001,
				0.2};
		aileronCoef[] =
			{
				0.2,
				0.5,
				0.69999999,
				1.1,
				1,
				1,
				0.89999998,
				0.89999998,
				0.80000001,
				0.80000001,
				0.80000001,
				0.69999999,
				0.69999999};
		rudderCoef[] = {0.30000001, 0.5, 1.2, 1.1, 1, 1, 0.89999998, 0.80000001, 0.69999999, 0.60000002, 0.5, 0.30000001, 0.2};
		wheelSteeringSensitivity = 0.75;
		acceleration = 160;
		angleOfIndicence = 0.050000001;
		draconicForceXCoef = 2;
		draconicForceYCoef = 3;
		draconicForceZCoef = 2.0;
		draconicTorqueXCoef = 0.80000001;
		draconicTorqueYCoef[] = {5, 4, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		envelope[] = {0.1, 0.3, 0.80000001, 3, 4, 4.4000001, 4.5, 4.5, 4.4000001, 4.0999999, 3.5, 2.5, 2};
		thrustCoef[] = {1.5, 1.5, 1.4, 1.3, 1.0, 0.9, 0.7, 0.7, 0.6, 0.4, 0.3, 0.3, 0.1};
		landingAoa = "rad 10";
		stallspeed = 86;
		landingSpeed = 90;
		headAimDown = 0;
		flapsFrictionCoef = 1.2;
		airBrakeFrictionCoef = 1;
		altFullForce = 3200;
		altNoForce = 7500;
		maxSpeed = 385;

		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] = {"SAB_SW_BOMBS_Bx"};
						attachment = "";
						priority = 5;
						maxweight = 250;
						UIposition[] = {0.1, 0.1};
					};
					class Pylons2 : Pylons1
					{
						hardpoints[] = {"SAB_SW_BOMBS_Bx", ""};
						attachment = "";
						priority = 4;
						maxweight = 250;
						UIposition[] = {0.15, 0.2};
					};
					class Pylons3
					{
						hardpoints[] = {"O_BOMB_PYLON", "SAB_SW_BOMBS_B_Hx"};
						attachment = "sab_1rnd_1000axis_mag";
						priority = 5;
						maxweight = 1000;
						UIposition[] = {0.3, 0.1};
					};
					class Pylons4 : Pylons2
					{
						hardpoints[] = {"SAB_SW_BOMBS_Bx", ""};
						attachment = "";
						UIposition[] = {0.45, 0.2};
						mirroredMissilePos = 2;
					};
					class Pylons5 : Pylons1
					{
						UIposition[] = {0.5, 0.1};
						mirroredMissilePos = 1;
					};
				};
			};
		};
	};

	class sab_ju87_2 : sab_ju87
	{
		displayName = "Ju 87 G-2";
		class Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] = {""};
						attachment = "";
						priority = 5;
						maxweight = 250;
						UIposition[] = {0.1, 0.1};
					};
					class Pylons2
					{
						hardpoints[] = {"SAB_CANNON_37"};
						attachment = "sab_cannon_37_ap_pylonweapon";
						priority = 4;
						maxweight = 250;
						UIposition[] = {0.15, 0.2};
					};
					class Pylons3
					{
						hardpoints[] = {""};
						attachment = "";
						priority = 5;
						maxweight = 1000;
						UIposition[] = {0.3, 0.1};
					};
					class Pylons4 : Pylons2
					{
						attachment = "sab_cannon_37_ap_pylonweapon";
						UIposition[] = {0.45, 0.2};
						mirroredMissilePos = 2;
					};
					class Pylons5 : Pylons1
					{
						hardpoints[] = {""};
						UIposition[] = {0.5, 0.1};
						mirroredMissilePos = 1;
					};
				};
			};
		};
	};
};