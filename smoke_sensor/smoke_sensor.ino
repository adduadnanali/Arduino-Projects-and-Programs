int gas;
int led = 13;
int piezo = 11;
int smoke = 3;
void setup(){
  pinMode(smoke,INPUT);
  pinMode(led,OUTPUT);
  pinMode(piezo,OUTPUT);
  Serial.begin(9600);
  
}
void loop(){
  gas=digitalRead(smoke);
  delay(1000);
  Serial.println(gas);
  if (gas==1){
   digitalWrite(led,HIGH);
   digitalWrite(piezo,HIGH);
  }
  else{
   digitalWrite(led,LOW);
   digitalWrite(piezo,LOW);
  }
}
