  int botao=8;
  int led=9;
  int buzzer=10;
  int pressionado=0;
  int ligado=0;
  
void setup() {
  // put your setup code here, to run once:

  pinMode(botao,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  pressionado=digitalRead(botao);

  if(pressionado==HIGH){
    delay(500);
    if(ligado==0){
      digitalWrite(led,HIGH);
      tone(buzzer,1500);
      delay(200);
      tone(buzzer,2000);
      delay(200);
        ligado=1;
      }else if(ligado==1){
       digitalWrite(led,LOW);
       noTone(buzzer);
      ligado=0;
        }
   
    }


  

}
