// C++ code
//
int tones[] = {523,587,659,684,784,880,988,1046};
            // 도   레  미  파  솔  라  시  도
            // 1    2   3   4   5   6   7   8

void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  tone(12,tones[4],500);;   
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[4],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[5],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[5],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  
  tone(12,tones[4],500);;   
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[4],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[2],1000);;    
  delay(1000);          //1초 동안 시간 지연
  
  
  tone(12,tones[4],500);;   
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[4],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[2],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[2],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[1],500);;    
  delay(1500);          //1초 동안 시간 지연
  
  tone(12,tones[4],500);;   
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[4],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[5],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[5],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  
  tone(12,tones[4],500);;   
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[4],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[2],1000);;    
  delay(1000);          //1초 동안 시간 지연
 
  
  tone(12,tones[4],500);;   
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[2],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[1],500);;    
  delay(1000);          //1초 동안 시간 지연
  
  tone(12,tones[2],500);;    
  delay(1000); 
  
  
  tone(12,tones[0],500);;    
  delay(3000);          //1초 동안 시간 지연

         
  
}