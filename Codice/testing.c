#pragma config(Sensor, S3,     touchSensor,    sensorTouch)
#pragma config(Motor,  motorC,          bigMotor,      tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "SimpleTouchLib.h"
#include "SimpleMotorLib.h"
#include "SimpleWaitLib.h"

task main()
{
			goMotor(bigMotor);
			waitTouch(touchSensor,CLICKED);

			/* PROVA TOUCH SENSOR
			if(isPressed(touchSensor)){
				writeDebugStreamLine("1");
			}
			else{
				writeDebugStreamLine("0");
			}
			*/
}
