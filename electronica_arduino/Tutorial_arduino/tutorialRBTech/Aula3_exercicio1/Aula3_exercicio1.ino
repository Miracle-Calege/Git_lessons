void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  geradorCores(255,0,0);
  delay(1000);
  geradorCores(0,255,0);
  delay(1000);
  geradorCores(0,255,255);
  delay(1000);
   geradorCores(0,0,0);
  delay(1000);
   geradorCores(128,128,128);
  delay(1000);
   geradorCores(128,0,128);
  delay(1000);
  
  
}

void geradorCores(int red, int green, int blue){
  analogWrite(9,red);
  analogWrite(10,green);
  analogWrite(11,blue);
  }
