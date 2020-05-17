class CfgPatches
{
	class sab_rw_fw109
	{
		author="Donov C.";
		authorUrl="";
		version=1;
		units[]=
		{
			
		};
		weapons[]={};
		requiredAddons[]=
		{
			"sab_fw190",
			"sab_fw190_base"
		};
	};
};
class CfgVehicles
{
	class sab_fw190_base;
	class sab_rw_fw190: sab_fw190_base
	{
		author="Donov C.";
		displayName="Fw 190 A-4";
		fuelCapacity=600;
		armor=17;

		elevatorControlsSensitivityCoef=2;
		aileronControlsSensitivityCoef=4;
		rudderControlsSensitivityCoef=2;
		aileronSensitivity=1.3;
		elevatorSensitivity=0.7;
		rudderInfluence=0.34999999;
		elevatorCoef[]=
		{
			0,
			0.8,
			1.0,
			1.2,
			1.0,
			0.8,
			0.7,
			0.7,
			0.7,
			0.6,
			0.6,
			0.3,
			0.2
		};
		aileronCoef[]=
		{
			0,
			2.0,
			2.0,
			2.0,
			2.0,
			2.0,
			1.93,
			1.65,
			1.37,
			1.1,
			0.83,
			0.6,
			0.4
		};
		rudderCoef[]={
			0,
			0.5,
			0.7,
			1.1,
			1,
			1,
			0.8,
			0.75,
			0.7,
			0.6,
			0.5,
			0.3,
			0.2
		};
		
		wheelSteeringSensitivity=0.65;
		acceleration=333;
		angleOfIndicence=0.050000001;
		draconicForceXCoef=7.5;
		draconicForceYCoef=2.5;
		draconicForceZCoef=2.5;
		draconicTorqueXCoef[]=
		{
			9,    // 0 %
			7.7,    // 15 %
			6.7,    // 30 %
			5.7,    // 45 %
			4.8,    // 60 %
			4,    // 75 %
			3.8,    // 90 %
			3.7,    // 105 %
			3.67,    // 120 %
			3.62,    // 135 %
			3.59     // 150 %
		};
		draconicTorqueYCoef[]={
			7.8,
			6,
			5.8,
			5.5,
			4.2,
			3.6,
			3.0,
			2.4,
			2,
			1.8,
			1.4,
			1.2,
			1
		};
		envelope[]={
			0,
			0.15,
			.8,
			2,
			4,
			5,
			5.4,
			6.5,
			6.4000001,
			6.0999999,
			4.5,
			2.5,
			2.2
		};
		thrustCoef[]={
			1.1, 
			1.1, 
			1.1,  
			1.3,  
			1.4,  
			1.4, 
			1.2, 
			0.9, 
			0.9, 
			0.8, 
			0.8, 
			0.8, 
			0.75
		};
		landingAoa="rad 10";
		stallspeed=120;
		landingSpeed=140;
		flapsFrictionCoef=0.69999999;
		gearsUpFrictionCoef=0.80000001;
		altFullForce=6300;
		altNoForce=10350;
		maxSpeed=652;
	};
	class sab_fw190_2: sab_rw_fw190
	{
		scope=2;
		displayName="Fw 190 A-4";
	};
};
