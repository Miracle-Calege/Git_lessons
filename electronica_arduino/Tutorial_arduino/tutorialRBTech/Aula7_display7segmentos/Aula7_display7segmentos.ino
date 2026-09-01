int segA=3,segB=4,segC=5,segD=6,segE=7,segF=8,segG=9;

int num[10][7]= {
   {segA,segB,segC,segD,segE,segF},//zero
   {segB,segC},//um
    {segA,segB,segD,segE,segG},//dois
    {segA,segB,segC,segD,segG},//tres
    {segG,segB,segC,segF},//quatro
    {segA,segF,segG,segC,segD},//cinco
    {segA,segF,segG,segC,segD,segE},//seis
    {segA,segC,segB},//sete
    {segA,segC,segB,segG,segD,segE,segF},//oito
    {segA,segC,segB,segG,segD,segF},//nove
  };

void setup() {
  // put your setup code here, to run once:
  pinMode(segA,OUTPUT);
  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);
  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);
  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<10;i++){
  apagar();
  numero(i);
  delay(1000);
  }

  
}

void apagar(){
  digitalWrite(segA,LOW);
   digitalWrite(segC,LOW);
   digitalWrite(segB,LOW);
   digitalWrite(segD,LOW); 
   digitalWrite(segE,LOW)  ;
   digitalWrite(segF,LOW);
   digitalWrite(segG,LOW)  ;
  }

  void numero(int n){
    for(int i=0;i<7;i++){
      digitalWrite(num[n][i],HIGH);
      }
    }
