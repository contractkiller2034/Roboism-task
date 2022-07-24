For LDR Sensor;

int lightpin = A0;
int lightvalue;
int delayvalue;
void setup() {
  pinmode(lightpin, INPUT);
  Serial.begin(9600);


}

void loop() {
  lightvalue = analogRead(lightpin);
  Serial.println(lightvalue);
  delay(delayvalue);
}


For Ultrasonic Sensor;

int triggerPin = 11;
int recieverPin = A0;
long duration;
int distance; 

void setup() {
  pinMode(triggerPin, OUTPUT); 
  pinMode(recieverPin, INPUT); 
  Serial.begin(9600); 
 
}
void loop() {
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(4);
   
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(15);
  digitalWrite(triggerPin, LOW);
  
  duration = pulseIn(recieverPin, HIGH);
   
  distance = duration * 0.034 / 2;
   
  Serial.print("Distance: ");
  Serial.print(distance);
}


For Infrared Sensor;

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
