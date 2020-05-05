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
		elevatorSensitivity=0.4;
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
			13.0,    // 0 %
			11.4,    // 15 %
			11.2,    // 30 %
			10.6,    // 45 %
			9.9,    // 60 %
			9.6,    // 75 %
			9.7,    // 90 %
			9.9,    // 105 %
			10.3,    // 120 %
			10.6,    // 135 %
			10.7     // 150 %
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
			1.2,
			2,
			6,
			6,
			6.5,
			6.5,
			6.4000001,
			6.0999999,
			4.5,
			2.5,
			2.2
		};
		thrustCoef[]={
			1.1, 
			1.3, 
			1.4,  
			1.7,  
			2.1,  
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
