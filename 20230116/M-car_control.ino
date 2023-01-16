#define MOTOR_DIR 4
#define MOTOR_PWM 5
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(MOTOR_DIR,OUTPUT);
pinMode(MOTOR_PWM,OUTPUT);
}
void motor_control(int direction,int speed)
{
  digitalWrite(MOTOR_DIR,direction);
  analogWrite(MOTOR_PWM,speed);
}
void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Motor control");
int i;
for(i=0;i <255; i++)
 {
   motor_control(1,i);
   delay(50);
 }
}
