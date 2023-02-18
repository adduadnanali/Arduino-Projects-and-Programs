int en=2;
int in1=4;
int in2=3;
int lm35=A0;
int state;
void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(en,OUTPUT);
  pinMode(lm35,INPUT);
  Serial.begin(9600);
}

void loop()
{
   state = analogRead(lm35);
   if (state>200){
   digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
   Serial.println("forward");
   delay(5000);
   }
   else{
    Serial.println("NO ROTATION");
    delay(2000);
    }
   
 
  
}
