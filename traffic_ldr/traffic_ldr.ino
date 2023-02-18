int led=2;
int ldr=13;
int state;

void setup(){
   pinMode(led,OUTPUT);
   
   pinMode(ldr,INPUT);
  }

 void loop(){
  state=digitalRead(ldr);
  if (state==1){
    digitalWrite(led,HIGH);
    }
  else{
    digitalWrite(led,LOW);
    }
  }
