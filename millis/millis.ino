unsigned long time;
double distancia;

void setup(){
  Serial.begin(9600);
}
void loop(){
  
  Serial.print("Time: ");
  time = millis();
  
  Serial.println(time);    //prints time since program started
            
}
