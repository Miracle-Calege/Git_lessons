//int leitura1 = 0;
//int leitura2 = 0;
int led=6;
int valor_potenciometro=0;
int brilho=0;

    
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);//determina a velocidade de transferencias de bits entre o computador e o arduino. 9600bps(9600 bits por segundo)
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//  leitura1=analogRead(A0);le os valores das portas analógicas que podem variar de 0(equivale 0 volts) à 1023(equivale 5v).
//
//  if(leitura1 > (leitura2 + 1) || leitura1 < (leitura2 - 1)){// +2 -2 e a variacao dos valores(que escolhemos) do potenciometro.()
//    leitura2 = leitura1;   
//     Serial.println(leitura1);
//  delay(100);
//     
//    }

    valor_potenciometro=analogRead(A0);
    brilho=map(valor_potenciometro,0,1023,0,255);
    analogWrite(led,brilho);

 

}
