void setup()
{
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int ad_in = 0;
  
  ad_in = analogRead(A0);
  Serial.println(ad_in);
  if(ad_in >= 800)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
    digitalWrite(2,LOW);
  }
      
  
}