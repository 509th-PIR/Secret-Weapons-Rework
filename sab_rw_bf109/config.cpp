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
			"sab_secretweapons",
			"sab_bf109",
			"sab_bf109_base"
		};
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