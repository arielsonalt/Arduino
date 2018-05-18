int sinalparaoled = 8; //Pino do led  
int pinosensor = 7;   //Ligado ao pino "coletor" do sensor óptico  
int leitura;      //Armazena informações sobre a leitura do sensor  
int estadoled = 0;   //Armazena o estado do led (ligado/desligado)  
   
void setup()  
{  
  Serial.begin(9600);
  delay(1000);
  pinMode(sinalparaoled, OUTPUT); //Define o pino do led como saida   
  pinMode(pinosensor, INPUT);   //Define o pino do sensor como entrada
  
}  
   
void loop()  
{  
  //Le as informações do pino do sensor
  leitura = digitalRead(pinosensor);
  Serial.println(leitura);   
  if (leitura != 1) //Verifica se o objeto foi detectado  
  {  
    while(digitalRead(pinosensor) != 1)  
    {  
     delay(100);  
    }  

    //Inverte o estado do led (ligado / desligado) 
    estadoled = !estadoled; 

    //Liga ou desliga o led conforme "estadoled" 
    digitalWrite(sinalparaoled, estadoled);
   
    
  }   
}  
