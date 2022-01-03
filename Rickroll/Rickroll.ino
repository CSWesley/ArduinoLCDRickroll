//www.elegoo.com
//2016.12.9

/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

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

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.

  // During intro say: Never gonna give you up by rick astley (or something)

  lcd.print("Never Gonna Give");
  lcd.setCursor(0, 1);
  lcd.print("You Up.");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("By Rick Astley");

  // Delay amount of seconds from the begining of the song (intro) to when the lyrics start.
  
  delay(5000); // Putting 5 for now.

  // Starting here:

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

  // Say thank you at the end
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Thank you for");
  lcd.setCursor(0, 1);
  lcd.print("your time!");
  delay(7000);
  lcd.clear();

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
}
