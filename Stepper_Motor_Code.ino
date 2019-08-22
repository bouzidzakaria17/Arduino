// defines pins numbers

const int stepPin = 3;
const int dirPin = 6;
int ledPin= 13;

void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {

  
  digitalWrite(dirPin, HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for (int x = 0; x < 200; x++) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);

  }
  delay(2000); // One second delay

    digitalWrite(dirPin, LOW); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for (int x = 0; x < 400; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  digitalWrite(ledPin, HIGH);
  }
  delay(2000);

}
