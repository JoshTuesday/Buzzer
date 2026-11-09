void setup() {                
  // initialize D2 port as output.
  pinMode(2, OUTPUT);     
}

void loop() {
  digitalWrite(2, HIGH);    // make the Buzzer sound
  delay(500);              // wait for a second
  digitalWrite(2, LOW);     // set the Buzzer off
  delay(500);              // wait for a second
}