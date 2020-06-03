class CfgPatches
{
    class sab_rw_ammo
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
			"Bo_GBU12_LGB",
			"sab_1600Rnd_762x54_mag_Tracers_mag",
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
	class Bo_GBU12_LGB;
    class sab_genericbomb_1000_ammo: Bo_GBU12_LGB
	{
        hit=8000;
		indirectHit=3000;
		indirectHitRange=40;
		suppressionRadiusHit=50;
    };
    class sab_genericbomb_500_ammo: Bo_GBU12_LGB
	{
		hit=3000;
		indirectHit=1000;
		indirectHitRange=5;
		explosive = 1;
		suppressionRadiusHit=10;
    };
    class sab_genericbomb_250_ammo: Bo_GBU12_LGB 
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
	class sab_1600Rnd_762x54_mag_Tracers_mag : VehicleMagazine {
		hit = 35;
	};
	class sab_1800Rnd_792_mag: sab_3600Rnd_792_mag
	{
		scope=2;
		count=1800;
		hit=100;
		tracerColorR = [0.1 , 1, 0, 1];
	};
    class sab_1800Rnd_127x99_mag_Tracers_mag: sab_200Rnd_127x99_mag_Tracers_mag
	{
		hit=180;
		explosive = 0.2;
		scope=2;
		count=1800;
		tracersEvery = 1;
		tracerColorR = [1 , 0.1, 0, 1];
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