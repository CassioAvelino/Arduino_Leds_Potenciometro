int valorLido = 0;
float tensao = 0;
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;

void setup()
{
  Serial.begin(9600);//configuração da velocidade de transmissão
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}


void loop()
{
  valorLido = analogRead(A5); //Ler o valor da tensão na entrada A5
  tensao = valorLido *(5.0/1023.0);
  Serial.println(tensao);
  
  if (tensao >= 0.0 && tensao <= 1.0){
  	digitalWrite(led5, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led1, LOW);
  	delay(valorLido);
  }
  else if (tensao >= 1.01 && tensao <= 2.0){
  	digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led1, LOW);
  	delay(valorLido);
  }
  else if (tensao >= 2.01 && tensao <= 3.0){
  	digitalWrite(led3, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led1, LOW);
  	delay(valorLido);
  }
  else if (tensao >= 3.01 && tensao <= 4.0){
  	digitalWrite(led2, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led1, LOW);
  	delay(valorLido);
  }
  else {
  	digitalWrite(led1, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led2, LOW);
  	delay(valorLido);
  }
}