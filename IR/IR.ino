#include<WiFi.h>
int ir=13;
int led=15;
int buzzer=12;
int state;

void setup(){
  pinMode(ir,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  }
void loop(){
  state=digitalRead(ir);
  if (state==0){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(5000);
    }
   else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    }
  }
  
