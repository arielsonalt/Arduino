unsigned long leitura;
void setup() {
  Serial.begin(9600);
  
}

void loop() {
  delay(100);
  leitura = analogRead(0);
  leitura = leitura /10;
  Serial.println(leitura);
}
