#include <stdlib.h>
#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>

#define L298N_IN1 0
#define L298N_IN2 1
#define L298N_IN3 4
#define L298N_IN4 26

#define MOTOR_PWM_MAX 100
#define MOTOR_PWM_MIN 0

int main()
{
	setenv("WIRINGPI_GPIOMEM", "1", 1);

	wiringPiSetup() ;

	pinMode(L298N_IN4, OUTPUT);
	pinMode(L298N_IN3, OUTPUT);
	pinMode(L298N_IN2, OUTPUT);
	pinMode(L298N_IN1, OUTPUT);

	softPwmCreate(L298N_IN2, MOTOR_PWM_MIN, MOTOR_PWM_MAX);
	softPwmCreate(L298N_IN4, MOTOR_PWM_MIN, MOTOR_PWM_MAX);

	//digitalWrite(L298N_IN4, LOW);
	digitalWrite(L298N_IN3, LOW);
	//digitalWrite(L298N_IN2, LOW);
	digitalWrite(L298N_IN1, LOW);


	softPwmWrite(L298N_IN2, 100); //Left motor throttle, 0% - 100%
	softPwmWrite(L298N_IN4, 100); //right motor throttle, 0% - 100%

	printf("press q to shut the morot down");
	while(1) {
	}

	return 0;
}
