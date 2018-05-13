class Pessoa{
  public:
    String nome;
    String sexo; 
    Pessoa(String n,String s){
      nome = n;
      sexo = s;
      } 
};


void setup() {
  Serial.begin(9600);
  delay(1000);
  int chave = 0;
  Pessoa *p = new Pessoa("Icaro","M");
 
  Serial.println(p->nome);
  Serial.println(p->sexo);
  /*while(chave < 100){
    Serial.println(chave);
    chave++;
    }*/
}

void loop(){
}


