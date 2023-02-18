int state;
int ldr = 3;
int relay = 8;

void setup(){
  pinMode(ldr,INPUT);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
  digitalWrite(relay,HIGH);
 }
void loop(){
  state=digitalRead(ldr);
  if (state==1){
   digitalWrite(relay,LOW);
   Serial.println("LIGHT ON!");
   delay(1000);
  }
  else{
   digitalWrite(relay,HIGH);
   
   Serial.println("LIGHT OFF ");
   delay(1000); 
  }
}
