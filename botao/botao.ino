void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(10,INPUT);
  digitalWrite(10,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura = digitalRead(10);
  if (leitura == 0){
    digitalWrite(12,1);
    }else{
    digitalWrite(12,0);
      }
}
