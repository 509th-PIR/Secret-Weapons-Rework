class CfgPatches
{
    class sab_rw_bf109
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
			"sab_bf109",
			"sab_bf109_base",
			"sab_B_dumbbomb_base",
			"sab_200Rnd_127x99_mag_Tracers_mag",
			"sab_200Rnd_200x99_mag_Tracers_mag",
			"sab_1rnd_50_mag",
			"sab_680Rnd_20x80_mag",
			"sab_3600Rnd_792_mag"
		};
    };
};

class cfgAmmo
{
	class sab_B_dumbbomb_base;
    class sab_genericbomb_1000_ammo: sab_B_dumbbomb_base
	{
        hit=8000;
		indirectHit=3000;
		indirectHitRange=40;
		suppressionRadiusHit=50;
    };
    class sab_genericbomb_500_ammo: sab_B_dumbbomb_base
	{
		hit=3000;
		indirectHit=1000;
		indirectHitRange=5;
		explosive = 1;
		suppressionRadiusHit=10;
    };
    class sab_genericbomb_250_ammo: sab_B_dumbbomb_base 
	{
        hit=1250;
		explosive = 1;
		indirectHit=425;
		indirectHitRange=4;
		suppressionRadiusHit=8;
    };
};
class cfgMagazines
{
	class VehicleMagazine;
    class sab_200Rnd_127x99_mag_Tracers_mag;
	class sab_3600Rnd_792_mag;
	class sab_1800Rnd_792_mag: sab_3600Rnd_792_mag
	{
		scope=2;
		count=1800;
		hit=100;
	};
    class sab_1800Rnd_127x99_mag_Tracers_mag: sab_200Rnd_127x99_mag_Tracers_mag
	{
		hit=180;
		explosive = 0.2;
		scope=2;
		count=1800;
		tracersEvery = 1;
		tracerColorR = [0.1 , 1, 0, 1];
	};
    class sab_200Rnd_200x99_mag_Tracers_mag : VehicleMagazine
	{
        class Components {};
		scope=2;
		count=200;
		hit = 520;
        caliber = 20.0;
		explosive = 0.4;
		initSpeed=800;
		maxLeadSpeed=200;
		tracersEvery=1;
		muzzleImpulseFactor[]={-0.0049999999,0.1};
        aiAmmoUsageFlags="64 + 128 + 256";
	};
	class sab_680Rnd_20x80_mag: VehicleMagazine
	{
		scope=2;
		count=680;
		hit = 520;
        caliber = 20.0;
		explosive = 0.4;
		initSpeed=800;
		maxLeadSpeed=200;
		tracersEvery=1;
		muzzleImpulseFactor[]={-0.0049999999,0.1};
		aiAmmoUsageFlags="64 + 128 + 256";
	};
	class sab_1rnd_50_mag;
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

class CfgVehicles {
	class sab_bf109_base;
    class sab_rw_bf109: sab_bf109_base
	{
		scope = 1;
		author="Donov C.";
		displayName="Bf 109 F-4";

		armor = 10;
        elevatorControlsSensitivityCoef=3;
		aileronControlsSensitivityCoef=3;
		rudderControlsSensitivityCoef=3;
		aileronSensitivity=0.8;
		elevatorSensitivity=0.5;
		rudderInfluence=0.34999999;
		elevatorCoef[]=
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
		draconicForceXCoef=2;
		draconicForceYCoef=3;
		draconicForceZCoef=2.0;
		draconicTorqueXCoef=0.80000001;
		draconicTorqueYCoef[]={7,6,0.5,0,0,0,0,0,0,0,0,0,0};
		envelope[]={0.1,0.3,0.80000001,3,4,4.4000001,4.5,4.5,4.4000001,4.0999999,3.5,2.5,2};
		thrustCoef[]={1.3, 1.4, 1.4,  1.5,  1.3,  1.1, 1.0, 0.9, 0.9, 0.8, 0.8, 0.8, 0.4};
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
    };
	class sab_bf109 :sab_rw_bf109 {};
};