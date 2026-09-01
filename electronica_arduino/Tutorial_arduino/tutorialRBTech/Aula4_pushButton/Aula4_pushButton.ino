 int led=2;//pino na placa de arduino(orificio 2)
 int botao=3;//pino na placa de arduino(orificio 3)
 int pressionado=0;//variavel que vai receber bits quando o push button for pressionado
 int ligado=0; // 0=desligado e 1=ligado
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  pressionado=digitalRead(botao);

//  if(pressionado==HIGH){ acende quando o botao e pressionado e desliga-se apos 2segundos
//    digitalWrite(led,HIGH);
//    delay(2000) ;
//   
//    }else{
//      digitalWrite(led,LOW);
//      }

if(pressionado==HIGH){
    delay(500);// tempo de espera depois de receber o sinal(para evitar que o arduino entenda mal o sinal quando o push button esteja a ser pressionado continuamente de uma so vez)
    switch(ligado){
      case 0:
       digitalWrite(led,HIGH);
       ligado=1;
       break;
       case 1:
       digitalWrite(led,LOW);
       ligado=0;
       break;
      }
    }
}
