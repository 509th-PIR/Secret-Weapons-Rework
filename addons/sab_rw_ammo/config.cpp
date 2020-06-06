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