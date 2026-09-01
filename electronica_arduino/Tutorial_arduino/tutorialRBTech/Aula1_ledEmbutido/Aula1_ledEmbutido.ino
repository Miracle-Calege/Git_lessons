void setup() {
  // colocamos as instrucoes que queremos que executem uma vez
  pinMode(13,OUTPUT);//(numero do pin,tipo de operacao(I/O))

}

void loop() {
    // colocamos as instrucoes que queremos que executem varias vezes enquanto a placa estiver ligada
    digitalWrite(13,HIGH);//(numero do pin,retorno), HIGH->liga ,LOW->desliga
     delay(1000);//o intervalo/pausa entre os comandos(milissegundos)
     digitalWrite(13,LOW);  
     delay(1000);
}
