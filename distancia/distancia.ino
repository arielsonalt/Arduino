
void setup()  
{  
  Serial.begin(9600);
  delay(1000);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
 
  
}  
   long int tempo=0;
   int s1 = 0;
   int s2 = 0; 
   int s3 = 0;
void loop()  
{  
  Serial.println(tempo);
  if ((tempo%3000) == 0){
    s1 = mudaStatus(s1);
    digitalWrite(8,s1);
  }

  if ((tempo%4000) == 0){
    s2 = mudaStatus(s2);
    digitalWrite(10,s2);
  }

  if ((tempo%5000) == 0){
    s3 = mudaStatus(s3);
    digitalWrite(12,s3);
  }
  tempo+=1000;
  delay(1000);
 
}  

int mudaStatus(int s){
if (s == 0){
  return 1;
  }
  return 0;
}
