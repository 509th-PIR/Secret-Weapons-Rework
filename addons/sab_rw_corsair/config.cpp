class CfgPatches
{
    class sab_rw_corsair
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
			"sab_corsair"
		};
    };
};
class CfgVehicles {
    class sab_corsair_base;
	class sab_corsair: sab_corsair_base
	{
		displayName = "F4U-A1";
        armor=15;
        elevatorControlsSensitivityCoef=2;
		aileronControlsSensitivityCoef=5;
		rudderControlsSensitivityCoef=3;
		aileronSensitivity=1.2;
		elevatorSensitivity=0.4;
		rudderInfluence=0.4;
		elevatorCoef[]={
			0.7,
			1.0,
			1.2,
			1.4,
			1.3,
			1.2,
			1.0,
			0.9,
			0.7,
			0.60000002,
			0.5,
			0.30000001,
			0.2
		};
		aileronCoef[]={
			0.2,
			0.5,
			1,
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
		rudderCoef[]={
			0.5,
			0.5,
			1,
			1,
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
			0,
			0,
			0,
			6,
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
			3.0,
			3.0,
			2.5,
			2.0,
			1.4,
			0.5,
			0.4,
			0.1,
			0.1,
			0.0,
			0.0,
			0.0,
			0.0
		};
		maxSpeed=564;
		acceleration = 241;
		landingSpeed=200;
		stallSpeed=153;
		fuelCapacity=681;
		altFullForce=4572;
		altNoForce=11247;
		flapsFrictionCoef=0.9;
		wheelSteeringSensitivity=0.3;
		tailHook = true;
		class CarrierOpsCompatability
		{
			ArrestHookAnimationList[] = {""};	
			ArrestHookAnimationStates[] = {0,0.53,1};						
			ArrestHookMemoryPoint = "";							
			ArrestMaxAllowedSpeed = 200;								
			ArrestSlowDownStep = 0.8;								
			ArrestVelocityReduction = -12;							

		};
    };
};