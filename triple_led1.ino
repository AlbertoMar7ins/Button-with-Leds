int Pinobotao =4;
int Pinobotao2 =2;
int Pinobotao3 =3;

int Pinoled = 13;
int Pinoled2 = 12;
int Pinoled3 = 11;

int EstadoBotao = 0;
int EstadoBotao2 = 0;
int EstadoBotao3 = 0;

void setup()
{
  pinMode(Pinoled, OUTPUT);
  pinMode(Pinobotao, INPUT);
   pinMode(Pinobotao2, INPUT);
   pinMode(Pinobotao3, INPUT);
  pinMode(Pinoled2, OUTPUT);
  pinMode(Pinoled3, OUTPUT);
}

void loop()
{

  if(EstadoBotao2 = digitalRead(Pinobotao2)){
    EstadoBotao == HIGH;
    digitalWrite (Pinoled, HIGH);
    digitalWrite (Pinoled2, LOW);
    digitalWrite (Pinoled3,LOW);
  
  }
  else if(EstadoBotao = digitalRead(Pinobotao)){
  digitalWrite (Pinoled, LOW);
    digitalWrite (Pinoled2, LOW);
    digitalWrite (Pinoled3, HIGH);
  }
  else if(EstadoBotao3 = digitalRead(Pinobotao3)){
  digitalWrite (Pinoled, LOW);
    digitalWrite (Pinoled2, HIGH);
    digitalWrite (Pinoled3, LOW);
  }
  else{
   digitalWrite (Pinoled, LOW);
    digitalWrite (Pinoled3,LOW); 
    digitalWrite (Pinoled2,LOW);
  }
}




