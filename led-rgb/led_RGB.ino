int sinalparaoled = 11;   
int pinosensor = 7;   
int leitura=0;     
int estadoled = 0;
int atualizado =0;
 float tempo = 0;
 float ultimoTempo = 0; 
 float diferenca = 0;
void setup() {
 
  Serial.begin(9600);
  delay(1000);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(7,INPUT);

}

void loop() {
  leitura = digitalRead(7);
  if(leitura == 0){
    tempo = millis();
    diferenca = (tempo - ultimoTempo);
    atualizado++;
    digitalWrite(8,1);
    calcVelocidade(diferenca,atualizado);
    }else{
      atualizado =0;
      digitalWrite(8,0);
      ultimoTempo = tempo;
      }
      delay(10);
}

void calcVelocidade(unsigned long tempo, int atualizado){
  int i= 0;
  double cont =0 ;
  double Raio = 0;
  float vel;
  
  if(atualizado == 1){
    Serial.println("Tempo");
    Serial.println(tempo);
    cont++;
    double velocidadeVetor[3] ;
    velocidadeVetor = (Raio * 2*PI/tempo)*1000;
      if(leitura != 1){
        cont=0;
        for(i=0;i<2;i++){
          vel=+velocidadeVetor[i];
          Serial.println("Velecidade(m/s) =");
          Serial.println(vel/N,4);
          }
        }
    }
  }

