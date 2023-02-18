
int in1=6;
int in2=7;
int ir=13;
int state;
void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(ir,INPUT);
  Serial.begin(9600);
}

void loop()
{
   state=digitalRead(ir);
   if (state==0){
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   Serial.println("stop");
   }
   else{
   digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
   Serial.println("forward");
   }
   
 
  
}
