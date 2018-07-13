
//The arduino is set up with 2 LED lights that share the same GND node and contain their own respective pin number//



int y1=10; //1st Yellow LED light set up to pin 10//
int y2= 6; //2nd Yellow LED light set up to pin 6//


void setup() {
pinMode(y1,OUTPUT);
pinMode(y2,OUTPUT);

}

void loop() {

analogWrite(y1,20);//1st Yellow LED light contains 0.39V//
analogWrite(y2,255); //2nd Yellow LED light contains 5V//



 
}
