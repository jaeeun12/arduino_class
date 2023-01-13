#define IN1 2
#define IN2 4
#define ENL 3

#define IN3 7
#define IN4 6
#define ENR 5

#define F_Sonar 8
#define L_Sonar 9
#define R_Sonar 10

#define Obstacle 20

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENL, OUTPUT);
  
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENR, OUTPUT);
  
  pinMode(F_Sonar, OUTPUT);
  pinMode(L_Sonar, OUTPUT);
  pinMode(R_Sonar, OUTPUT);
  
  Serial.begin(9600);
}

void motor_control(int dir_l, int speed_l, int dir_r, int speed_r)
{
	if(dir_l==1)
    {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      analogWrite(ENL, speed_l);
    }
  else if(dir_l==-1)
    {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      analogWrite(ENL, speed_l);
    }
  else
   {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      analogWrite(ENL, 0);
    }
  //-----------------------------------------//
  if(dir_r==1)
    {
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      analogWrite(ENR, speed_l);
    }
  else if(dir_r==-1)
    {
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      analogWrite(ENR, speed_l);
    }
  else
   {
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
      analogWrite(ENR, 0);
    }
}

float F_Sonar_sensor()
{
  float duration=0.0;
  float distance=0.0;
  
  pinMode(F_Sonar, OUTPUT);
  
  digitalWrite(F_Sonar, LOW);
  digitalWrite(F_Sonar, HIGH);
  delay(10);
  
  digitalWrite(F_Sonar, LOW);
  pinMode(F_Sonar, INPUT);
  duration=pulseIn(F_Sonar, HIGH);
  
  distance=(duration*340.0)2.0/10000.0;
  
  return distance;
}
  
float L_Sonar_sensor()
{
  float duration=0.0;
  float distance=0.0;
  
  pinMode(L_Sonar, OUTPUT);
  
  digitalWrite(L_Sonar, LOW);
  digitalWrite(L_Sonar, HIGH);
  delay(10);
  
  digitalWrite(L_Sonar, LOW);
  pinMode(L_Sonar, INPUT);
  duration=pulseIn(L_Sonar, HIGH);
  
  distance=(duration*340.0)2.0/10000.0;
  
  return distance;
}

float R_Sonar_sensor()
{
  float duration=0.0;
  float distance=0.0;
  
  pinMode(R_Sonar, OUTPUT);
  
  digitalWrite(R_Sonar, LOW);
  digitalWrite(R_Sonar, HIGH);
  delay(10);
  
  digitalWrite(R_Sonar, LOW);
  pinMode(R_Sonar, INPUT);
  duration=pulseIn(R_Sonar, HIGH);
  
  distance=(duration*340.0)2.0/10000.0;
  
  return distance;
}

void loop()
{
  float f_sonar_distance=0.0;
  float l_sonar_distance=0.0;
  float r_sonar_distance=0.0;
  
  l_sonar_distance=L_Sonar_sensor();
  f_sonar_distance=F_Sonar_sensor();
  r_sonar_distance=R_Sonar_sensor();
  
  Serial.println(L_Sonar_sensor());
  Serial.println(R_Sonar_sensor());
  Serial.println(F_Sonar_sensor());
  
  Serial.print(l_sonar_distance);
  Serial.print("     ");
  Serial.print(f_sonar_distance);
  Serial.print("     ");
  Serial.print(r_sonar_distance);
  Serial.print("     ");
  
  if((l_sonar_distance>Obstacle)&&(f_sonar_distance<=Obstacle)&&(r_sonar_distance>Obstacle))
  {
    motor_control(-1, 50, 1, 50);
    delay(1000);
    motor_control(1, 100, 1, 100);
  }
  
  else if((l_sonar_distance<=Obstacle)&&(f_sonar_distance<=Obstacle)&&(r_sonar_distance>Obstacle))
  {
    motor_control(1, 50, -1, 50);
    delay(1000);
    motor_control(1, 100, 1, 100);
  }
  
  else if((l_sonar_distance>Obstacle)&&(f_sonar_distance<=Obstacle)&&(r_sonar_distance<=Obstacle))
  {
    motor_control(-1, 50, 1, 50);
    delay(1000);
    motor_control(1, 100, 1, 100);
  }
  
  else if((l_sonar_distance<=Obstacle)&&(f_sonar_distance<=Obstacle)&&(r_sonar_distance<=Obstacle))
  {
    motor_control(-1, 50, -1, 50);
    delay(1000);
    motor_control(-1, 50, -1, 50);
    delay(1000);
    
    motor_control(1, 100, 1, 100);
  }
  
  else
  {
    motor_control(1, 100, 1, 100);
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  //motor_control(0, 50, 0, 50);
}