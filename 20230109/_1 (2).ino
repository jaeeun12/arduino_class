// C++ code
//
#include <Servo.h>

Servo servo;

void setup()
{
 	servo.attach(2);
  	Serial.begin(9600);
  	servo.write(90);
  	delay(1000);
}

void loop()
{
  	int ad_in=0;
  	int angle=0;
  	ad_in=analogRead(A0);
  
  	Serial.println(ad_in);
  
  	angle=map(ad_in,0,1023,60,120);
  	
  	servo.write(angle);
  	delay(100);
}