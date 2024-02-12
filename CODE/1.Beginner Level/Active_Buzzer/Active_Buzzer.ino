// Active Buzzer - Will have a label on top and sealed completely at the bottom side. Remove the label before use.
//www.quadstore.in

void setup() 
{
  // initialize digital pin 5 as an output
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);   // turn the buzzer on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(5, LOW);    // turn the buzzer off by making the voltage LOW
  delay(1000);              // wait for a second
}
