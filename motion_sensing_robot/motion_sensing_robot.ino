//task_1 automatic robot code.

int en1=2;
int in1=3;
int in2=4;
int en2=5;
int in3=6;
int in4=7;
int trig=8;
int echo =9;
int buzzer=10;
int pirL=12;
int pirR=13;
int dist;
int duration;
int left;
int right;

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

  left = digitalRead(pirL);
  right = digitalRead(pirR);

   if (dist<100){
     digitalWrite(buzzer,HIGH);
     digitalWrite(en1,LOW);// left motor off
     digitalWrite(in1,LOW);
     digitalWrite(in2,LOW);

     digitalWrite(en2,LOW);//right motor off
     digitalWrite(in3,LOW);
     digitalWrite(in4,LOW);

  }

  else if(left==1){ //right motor on and left motor off 
     digitalWrite(en1,LOW);// left motor turned off 
     digitalWrite(in1,LOW);
     digitalWrite(in2,LOW);

     digitalWrite(en2,HIGH);//right motor turns on to move robot to left
     digitalWrite(in3,HIGH);
     digitalWrite(in4,LOW);
    
    }

   else if(right==1){ //right motor off and left motor on
     digitalWrite(en1,HIGH);// left motor turned onn to move motor to right
     digitalWrite(in1,HIGH);
     digitalWrite(in2,LOW);

     digitalWrite(en2,LOW);//right motor turns off 
     digitalWrite(in3,LOW);
     digitalWrite(in4,LOW);
    
    }
  
  else{
      digitalWrite(buzzer,LOW);
     digitalWrite(en1,HIGH);
     digitalWrite(in1,HIGH);
     digitalWrite(in2,LOW);

     digitalWrite(en2,HIGH);
     digitalWrite(in3,HIGH);
     digitalWrite(in4,LOW);
    
    
    
  }
   }
