/*
  Make an LED glow using push button
  www.quadstore.in
*/

// the setup function runs once when you press reset or power the board

void setup() 
{
  // initialize digital pin 5 as an output
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
