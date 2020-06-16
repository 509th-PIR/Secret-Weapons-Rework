class CfgPatches
{
    class sab_rw_ammo
	{
        author="Donov C.";
		name="Secret Weapons Rework";
        url="http://www.arma3.com";
		version=1.0;
		units[]=
		{
		};
		weapons[] = {
		"sab_hmg_m2_base",
		"sab_hmg_cannon_base",
		"sab_hmg_standard_base",
		"sab_bomb_bay_weapon",
		"sab_rw_a26_bay_weapon",
		"sab_bomb_weapon",
		"sab_torpedo_weapon",
		"sab_rocket_weapon",
		"sab_droptank_weapon",
		"sab_1x_762_weapon",
		"sab_2x_762_weapon",
		"sab_4x_762_weapon",
		"sab_6x_762_weapon",
		"sab_1x_303_weapon",
		"sab_2x_303_weapon",
		"sab_4x_303_weapon",
		"sab_6x_303_weapon",
		"sab_1xmg131_weapon",
		"sab_2xmg131_weapon",
		"sab_4xmg131_weapon",
		"sab_2type97_weapon",
		"sab_1xM2_127_weapon",
		"sab_2xM2_127_weapon",
		"sab_4xM2_127_weapon",
		"sab_6xM2_127_weapon",
		"sab_14xM2_127_weapon",
		"sab_4xM2_20mm_weapon",
		"sab_3xM2_20mm_weapon",
		"sab_2xM2_20mm_weapon",
		"sab_1xM2_20mm_weapon",
		"sab_1x_23mm_weapon",
		"sab_2x_23mm_weapon",
		"sab_2type99_mm_weapon",
		"sab_1type99_mm_weapon",
		"sab_30mm_cannon",
		"sab_2x30mm_cannon",
		"sab_3x30mm_cannon",
		"sab_4x30mm_cannon",
		"sab_2xtype5_cannon",
		"sab_1xtype5_cannon",
		"sab_pylon_37mm_cannon",
		"sab_pylon_50mm_cannon",
		"sab_1xM2_127_turret1_weapon",
		"sab_1xM2_127_turret2_weapon",
		"sab_1xM2_127_turret3_weapon",
		"sab_1xM2_127_turret4_weapon",
		"sab_1xM2_127_turret5_weapon",
		"sab_4xM2_127_turret_weapon",
		"sab_2xM2_127_turret1_weapon",
		"sab_2xM2_127_turret2_weapon",
		"sab_2xM2_127_turret3_weapon",
		"sab_1xmg131_turret1_weapon",
		"sab_1xmg131_turret2_weapon",
		"sab_1xmg131_turret3_weapon",
		"sab_1xmg15_turret1_weapon",
		"sab_1xberezin_turret1_weapon",
		"sab_2x_303_turret1_weapon",
		"sab_1xtype99_weapon",
		"sab_1xtype92_weapon",
		"sab_25mm_cannon",
		"sab_2x25mm_cannon",
		"sab_2x25mm_aa_cannon",
		"sab_5inch_cannon",
		"sab_5inch_cannon_t2",
		"sab_5inch_cannon_t3",
		"sab_5inch_cannon_t4",
		"sab_2x5inchfixed_cannon",
		"sab_5inch_port_cannon",
		"sab_5inch_starboard_cannon",
		"sab_5inch_port2_cannon",
		"sab_5inch_starboard2_cannon",
		"sab_5inch_port3_cannon",
		"sab_5inch_starboard3_cannon",
		"sab_12inch_cannon",
		"sab_12inch_cannon_t2",
		"sab_12inch_cannon_t3",
		"sab_12inch_cannon_t4",
		"sab_15inch_cannon",
		"sab_15inch_cannon_t2",
		"sab_15inch_cannon_t3",
		"sab_15inch_cannon_t4",
		"sab_ssw_blu_pilotuniform",
		"sab_ssw_red_pilotuniform",
		"sab_ssw_green_pilotuniform",
		"sab_ssw_blu_sailoruniform",
		"sab_ssw_red_sailoruniform",
		"sab_ssw_green_sailoruniform",
		"sab_ssw_pilotvest",
		"sab_ssw_lifevest",
		"sab_wwii_pilot_cap",
		"sab_wwii_sailor_cap",
		"sab_wwii_sailor_cap2"
		};
		
		requiredAddons[]=
		{	
			"sab_secretweapons",
			"A3_Air_F"
		};
    };
};

class cfgAmmo
{
	class sab_B_dumbbomb_base;
	class ShellCore;
	class ShellBase: ShellCore
	{
		simullation = "shotshell";
		irLock = 1;
		allowAgainstInfantry = 0;
		aiAmmoUsageFlags = "128 + 512";
		explosive = 0;
		hit = 200;
		indirectHit = 11;
		indirectHitRange = 1;
		dangerRadiusHit = 100;
		suppressionRadiusHit = 18;
		cost = 500;
		sideAirFriction = 1.5;
		airFriction = -0.00065;
		deflecting = 15;
		simulationStep = 0.05;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 18;
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		warheadName = "AP";
		class CamShakeExplode
		{
			power = 20;
			duration = 5;
			frequency = 20;
			distance = "((80^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 5;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 1;
			frequency = 20;
			distance = 1;
		};
	};
	class 37mm_AP_AMMO: ShellBase
	{
		lightColor[] = {0, 1, 0, 1};
		submunitionInitSpeed = 200;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 1;
	};
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

	//This is a terrible way to program the 37mm in.  Considering nobody around me can stop me, I'm doing it anyways
	//Michael, fight me
	class sab_24rnd_37mm_mag;
	//Ju-87 37mm	
	class sab_cannon_37_ap_pylonweapon: sab_24rnd_37mm_mag
	{
		author="Donov C.";
		displayName="3.7 cm Flak AP";
		displayNameShort="3.7cm";
		ammo="37mm_AP_AMMO";
		scope=2;
		tracersEvery=1;
		nameSound="cannon";
		mass=230;
		pylonWeapon = "sab_pylon_37mm_cannon";
		count = 18;
		hardpoints[]=
		{
			"SAB_CANNON_37"
		};
	};
	//Bf 110 37mm
	class sab_cannon_37_ap_pylonweapon_bf110 : sab_cannon_37_ap_pylonweapon 
	{
		count = 40;
		hardpoints[]=
		{
			"SAB_CANNON_37_BF110"
		};
	};
	//This concludes the terrible code
	
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
	class sab_2rnd1000_bomber_mag;
	class sab_rw_6rnd1000_bomber_mag : sab_2rnd1000_bomber_mag
	{
		displayName="BMB 6x1000 lb";
		displayNameShort="1000";
		ammo="sab_genericbomb_1000_ammo";
		count=6;
		pylonWeapon="sab_rw_a26_bay_weapon";
		hardpoints[]=
		{
			"SAB_SW_BOMBS_B_a26"
		};
	};
	class sab_rw_12rnd500_bomber_mag : sab_rw_6rnd1000_bomber_mag
	{
		displayName="BMB 12x500 lb";
		displayNameShort="500";
		ammo="sab_genericbomb_500_ammo";
		count=12;
		pylonWeapon="sab_rw_a26_bay_weapon";
		hardpoints[]=
		{
			"SAB_SW_BOMBS_B_a26"
		};
	};
	class sab_rw_24rnd250_bomber_mag : sab_rw_6rnd1000_bomber_mag
	{
		displayName="BMB 24x250 lb";
		displayNameShort="250";
		ammo="sab_genericbomb_250_ammo";
		count=24;
		pylonWeapon="sab_rw_a26_bay_weapon";
		hardpoints[]=
		{
			"SAB_SW_BOMBS_B_a26"
		};
	};
};
class CfgWeapons 
{
	class sab_bomb_bay_weapon;
	class sab_rw_a26_bay_weapon : sab_bomb_bay_weapon
	{
		displayname="Bomb Bay";
		magazines[]=
		{
			"sab_rw_6rnd1000_bomber_mag",
			"sab_rw_12rnd500_bomber_mag",
			"sab_rw_24rnd250_bomber_mag"
		};
	};
	class sab_pylon_37mm_cannon;
	class sab_pylon_37mm_cannon_bf110: sab_pylon_37mm_cannon
	{
		magazines[]=
		{
			"sab_cannon_37_ap_pylonweapon_bf110"
		};
	};
};