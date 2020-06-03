#define _ARMA_

class CfgPatches
{
	class sab_bf110
	{
		author = "Donov C.";
		authorUrl = "";
		version = 1;
		units[] = {"sab_bf110","sab_bf110_2"};
		weapons[] = {};
		requiredAddons[] = {
			"sab_secretweapons",
			"sab_bf110_base",
			"sab_bf110"
		};
	};
};

class CfgVehicles
{
	class sab_bf110_base;
	class sab_rw_bf110: sab_bf110_base
	{
		displayName = "Bf 110 F-2";
		gearUpTime = 5.5;
		gearDownTime = 5;
		armor = 20;
		acceleration = 115; 
		//weapons[] = {"sab_4x_792_weapon","sab_2xMG151_weapon"};
		//magazines[] = {"sab_1800Rnd_792_mag","sab_400Rnd_200x99_mag_Tracers_mag"};
		//Turret Weapons
		//weapons[] = {"sab_1xmg15_turret1_weapon"};
		//magazines[] = {"sab_75Rnd_792x57_mag_Tracers_mag

		elevatorControlsSensitivityCoef = 3;
		aileronControlsSensitivityCoef = 3;
		rudderControlsSensitivityCoef = 3;
		aileronSensitivity = 0.83;
		elevatorSensitivity = 0.75;
		rudderInfluence = 0.28;
		elevatorCoef[] = {
			0.4,
			0.5,
			1,
			1,
			1,
			1,
			0.9,
			0.8,
			0.7,
			0.6,
			0.5,
			0.3,
			0.2
		};
		aileronCoef[] = {
			0.2,
			0.5,
			1.1,
			1.1,
			1.1,
			1.1,
			0.9,
			0.8,
			0.7,
			0.6,
			0.5,
			0.3,
			0.2
		};
		rudderCoef[] = {
			0.3,
			0.5,
			1,
			1,
			1,
			1,
			0.9,
			0.8,
			0.7,
			0.6,
			0.5,
			0.3,
			0.2
		};
		draconicForceXCoef = 4.4;
		draconicForceYCoef = 1;
		draconicForceZCoef = 3;
		draconicTorqueXCoef = 1.5;
		draconicTorqueYCoef = 2;
		envelope[] = {
			0.3,
			1.5,
			2,
			3.5,
			4,
			4.5,
			5,
			5.2,
			4.7,
			4.1,
			3.5,
			2.5,
			2
		};
		thrustCoef[] = {
			1.0,
			1.0,
			1.0,
			1.0,
			0.7,
			0.7,
			0.5,
			0.5,
			0.2,
			0.1,
			0.1,
			0,
			0
		};
		flapsFrictionCoef = 1;
		altFullForce = 5300;
		altNoForce = 11000;
		maxSpeed = 570;
		stallSpeed = 145;
		landingSpeed = 175;
		wheelSteeringSensitivity = 1.6;
		insideSoundCoef = 0.35;
	};

	class sab_bf110: sab_rw_bf110
	{
		scope = 2;
	};
};