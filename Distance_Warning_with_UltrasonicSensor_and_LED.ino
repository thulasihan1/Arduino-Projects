//The purpose of this project is to monitor the distance between an object and an ultrasonic sensor and if the distance is less than or equal to 5.00 cm a LED will blink. 

float t; // A float type variable t represnts the time delay which is the time for the pulse to hit the object and comeback to the Reciever of Ultrasonic sensor.
float d; // A float type variable d represnts the distance between object and ultasonic sensor.


void setup() {
  Serial.begin(9600); // Serial monitor is activated to monitor the distance.
  pinMode(10,OUTPUT); // Trig Pin of Ultrasonic sensor is activated on pin 10. 
  pinMode(13,INPUT); // Echo pin of Ultrasonic sensor is activated on pin 13. 
   pinMode(7,OUTPUT); // LED is attached to pin 7. 
 
  


}

void loop() {
digitalWrite(10,LOW);
delayMicroseconds(2);     // Writing a pulse to the Trigger pin. 
digitalWrite(10,HIGH);
delayMicroseconds(10);
digitalWrite(10,LOW);

t= pulseIn(13,HIGH); // time delay variable reads the response from the Echo pin. 
d=(t/2.)/29.154;     // Formula for the distance and units is centimeters.
if(d<=5.00)
{
digitalWrite(7,HIGH); //If statement is displayed where a LED will blink if less than or equal to 5.00
delay(120);
digitalWrite(7,LOW);
delay(120);
                }
else 
if(d<5.00)
{
  digitalWrite(7,LOW); // LED is turned off if the the distance is greater than 5.00.
}
Serial.print(d);  // Serial monitor prints out the distance in cm. 
Serial.println(" cm");
delay(1000); // 1 second delay for next result. 


 

}
