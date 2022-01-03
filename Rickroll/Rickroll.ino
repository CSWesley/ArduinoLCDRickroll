/*
  The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Note when using the setCursor() method, the first parameter is the column number and the second parameter is the row number.
  
  // Also, counting starts at 0, so top left is (0, 1). Almost as confusing as the Java Swing setLocation() method because of its reversed/flipped cartesian system.

  lcd.print("Never Gonna Give");
  lcd.setCursor(0, 1);
  lcd.print("You Up.");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Credits to Rick Astley");

  // Delay amount of seconds from the begining of the song (intro) to when the lyrics start. (Not 5 seconds as displayed here)
  delay(5000); 

  // Starting song here:

  lcd.clear();
  lcd.print("We're no");
  lcd.setCursor(0, 1);
  delay(600);
  lcd.print("strangers to");
  delay(800);
  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.print("     love.");
  
  delay(2500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("You know the");
  lcd.setCursor(0, 1);
  delay(800);
  lcd.print("rules and ");
  delay(1200);
  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.print("so do I.");

  delay(2500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("A full");
  lcd.setCursor(0, 1);
  lcd.print("commitment's");
  delay(800);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("what I'm");
  lcd.setCursor(0, 1);
  delay(800);
  lcd.print("thinking of.");


  delay(2300);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("You wouldn't get");
  lcd.setCursor(0, 1);
  delay(600);
  lcd.print("this from ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.print("any other guy.");

  delay(2300);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("I... just want");
  lcd.setCursor(0, 1);
  delay(2000);
  lcd.print("to tell you how");
  delay(1300);
  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.print("I'm feeling.");

  delay(2000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Gotta make you");
  delay(1300);
  lcd.setCursor(0, 1);
  lcd.print("understand.");

  delay(1100);
  lcd.clear();

  lcd.clear();
  lcd.print("Never gonna");
  delay(650);
  lcd.clear();
  lcd.print("Never gonna give");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(400);
  lcd.setCursor(4, 1);
  lcd.print("up.");
  delay(750);

  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.print("Never gonna");
  delay(650);
  lcd.clear();
  lcd.print("Never gonna let");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(400);
  lcd.setCursor(4, 1);
  lcd.print("down.");
  delay(750);

  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.print("Never gonna");
  delay(550);
  lcd.clear();
  lcd.print("run around");
  delay(1250);
  lcd.setCursor(0, 1);
  lcd.print("and desert you.");
  delay(2500);

  lcd.clear();
  lcd.print("Never gonna");
  delay(550);
  lcd.clear();
  lcd.print("Never gonna make");
  delay(400);
  lcd.setCursor(0, 1);
  lcd.print("you");
  delay(400);
  lcd.setCursor(4, 1);
  lcd.print("cry.");
  delay(750);

  lcd.clear();
  lcd.print("Never gonna");
  delay(550);
  lcd.clear();
  lcd.print("Never gonna say");
  delay(800);
  lcd.setCursor(0, 1);
  lcd.print("goodbye...");
  delay(800);

  lcd.clear();
  lcd.print("Never gonna");
  delay(550);
  lcd.clear();
  lcd.print("Never gonna tell");
  lcd.setCursor(0, 1);
  lcd.print("a lie");
  delay(1500);
  lcd.setCursor(6, 1);
  lcd.print("and hurt");
  delay(400);
  lcd.clear();
  lcd.print("you.");
  delay(5000);
  
  // Clear at end of song.
  
  lcd.clear();

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
}
