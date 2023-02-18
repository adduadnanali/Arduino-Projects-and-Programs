
int soil=A0;
int value1;
int buzzer=13;
int in1=6;
int in2=7;
int state;
void setup(){
 pinMode(soil,INPUT);
 pinMode(buzzer,OUTPUT);
 pinMode(in1,OUTPUT);
 pinMode(in2,OUTPUT);
  
 Serial.begin(9600);
}
void loop(){
 value1=analogRead(soil);
 Serial.println("soil moisture: ");
 Serial.println(value1);
 delay(1000);


   if (value1<800){
   digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
   Serial.println("LOW MOISTURE");
   }
    else{
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   Serial.println("STOP");
   }
   
  
 
}
