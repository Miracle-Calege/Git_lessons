int a=2,b=3,c=4,d=5,e=6,f=7,g=8;
int bt1=13,bt2=12,bt3=11;
int lig1=0,lig2=0,lig3=0;
int som=9;

int numeros[10][7]={
  {a,b,c,d,e,f},
  {b,c},
  {a,b,d,e,g},
  {a,b,c,d,g},
  {b,c,g,f},
  {a,f,g,c,d},
  {a,c,d,e,f,g},
  {a,b,c},
  {a,b,c,d,e,f,g},
  {a,b,c,d,f,g}
  };

  int letras[8][7]={
    {a,b,c,d,e,f},
    {f,g,c,e,d},
    {a,f,d,e},
    {b,c,d,e,g},
    {a,b,g,f,e,d},
    {f,g,e,c},
    {e,g,c},
    {f,g,b},
    };

int melody[] = {
  392,392,440,392,523,494,
  392,392,440,392,587,523,
  392,392,784,659,523,494,440,
  698,698,659,523,587,523
};

int duration[] = {
  250,250,500,500,500,1000,
  250,250,500,500,500,1000,
  250,250,500,500,500,500,1000,
  250,250,500,500,500,1000
};

void setup(){
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
   pinMode(c,OUTPUT);
   pinMode(d,OUTPUT);
   pinMode(e,OUTPUT);
    pinMode(f,OUTPUT);
    pinMode(g,OUTPUT); 
    pinMode(bt1,INPUT);
    pinMode(bt2,INPUT);
    pinMode(bt3,INPUT);
     pinMode(som,OUTPUT);
   
  }

  void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(bt1)==HIGH){
  delay(500);
   lig2=0;
   lig3=0;
  switch(lig1){
   case 0:
   geradorNumero();
   lig1=1;
   break;
   case 1:
   apagar();
   lig1=0;
   break;
    } 
  }
  if(digitalRead(bt2)==HIGH){
  delay(500);
   lig1=0;
   lig3=0;
  switch(lig2){
   case 0:
   inversoNumeros();
   lig2=1;
   break;
   case 1:
   apagar();
   lig2=0;
   break;
    }
     }
     
  if(digitalRead(bt3)==HIGH){
  delay(500);
   lig1=0;
   lig2=0;
   
  switch(lig3){
   case 0:
   geradorLetras();
   lig3=1;
   break;
   case 1:
   apagar();
   lig3=0;
   break;
    } 
  }
 
}



    void apagar(){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      
      }


    void inversoNumeros(){
         for(int i=9;i>=0;i--){
          apagar();
    for(int j=0;j<7;j++){
      digitalWrite(numeros[i][j],HIGH);
      }
      delay(1000);
    }
    emitirSom();
      }

      void geradorNumero(){
        for(int i=0;i<10;i++){
          apagar();
    for(int j=0;j<7;j++){
      digitalWrite(numeros[i][j],HIGH);
      }
      delay(1000);
    }
      }

      void geradorLetras(){
           for(int i=0;i<8;i++){
          apagar();
    for(int j=0;j<7;j++){
      digitalWrite(letras[i][j],HIGH);
      }
      delay(1000);
    }
        }

        void emitirSom(){
            for(int i=0; i<25; i++){
    tone(som, melody[i], duration[i]);
    delay(duration[i] + 50);
  }
          }
      
