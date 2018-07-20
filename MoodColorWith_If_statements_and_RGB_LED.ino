// The Project is called "Mood colour" and its based on several if statements and a RGB LED that is set up with multiple pins


String x; // x represents the user's input for thier mood



void setup() {
 pinMode(10,OUTPUT); // pin 10 is set up with the red lead of the RGB LED
  pinMode(6,OUTPUT); // pin 6 is set up with the blue lead of the RGB LED
  pinMode(5,OUTPUT); // pin 5 is set up with the green lead of the RGB LED
  Serial.begin(9600); //Serial Monitor is activated in order for the user to communicate
  
}

void loop() {
  Serial.println("What is your mood right now?"); //A message is displayed on serial monitor to question the user
  while(Serial.available()==0)
  {
    
  }
  x=Serial.readString();         // Waiting until the user inputs their statement on Serial Monitor

  if(x=="Happy")
  {
    analogWrite(6, 255);
    Serial.println("Your colour is blue.");
    delay(2000);
    analogWrite(6, 0);
    
    
  }
                                  //Several if statements are created in order for the user to have variety of options to select from,depending on the mood the user selected, 
                                  //the RGB LED will display a specific colour for 2 seconds and the serial monitor will display a message telling the user what their colour is.//
                                  //Combination of analog Voltages with their respetive pins will create the variety of colours within the program.
  if(x=="Angry")
  {
    analogWrite(10, 255);
    Serial.println("Your colour is red.");
    delay(2000);
     analogWrite(10, 0);
    
  }
  
  if(x=="Calm")
  {
    analogWrite(5, 255);
    Serial.println("Your colour is green.");
    delay(2000);
     analogWrite(5, 0);
    
  }
  
  if(x=="Love")
  {
    analogWrite(6, 90);
    analogWrite(10,255);
    Serial.println("Your colour is pink.");
    delay(2000);
    analogWrite(6, 0);
    analogWrite(10,0);
  }
  
  if(x=="Scared")
  {
    analogWrite(6, 170);
    analogWrite(10,100);
    Serial.println("Your colour is purple.");
    delay(2000);
    analogWrite(6, 0);
    analogWrite(10,0);
  }
  
  if(x=="Stressed")
  {
    analogWrite(10,100);
    analogWrite(5,170);
    Serial.println("Your colour is orange.");
    delay(2000);
    analogWrite(10,0);
    analogWrite(5,0);
    
  }



                                                                   
                                                                    }
