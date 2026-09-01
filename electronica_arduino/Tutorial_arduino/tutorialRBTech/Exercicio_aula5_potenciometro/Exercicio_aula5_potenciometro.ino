int red=8;
int yellow=9;
int green=10;
int potenciometro=0;
int segundos=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  potenciometro=analogRead(A0);
  segundos=map(potenciometro,0,1023,2000,200);
  digitalWrite(red,HIGH);
  delay(segundos);
  digitalWrite(red,LOW);
   digitalWrite(yellow,HIGH);
  delay(segundos);
  digitalWrite(yellow,LOW);
   digitalWrite(green,HIGH);
  delay(segundos);
  digitalWrite(green,LOW);

}
