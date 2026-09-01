void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);

}
