private["_prevPos"];

[] spawn {
	_prevPos = [getPosASL vehicle player, getDir vehicle player];	

	//Disables player simulation to turn them around with full ammo, fuel and repaired
	player enableSimulation false;
	//titleText ["<t size='5'>RTB to rearm, repair and refuel...</t>", "BLACK", 0.5, true, true]; 
	sleep 1;
	skiptime 1;

	//player adjsutments
	vehicle player setPos (_prevPos # 0);
	vehicle player setDir (_prevPos # 1) + 180;
	vehicle player setVehicleAmmo 1;
	vehicle player setFuel 1;
	vehicle player setDamage 0; /*	
									It should be 1, 
									not because I want the player 
									to be fully repaired, but 
									because they deserve it 
								*/

	sleep 2.4;
	vehicle player setVectorUp [0,0,1];
	vehicle player setVelocityModelSpace [0,300,0];
	//titleFadeOut 0.9;
	player enableSimulation true;
};