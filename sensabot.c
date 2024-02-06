#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	setMotorTarget(rightMotor, 740, 50);
	setMotorTarget(leftMotor, 740, 50);
	waitUntilMotorStop(leftMotor);
	waitUntilMotorStop(rightMotor);
	delay(500);

	setMotorTarget(armMotor, -360, 50);
	delay(500);

	setMotorTarget(armMotor, 360, 50);
	delay(500);

	setMotorTarget(rightMotor, 1440, 50);
	setMotorTarget(leftMotor, 1440, 50);
	waitUntilMotorStop(leftMotor);
	waitUntilMotorStop(rightMotor);
	delay(500);

	setMotorTarget(armMotor, -360, 50);
	delay(500);

	setMotorTarget(armMotor, 360, 50);
	delay(500);

	setMotorTarget(rightMotor, 2140, 50);
	setMotorTarget(leftMotor, 2140, 50);
	waitUntilMotorStop(leftMotor);
	waitUntilMotorStop(rightMotor);
	delay(500);

	setMotorTarget(armMotor, -360, 50);
	delay(500);

	setMotorTarget(armMotor, 360, 50);
	delay(500);

	setMotorTarget(rightMotor, -2140, 50);
	setMotorTarget(leftMotor, -2140, 50);
	waitUntilMotorStop(leftMotor);
	waitUntilMotorStop(rightMotor);
	delay(500);

	waitUntilMotorStop(armMotor);

}