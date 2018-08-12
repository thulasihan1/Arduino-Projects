//The purpose of this basic project is create a 10 second timer on a Liquid Crystal Display(LCD).
#include <LiquidCrystal.h> // LCD library is opened
LiquidCrystal x(10,9,5,4,3,2); // A liquid crystal type variable called x is created containing the pins
                               //10,9,5,4,3,2. 
int i; // A integer typer variable called i is created to be used as a counter for the 10 second timer.

void setup() {
  
 x.begin(16,2);  // LCD is activated which contains 16 columns and 2 rows

 x.print("My Timer:"); // LCD prints out "My Timer:" at (0,0). 


}

void loop() {

 for(i=0;i<=10;i++) // A for loop is displayed and starts from 0 and ends at 10 with an increment of 1. 
 {
  x.setCursor(0,1);   //The cursor is placed at the 1st column and 2nd row. 
  x.print("               "); // 16 spces are printed out inorder to clear the LCD and to avoid extra characters to join with in the loop.
  x.setCursor(0,1); //The cursor is placed at the 1st column and 2nd row. 
  x.print(i); // The varfable i is printed out. 
  x.print(" second"); // second is displayed on LCD. 
  delay(1000); // 1 second is held for the loop. 
 }
  

}
