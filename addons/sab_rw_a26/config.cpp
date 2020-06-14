class CfgPatches
{
    class sab_rw_a26
	{
        author="Donov C.";
		name="Secret Weapons Rework";
        url="http://www.arma3.com";
		version=1;
		units[]=
		{
		};
        weapons[]={};
		requiredAddons[]=
		{
			"sab_secretweapons",
			"sab_a26"
		};
    };
};
class CfgVehicles {
    class sab_a26_base;
	class sab_a26: sab_a26_base
	{
		//weapons[] = {"sab_14xM2_127_weapon"};
		//magazines[] = {"sab_3600Rnd_127x99_mag_Tracers_mag"};
		//sab_1rnd_hvar_mag
		//SAB_SW_BOMBS_B_a26
		displayName = "A-26B";
        armor=22;
        elevatorControlsSensitivityCoef=1;
		aileronControlsSensitivityCoef=1;
		rudderControlsSensitivityCoef=1;
		aileronSensitivity=0.5;
		elevatorSensitivity=0.5;
		rudderInfluence=0.5;
		elevatorCoef[]={
			0.5,
			0.6,
			0.9,
			1,
			1.1,
			1.1,
			1.1,
			0.9,
			0.7,
			0.7,
			0.6,
			0.4,
			0.1
		};
		aileronCoef[]=
		{
			0.7,
			0.9,
			1,
			1.1,
			1.2,
			1.2,
			1.1,
			0.9,
			0.8,
			0.8,
			0.5,
			0.4,
			0.4
		};
		rudderCoef[]=
		{
			1.0,
			1.1,
			1.1,
			1.3,
			1.4,
			1.3,
			1.1,
			1.1,
			0.7,
			0.2,
			0.2,
			0,
			0
		};
		draconicForceXCoef=4;
		draconicForceYCoef=1;
		draconicForceZCoef=1.3;
		draconicTorqueXCoef=1;
		draconicTorqueYCoef[]= {
			7.0,    // 0 %
			6.3,    // 15 %
			4.0,    // 30 %
			3.3,    // 45 %
			3.0,    // 60 %
			2.7,    // 75 %
			2.5,    // 90 %
			2.3,    // 105 %
			2.1,    // 120 %
			1.9,    // 135 %
			1.8     // 150 %
		};
		envelope[]={
			0,
			0.4,
			2.0,
			3.5,
			4.1999998,
			4.5999999,
			4.6999998,
			4.6999998,
			4.5999999,
			4.3000002,
			3.5,
			2.5,
			2
		};
		thrustCoef[]={
			0.8,
			0.9,
			1.0,
			1.0,
			0.9,
			0.8,
			0.8,
			0.8,
			0.7,
			0.5,
			0.4,
			0.1,
			0.0
		};
		maxSpeed=578;
		acceleration = 188;
		landingSpeed=125;
		stallSpeed=110;
		fuelCapacity=1100;
		altFullForce=5100;
		altNoForce= 8700 ;
		flapsFrictionCoef=0.9;
		wheelSteeringSensitivity=0.4;
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] = {"SAB_SW_ROCKETS_B","SAB_SW_BOMBS_B_S"};
						attachment = "";
						priority = 5;
						maxweight = 250;
						UIposition[] = {0.05,0.15};
					};
					class Pylons2: Pylons1
					{
						UIposition[] = {0.1,0.2};
					};
					class Pylons3: Pylons1
					{
						UIposition[] = {0.15,0.25};
					};
					class Pylons4: Pylons1
					{
						UIposition[] = {0.2,0.3};
					};
					class Pylons5: Pylons1
					{
						UIposition[] = {0.25,0.35};
					};
					class Pylons6: Pylons1
					{
						hardpoints[] = {"SAB_SW_BOMBS_B_a26"};
						UIposition[] = {0.3,0.1};
						maxweight = 2500;
						bay = 1;
					};
					class Pylons7: Pylons1
					{
						UIposition[] = {0.35,0.35};
						mirroredMissilePos = 5;
					};
					class Pylons8: Pylons1
					{
						UIposition[] = {0.4,0.3};
						mirroredMissilePos = 4;
					};
					class Pylons9: Pylons1
					{
						UIposition[] = {0.45,0.25};
						mirroredMissilePos = 3;
					};
					class Pylons10: Pylons1
					{
						UIposition[] = {0.5,0.2};
						mirroredMissilePos = 2;
					};
					class Pylons11: Pylons1
					{
						UIposition[] = {0.55,0.15};
						mirroredMissilePos = 1;
					};
				};
				class Bays
				{
					class BayCenter
					{
						bayOpenTime = 3;
						openBayWhenWeaponSelected = 1;
						autoCloseWhenEmptyDelay = 2;
					};
				};
				class Presets
				{
					class set0
					{
						displayName = "Clear";
						attachment[] = {};
					};
					class set1
					{
						displayName = "CAS";
						attachment[] = {"sab_1rnd_hvar_mag","sab_1rnd_hvar_mag","sab_1rnd_hvar_mag","sab_1rnd_hvar_mag","sab_1rnd_hvar_mag","","sab_1rnd_hvar_mag","sab_1rnd_hvar_mag","sab_1rnd_hvar_mag","sab_1rnd_hvar_mag","sab_1rnd_hvar_mag"};
					};
					class set2
					{
						displayName = "BMB";
						attachment[] = {"","","","","","sab_6rnd500_bomber_mag","","","","",""};
					};
				};
			};
		};
		memoryPointDriverOptics = "wheel_c";
		class pilotCamera
		{ 
			class OpticsIn
			{
				class Wide
				{
					initAngleX			= 0; minAngleX=0; maxAngleX=0;
					initAngleY			= 0; minAngleY=0; maxAngleY=0;
					initFov				= 0.25;
					minFov				= 0.25;
					maxFov				= 0.25;
					directionStabilized	= 1;
					visionMode[]		= {"Normal"};
					thermalMode[]		= {0,1};
					gunnerOpticsModel	= "";
					opticsPPEffects[]	= {};
				};
				showMiniMapInOptics				= true;
				showUAVViewInOptics				= false;
				showSlingLoadManagerInOptics	= false;
			};

			minTurn					= -0;
			maxTurn					= +0;
			initTurn				= 0;
			minElev					= -45;
			maxElev					= 90;
			initElev				= 50;
			maxXRotSpeed			= 0.3;
			maxYRotSpeed			= 0.3;
			maxMouseXRotSpeed		= 0.5;
			maxMouseYRotSpeed		= 0.5;
			pilotOpticsShowCursor	= 1;
			controllable			= true;
		};
    };
};