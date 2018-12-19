/*The purpose of this projects is to demonstrate a software interrupt by blinking a red led for 150 ms and at the same time blink a yellow LED for 1 second */

 #include <TimerOne.h>

  int i=0;                  /* for loop counter */
int r = 13;               /*red led pin variable*/
int y = 11;                 /*Yellow led pin variable*/
String LEDstatus = "OFF";   /*Status of Yellow LED*/



void setup() {
  pinMode(r, OUTPUT);  
  pinMode(y, OUTPUT);               
  Timer1.initialize(1000000);   /* Defining a software interrupt*/
  Timer1.attachInterrupt(Hello); /* Every second, the arduino will call a function called Hello to do a certain task*/




}

void loop() {

  digitalWrite(r, HIGH);      /*Blinking Red led for 150 ms*/
  delay(150);
  digitalWrite(r, LOW);
  delay(150);
}





void Hello() {                               
  if (LEDstatus == "OFF")         /*Hello function contains If statements that depend on the LEDstatus of Yellow light and function is called every second*/
  {
    digitalWrite(y, HIGH);
    LEDstatus = "ON";

  }

  if (LEDstatus == "ON")
  {
    digitalWrite(y, LOW);
    LEDstatus = "OFF";
  }
    return 0; 

}




