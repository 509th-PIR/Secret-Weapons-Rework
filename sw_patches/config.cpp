class CfgPatches
{
    class sw_patches
	{
        author="Donov C.";
		name="Secret Weapons Rework";
        url="http://www.arma3.com";
		version=1;
		units[]=
		{
			"sab_mustang",
			"sab_bf109",
			"sab_c47"
		};
        weapons[]={};
		requiredAddons[]=
		{
			"A3_Air_F",
			"sab_secretweapons"
		};
    };
};
class cfgAmmo
{
    class Bo_GBU12_LGB {
        class Components {};
    };
	class sab_B_dumbbomb_base: Bo_GBU12_LGB {
        class components{};
    }
    class sab_genericbomb_1000_ammo: sab_B_dumbbomb_base
	{
        hit=8000;
		indirectHit=3000;
		indirectHitRange=100;
		suppressionRadiusHit=200;
    };
    class sab_genericbomb_500_ammo: sab_B_dumbbomb_base
	{
		hit=3000;
		indirectHit=1000;
		indirectHitRange=25;
		suppressionRadiusHit=50;
    };
    class sab_genericbomb_250_ammo: sab_B_dumbbomb_base 
	{
        hit=1250;
		explosive = 0.5;
		indirectHit=150;
		indirectHitRange=15;
		suppressionRadiusHit=20;
    };
};
class cfgMagazines
{
	class VehicleMagazine {
        class Components {};
    };
    class sab_200Rnd_127x99_mag_Tracers_mag: VehicleMagazine {
        class Components {};
    };
    class sab_1800Rnd_127x99_mag_Tracers_mag: sab_200Rnd_127x99_mag_Tracers_mag
	{
		hit=500;
		explosive = 0.2;
		scope=2;
		count=1800;
	};
    class sab_200Rnd_200x99_mag_Tracers_mag: VehicleMagazine
	{
        class Components {};
		scope=2;
		count=200;
		hit = 480;
        caliber = 2.0;
		explosive = 1.0;
		ammo="sab_B_20mm_ammo";
		initSpeed=520;
		maxLeadSpeed=200;
		tracersEvery=1;
		nameSound="mgun";
		displayName="20mm ammo";
		descriptionShort="20mm ammo";
		muzzleImpulseFactor[]={-0.0049999999,0.1};
        aiAmmoUsageFlags="64 + 128 + 256";
	};
    class sab_1rnd_type2_mag: VehicleMagazine {
        class Components {};
    };
    class sab_1rnd_50_mag: sab_1rnd_type2_mag {
        class Components {};
    };
    class sab_1rnd_500_mag: sab_1rnd_50_mag
	{
		displayName="BMB 500 lb";
		displayNameShort="500";
		ammo="sab_genericbomb_500_ammo";
		hardpoints[]=
		{
			"SAB_SW_BOMBS_B_H",
			"SAB_SW_BOMBS_B"
		};
		count=1;
	};
};
class ViewPilot;
class CfgVehicles {
    class Air;
	class Plane: Air
    {
		class HitPoints;
	};
    class Plane_Base_F: Plane
	{
		class AnimationSources;
		class NewTurret;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
	};
	class sab_sw_baseplane: Plane_Base_F
	{
		class AnimationSources;
		class NewTurret;
		class HitPoints;
		class Components;
		class Eventhandlers;
	};
	class sab_sw_baseplane_allies_airforce: sab_sw_baseplane
	{
		editorpreview="sab_secretweapons\icons\preview_usaf.paa";
		crew="sab_pilot_1";
		side=2;
		faction="sab_air_faction_ssw_1_af";
		class AnimationSources;
		class NewTurret;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
	};
    class sab_sw_baseplane_red: sab_sw_baseplane
	{
		editorpreview="sab_secretweapons\icons\preview_lw.paa";
		crew="sab_pilot_0";
		side=1;
		faction="sab_air_faction_ssw_0_lw";
		class AnimationSources;
		class NewTurret;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
	};
    class sab_bf109_base: sab_sw_baseplane_red
	{
		author="Donov C.";
		displayName="Bf 109 E-4";

        elevatorControlsSensitivityCoef=4;
		aileronControlsSensitivityCoef=4;
		rudderControlsSensitivityCoef=4;
		aileronSensitivity=1.3;
		elevatorSensitivity=0.5;
		rudderInfluence=0.34999999;
		elevatorCoef[]=
        {
            0.40000001,
            0.5,
            1.1,
            1.1,
            1,
            1,
            0.89999998,
            0.80000001,
            0.69999999,
            0.60000002,
            0.5,
            0.30000001,
            0.2
        };
		aileronCoef[]=
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
            0.69999999
        };
		rudderCoef[]={0.30000001,0.5,1.2,1.1,1,1,0.89999998,0.80000001,0.69999999,0.60000002,0.5,0.30000001,0.2};
        wheelSteeringSensitivity=0.75;
		acceleration=238;
		angleOfIndicence=0.050000001;
		draconicForceXCoef=5.5;
		draconicForceYCoef=3;
		draconicForceZCoef=2.0;
		draconicTorqueXCoef=0.80000001;
		draconicTorqueYCoef[]={7,6,0.5,0,0,0,0,0,0,0,0,0,0};
		envelope[]={0,0.1,0.80000001,3,4,4.4000001,4.5,4.5,4.4000001,4.0999999,3.5,2.5,2};
		thrustCoef[]={1.2, 1.2, 1.2,  1.2,  1.0,  1.0, 1.0, 0.9, 0.9, 0.8, 0, 0, 0};
		landingAoa="rad 10";
		stallspeed=89;
		landingSpeed=105;
		headAimDown=0;
		flapsFrictionCoef=0.69999999;
		airBrakeFrictionCoef=1;
		gearsUpFrictionCoef=0.80000001;
		altFullForce=6300;
		altNoForce=12000;
		maxSpeed=520;
    }

    class sab_mustang_base: sab_sw_baseplane_allies_airforce
	{
        displayName="P-51D-10";
        armor=15;

        elevatorControlsSensitivityCoef=4;
		aileronControlsSensitivityCoef=5;
		rudderControlsSensitivityCoef=2;
		aileronSensitivity=1;
		elevatorSensitivity=0.2;
		rudderInfluence=0.3;
		elevatorCoef[]={
			1.2,
			1.2,
			1.2,
			1.1,
			1.1,
			1,
			0.89999998,
			0.80000001,
			0.69999999,
			0.60000002,
			0.5,
			0.30000001,
			0.2
		};
		aileronCoef[]={0.2,0.5,1,1,1,1,0.89999998,0.80000001,0.69999999,0.60000002,0.5,0.30000001,0.2};
		rudderCoef[]={0.5,0.5,1,1,1,1,0.89999998,0.80000001,0.69999999,0.60000002,0.5,0.30000001,0.2};
		draconicForceXCoef=6;
		draconicForceYCoef=1;
		draconicForceZCoef=1.3;
		draconicTorqueXCoef=1;
		draconicTorqueYCoef[]= {
			6,
			2,
			0.5,
			0,
			0,
			0,
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
		envelope[]={
			0.4,
			1,
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
			0.4,
			1.0,
			1.2,
			1.6,
			1.8,
			2,
			2,
			2,
			1.8,
			1.2,
			0.9,
			0.8,
			0.7
		};
		maxSpeed=592;
		acceleration = 291;
		landingSpeed=178;
		stallSpeed=153;
		fuelCapacity=681;
		altFullForce=4572;
		altNoForce=11247;
        class Wheels
		{
            wheelSteeringSensitivity=0.6;
		    flapsFrictionCoef=1.8;
        };
    };
    class sab_c47_base: sab_sw_baseplane_allies_airforce
	{
        armor=20;
        elevatorControlsSensitivityCoef=2;
		aileronControlsSensitivityCoef=2;
		rudderControlsSensitivityCoef=3;
		aileronSensitivity=0.5;
		elevatorSensitivity=0.34999999;
		rudderInfluence=0.15000001;
		elevatorCoef[]={0.30000001,0.60000002,0.80000001,1,1,0.89999998,0.80000001,0.5};
		aileronCoef[]={0.60000002,0.69999999,0.80000001,0.89999998,1,0.89999998,0.80000001,0.5};
		rudderCoef[]={0.40000001,0.80000001,0.89999998,1,1,0.89999998,0.80000001,0.5};
		draconicForceXCoef=5.5;
		draconicForceYCoef=3;
		draconicForceZCoef=1.5;
		draconicTorqueXCoef=0.80000001;
		draconicTorqueYCoef[]={8,1,0,0,0,0,0,0,0,0,0,0,0};
		envelope[]={0,0.1,0.5,1.5,3.3,3.5,3.3,2.4000001,2,1.8,1.5,1.5,1};
		thrustCoef[]={1.5,1.4,1.3,1.2,1.1,1,0.89999998,0.80000001,0.69999999,0.40000001,0,0,0};
		altFullForce=4000;
		altNoForce=7070;
		maxSpeed=370;
		stallSpeed=130;
		landingSpeed=140;
		airBrakeFrictionCoef=3;
		flapsFrictionCoef=2.6;
		gearsUpFrictionCoef=1;
		fuelCapacity=2000;
    };
};