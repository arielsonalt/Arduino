void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(8,OUTPUT);
  delay(1000);
   
}
  
void loop() {
 float valorLido = analogRead(0);
  delay(1000);
if(valorLido<700)
{digitalWrite(8,1);}
else{digitalWrite(8,0);}
    float luminosidade = valorLido;
    Serial.print("Valor de luminosidade: ");
    Serial.println(luminosidade);
}
