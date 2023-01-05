// C++ code
//
void setup()
{
  int i;
  
  for(i=2;i<=9;i++)
  {
  pinMode(i, OUTPUT);
  }

}

void loop()
{
  int i;
  
  for(i=2;i<=9;i++)
  {
  digitalWrite(i, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  }
 
  for(i=9;i>=2;i--)
  {
  digitalWrite(i, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  }
}