/*
  Making an LED glow using the bluetooth module HC-05.
  www.quadstore.in
*/

void setup() {
Serial.begin(9600);
Serial.println("Bluetooth");
 pinMode(13, OUTPUT); // put your setup code here, to run once:
 }

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'x': digitalWrite(13, HIGH);break; // when a is pressed on the app on your smart phone LED turns ON
        case 'y': digitalWrite(13, LOW);break; // when b is pressed on the app on your smart phone LED turns OFF
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
