 int red=9;
 int green=10;
 int blue=11;
 int botao=8;
 int pressionado=0;
 int count=0;
 
 
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(botao,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  pressionado=digitalRead(botao);

if(pressionado==HIGH){
  count++;
  delay(500);

  switch(count){
    case 1:
    analogWrite(red,255);
    break;

    case 2:
    analogWrite(red,0);
    delay(500);
    analogWrite(green,255);
    break;
    

    case 3:
    analogWrite(green,0);
    delay(500);
    analogWrite(blue,255);
    break;

   default:
    analogWrite(red,0);
    analogWrite(green,0);
    analogWrite(blue,0);
    count=0; 
    break;
  }
 
   }
  
}
