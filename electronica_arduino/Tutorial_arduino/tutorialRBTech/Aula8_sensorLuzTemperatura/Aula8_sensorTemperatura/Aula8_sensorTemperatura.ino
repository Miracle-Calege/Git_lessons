  #include<DHT.h>
  #define DHTTYPE DHT11//define o tipo de sensor
  DHT dht(2,DHTTYPE);//cria um objecto de nome dht(numero pino digital,e o tipo de sensor)

  float temperaturaCelsius;
  float temperaturaFahrenheit;

void setup() {
  dht.begin();//inicializa o sensor
  Serial.begin(9600);

}

void loop() {
  
temperaturaCelsius=dht.readTemperature();//retorna temperatura em celsius
temperaturaFahrenheit=dht.readTemperature(true);//retorna temperatura em fahrenheit

if(isnan(temperaturaCelsius) || isnan(temperaturaFahrenheit)){
  Serial.println("Falha na leitura");
  return;
  }
  
  Serial.print("Temperatura em celsius:");
  Serial.print(temperaturaCelsius);
  Serial.print("°C");
  Serial.println();
  Serial.print("Temperatura em fahrenheit:");
  Serial.print(temperaturaFahrenheit);
  Serial.print("°F");
  Serial.println();
  delay(2000);
 
 

}
