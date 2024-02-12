//ARDUINO LINE FOLLOWING CAR - QUAD Robotics - A unit of Quad Store//
//www.quadstore.in

// YOU HAVE TO INSTALL THE AFMOTOR LIBRARY BEFORE UPLOAD THE CODE//
// GO TO SKETCH >> INCLUDE LIBRARY >> ADD .ZIP LIBRARY >> SELECT AF MOTOR ZIP FILE //


//including the libraries
#include <AFMotor.h>

//defining pins and variables
#define rightLS A0
#define leftLS A5

//defining motors
AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);



void setup() {
  //Setting the motor speed
  motor1.setSpeed(120);
  motor2.setSpeed(120);
  motor3.setSpeed(120);
  motor4.setSpeed(120);
  //Declaring PIN input types
  pinMode(rightLS,INPUT);
  pinMode(leftLS,INPUT);
  //Begin serial communication
  Serial.begin(9600);
  
}

void loop(){
  //Printing values of the sensors to the serial monitor
  Serial.println(analogRead(rightLS));
  Serial.println(analogRead(leftLS));
  //line detected by both
  if(analogRead(rightLS)<=350 && analogRead(leftLS)<=350){
    //Forward
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
  }
  //line detected by left sensor
  else if(analogRead(rightLS)<=350 && !analogRead(leftLS)<=350){
    //turn left
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);
    
  }
  //line detected by right sensor
  else if(!analogRead(rightLS)<=350 && analogRead(leftLS)<=350){
    //turn right
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
   
  }
  //line detected by none
  else if(!analogRead(rightLS)<=350 && !analogRead(leftLS)<=350){
    //stop
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
   
  }
  
}
