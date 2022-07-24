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
