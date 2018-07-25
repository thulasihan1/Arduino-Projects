// The purpose of the project is to have a potentiometer control the position of a servo motor. 
//The servo motor contains a scale from (0 to 180 degrees) and the potentiometer contains a scale from (0 to 1023 units). 
#include<Servo.h> //Servo library is activated. 
Servo y; //y is a servo variable to activate the servo motor. 
int x; // x is a variable that reads the values from potentiometer. 
int c; //c is a variable that converts the potentiometer's scale to the servo motor's scale. 


void setup() {
  y.attach(9); // Servo motor is set up on pin 9. 
  Serial.begin(9600); //Serial monitor is activated.
  pinMode(A0,INPUT); //Potenitometer is set up on analog pin A0.  
 

}

void loop() {
x= analogRead(A0); //x reads the value of potentiometer. 

c= x*(180./1023.); // A scale from (0 to 1023) is converted to (0 to 180). 
Serial.println(c); // c is a scale from (0 to 180) and is displayed on the serial monitor. 
y.write(c); // The value of c is reflected upon the position of servo monitor. 


 
}
