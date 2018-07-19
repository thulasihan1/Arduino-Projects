
//The purpose of this project is to retrieve analog voltages from a potenitiometer and taking those 
//voltages upon the brightness of the LED. The potenitiometer circuit is sperate from the circuit of
//the LED. The function analogRead(); contains a conversion of 5V=1023units and the conversion for 
//analogWrite(); contains a conversion of 5V=255. 

int x; //x is a variable that will retrieve the value from the potentiometer. 
float c; // c is a variable that will convert the scale from (0 to 1023) to (0 to 255) inorder for anaolgWrite 
          //to be compatible. 
float w; //w is a variable that will conver the scale from (0 to 255) to (0 to 5) in order for the user to understand the 
/        //amount of voltage entering the LED light.
void setup() {
pinMode(A0,INPUT);//Pin A0 is setup and connected to potentiometer.
pinMode(9,OUTPUT); //Pin 9 is set up and connected to the LED. 
Serial.begin(9600); //Serial Monitor is activated in order for the user to indicate what analog voltages
                     // are entering the LED.

}

void loop() {
  x=analogRead(A0); //x retrieves the value from potentiometer within the scale of (0 to 1023). 
  c= x*(255./1023.); // Scale of (0 to 1023) is converted into a scale of (0 to 255). 
  w= c*(5./255.); //Scale of (0 to 255 is converted into a scale of (0 to 5)
  analogWrite(9,c); // LED is activated with a voltage of c. 
  delay(1000); //wait for 1 second. 
  Serial.println(w); // Analog voltage will be displayed on Serial monitor with a scale of (0 to 5). 
  

 

}
