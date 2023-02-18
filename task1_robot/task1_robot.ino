int en1=2;
int en2=7;
int in1=3;
int in2=4;
int in3=6;
int in4=5;
int dist;
int echo =10;
int trig=11;
int duration;
int buzzer=13;
void setup()
{
  pinMode(buzzer,OUTPUT);
  pinMode(in1,OUTPUT);
  
  pinMode(in2,OUTPUT);
  pinMode(en1,OUTPUT);
  
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(en2,OUTPUT);
  
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

  pinMode(trig,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  duration=pulseIn(echo,HIGH);
  dist=0.01723*duration;

   if (dist<100){
     digitalWrite(buzzer,HIGH);
     digitalWrite(en1,HIGH);
     digitalWrite(in1,HIGH);
     digitalWrite(in2,LOW);

     digitalWrite(en2,HIGH);
     digitalWrite(in3,HIGH);
     digitalWrite(in4,LOW);

  }
  
  else{
      digitalWrite(buzzer,LOW);
     digitalWrite(en1,LOW);
     digitalWrite(in1,LOW);
     digitalWrite(in2,LOW);

     digitalWrite(en2,LOW);
     digitalWrite(in3,LOW);
     digitalWrite(in4,LOW);
    
    
    
  }
   }
