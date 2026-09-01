void setup() {
  // Colocamos codigo que executa uma vez
  pinMode(12,OUTPUT);//Determina o funcionamento do pino(OUTPUT/INPUT)
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);//manda uma voltagem para o pino
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(12,LOW);//cessa a voltagem no pino
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
   delay(1000);
}
