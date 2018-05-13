String comando;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 
    if(Serial.available()>0){
      comando = Serial.readString();
      Serial.print(comando);
      
     if(comando == "ligar"){
      digitalWrite(8,HIGH);
    }
    if(comando == "desligar"){
      digitalWrite(8,LOW);
    }
  // delay(2000);
      }
    
   
}
