void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    char recebido = Serial.read();
    if (recebido = 't'){
      int valorLido = analogRead(0);
      float temperatura = (valorLido * 0.00488)*100;
      Serial.print("Temperatura: ");
      Serial.println(temperatura);
      }
    }
}
