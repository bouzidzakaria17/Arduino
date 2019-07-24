int analogInPin = A5;  // Analog Pin that read the values from the sensor
int ledPin =13; // Pin that control the led to turn on and off.
int sensorValue = 0;   //Initial value for the sensor value

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
    //turn on the Led
    digitalWrite(ledPin,1);
  }
  else
  {
    //turn off the Led
    digitalWrite(ledPin,0);
  }  
}
