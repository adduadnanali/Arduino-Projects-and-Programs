int motion;
int pir = 10;
int piezo = 13;


void setup(){
  pinMode(pir,INPUT);
  pinMode(piezo,OUTPUT);
  
  Serial.begin(9600);
 }
void loop(){
  motion=digitalRead(pir);
  if (motion==1){
   digitalWrite(piezo,HIGH);
   delay(1000);
   Serial.println("MOTION DETECTED");
   delay(1000);
  }
  else{
   
   digitalWrite(piezo,LOW);
   Serial.println("NO MOTION ");
   delay(1000);
  }
}
