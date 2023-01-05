// C++ code
//
int tones[] = {523,587,659,684,784,880,988,1046};
            // 도   레  미  파  솔  라  시  도
            // 1    2   3   4   5   6   7   8

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int input = 0;
  input = digitalRead(2); 
  if (input == HIGH)
  {
  tone(12, tones[0], 500); // 
  delay(600);
  }
  
  input = digitalRead(3); 
  if (input == HIGH)
  {
  tone(12, tones[1], 500); // 
  delay(600);
  }
  
  input = digitalRead(4); 
  if (input == HIGH)
  {
  tone(12, tones[2], 500); // 
  delay(600);
  }
  
  input = digitalRead(5); 
  if (input == HIGH)
  {
  tone(12, tones[3], 500); // 
  delay(600);
  }
  
  input = digitalRead(6); 
  if (input == HIGH)
  {
  tone(12, tones[4], 500); // 
  delay(600);
  }
  
  input = digitalRead(7); 
  if (input == HIGH)
  {
  tone(12, tones[5], 500); // 
  delay(600);
  }
  
  input = digitalRead(8); 
  if (input == HIGH)
  {
  tone(12, tones[6], 500); // 
  delay(600);
  }
  
  input = digitalRead(9); 
  if (input == HIGH)
  {
  tone(12, tones[7], 500); // 
  delay(600);
  }
}