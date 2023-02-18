int dist;
int trig=11;
int echo=10;
int buzzer=9;
int duration;

void setup(){
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(buzzer,OUTPUT);
 Serial.begin(9600);
}

void loop(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  duration=pulseIn(echo,HIGH);
  dist=0.01723*duration;
  

  Serial.println(dist);
  delay(200); 

 
  
   
  
  
}
