int state;
int ldr = 2;
int led = 13;
int piezo=12;

void setup(){
  pinMode(ldr,INPUT);
  pinMode(piezo,OUTPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
 }
void loop(){
  state=digitalRead(ldr);
  if (state==1){
   digitalWrite(led,HIGH);
   digitalWrite(piezo,HIGH);
   Serial.println("LIGHT ON!");
  }
  else{
   digitalWrite(led,LOW);
   digitalWrite(piezo,LOW);
   Serial.println("LIGHT OFF ");
  }
}
