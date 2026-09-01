void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  analogWrite(10,255);
  delay(5000);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  analogWrite(10,0);
  analogWrite(9,255);
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH); 
  delay(5000);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  

}
