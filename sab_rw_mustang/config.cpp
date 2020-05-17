class CfgPatches
{
    class sab_rw_mustang
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
			"sab_mustang",
			"sab_mustang_base"
		};
    };
};
class CfgVehicles {
    class sab_mustang_base;
	class sab_rw_mustang: sab_mustang_base
	{
		scope = 1;
        displayName="P-51D-10";
        armor=15;

        elevatorControlsSensitivityCoef=4;
		aileronControlsSensitivityCoef=5;
		rudderControlsSensitivityCoef=2;
		aileronSensitivity=1.2;
		elevatorSensitivity=0.25;
		rudderInfluence=0.3;
		elevatorCoef[]={
			1.4,
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
			4,
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
			0.95,
			1.1,
			1.4,
			1.6,
			1.7,
			1.7,
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
		flapsFrictionCoef=0.9;
		wheelSteeringSensitivity=0.75;


    };
	class sab_mustang : sab_rw_mustang {};
};