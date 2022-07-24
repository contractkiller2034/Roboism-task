
int triggerPin = A0;
int recieverPin = A2;
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
