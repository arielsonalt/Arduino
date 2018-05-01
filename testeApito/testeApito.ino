void setup() {
  Serial.begin(9600);
  delay(1000);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
 
}

void loop() {
 digitalWrite(13,1);
 delay(1000);
  digitalWrite(13,0);

 digitalWrite(12,1);
 delay(1000);
  digitalWrite(12,0);

 digitalWrite(10,1);
 delay(1000);
  digitalWrite(10,0);

 digitalWrite(8,1);
 delay(1000);
  digitalWrite(8,0);

  
 digitalWrite(10,1);
 delay(1000);
  digitalWrite(10,0);

  digitalWrite(12,1);
  delay(1000);
  digitalWrite(12,0);

  
}
