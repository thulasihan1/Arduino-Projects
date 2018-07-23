
// The purpose of this project is to allow the user to input angle values in order to control a servo motor's position. 


#include<Servo.h> //Servo library is activated.
Servo y;   // y is a servo variable to activate the servo motor. 
int x; // x is the variable where user input's the angle value. 

void setup() {
  y.attach(9); //Servo motor is activated on pin 9. 
  Serial.begin(9600); //Serial Monitor is activated in order for the user to communicate. 

}

void loop() {
  while (Serial.available() == 0)
  {

  }
  x = Serial.parseInt(); //Waiting for user to input angle value on serial monitor. 
  y.write(x); //Angle sent by the user will be displayed on the servo motor. 
}
