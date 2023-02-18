// C++ code
int temp=A0;
int sw=12;
int value1;
int state;

void setup()
{
  pinMode(temp, INPUT);
  pinMode(sw,INPUT);
  Serial.begin(9600);
}

void loop()
{
  value1 = analogRead(temp);
  state = digitalRead(sw);
  if (state==1){
  Serial.println(value1);
  delay(1000);
  }
   
  
}
