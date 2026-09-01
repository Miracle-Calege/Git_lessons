
 #include<DHT.h>
 #define DHTTYPE DHT11
 DHT termometro(2,DHTTYPE);
 float temperaturaCelsius,temperaturaFahrenheit;
 int botao=3;
 int ligado=0;
 int led=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(botao,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  termometro.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
      if(digitalRead(botao)==HIGH){
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
         ligado++;
      }
      
      if(ligado==1){ 
        delay(1000);  
      iniciarLeitura();
      if(!isnan(temperaturaCelsius) && !isnan(temperaturaFahrenheit)){
        Serial.println(temperaturaCelsius);
        Serial.println(temperaturaFahrenheit);
        delay(2000);
        }
       }else{
          ligado=0;
          
        }
        
      
    }
   



 void iniciarLeitura(){
  temperaturaCelsius=termometro.readTemperature();
  temperaturaFahrenheit=termometro.readTemperature(true);
  }
