
//The design of this project contains 3 series circuits of 3 LED lightswith 220 ohm resistors//

int b=13,w=12,r=7; //Blue LED is allocated to pin 13 of the arduino,White LED is 12, and Red LED is 7//
void setup() {
  pinMode(b,OUTPUT);
  pinMode(w,OUTPUT);
  pinMode(r,OUTPUT);
  


}

void loop() {
digitalWrite(b,HIGH); //The void loop contains a sequential pattern of blinking from the blue LED to the white LED and to the red LED//
delay(150);
digitalWrite(b,LOW);
 
digitalWrite(w,HIGH);
delay(150);
digitalWrite(w,LOW);
      
digitalWrite(r,HIGH);
delay(150);
digitalWrite(r,LOW);

}
