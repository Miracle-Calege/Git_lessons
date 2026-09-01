int pinoR=9;//colocamos a numeracao dentro de uma variavel para facilitar a codificacao
int pinoG=10;
int pinoB=11;


void setup() {
  // put your setup code here, to run once:
  pinMode(pinoR,OUTPUT);
  pinMode(pinoG,OUTPUT);
  pinMode(pinoB,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pinoR,255);
  delay(1000);
  analogWrite(pinoR,0);
  delay(1000);
  analogWrite(pinoG,255);
  delay(1000);
  analogWrite(pinoG,0);
  delay(1000);
  analogWrite(pinoB,255);
  delay(1000);
  analogWrite(pinoB,0);
  delay(1000);
  
}
