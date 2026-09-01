
int buzzer=10;

void setup() {
  // put your setup code here, to run once:

  pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(buzzer,HIGH);
//  delay(150);
//  digitalWrite(buzzer,LOW);
//  delay(2000);

//usando a funcao tone()


tone(buzzer,1500);
delay(200);
tone(buzzer,2000);
delay(200);
//noTone(buzzer);

}
