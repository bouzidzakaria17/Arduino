int analogInPin = A5;  
int ledPin =13;
int sensorValue = 0;   



void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  Serial.print("sensor = " );
  Serial.println(sensorValue);
  delay(200);
  
  if(sensorValue>600)
  {
    digitalWrite(ledPin,1);
  }
  else
  {
    digitalWrite(ledPin,0);
  }  
}
