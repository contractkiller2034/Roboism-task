int LEd = 13;
int IRinput = 3;
void setup()
{
  pinMode(LEd,OUTPUT);
  pinMode(IRinput,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(IRinput)== LOW)
  {
    digitalWrite(LEd,HIGH);
    
    delay(10);
  }
  else 
  {
    
    digitalWrite(LEd,LOW);
    delay(10);
    
  }
  
}
