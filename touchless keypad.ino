
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int one = 0;
const int two = 1;
const int three = 6;
const int four = 7;
const int five = 8;
const int six = 9;
const int seven = 10;
const int eight = 13;
 int onestate=0;
 int twostate=0;
 int threestate=0;
 int fourstate=0;
 int fivestate=0;
 int sixstate=0;
 int sevenstate=0;
 int eightstate=0; 
 int total=0;
void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
pinMode(one, INPUT);
pinMode(two, INPUT);
pinMode(three, INPUT);
pinMode(four, INPUT);
pinMode(five, INPUT);
pinMode(six, INPUT);
pinMode(seven, INPUT);
pinMode(eight, INPUT);

}
 
void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  onestate = digitalRead(one);
  twostate = digitalRead(two);
  threestate = digitalRead(three);
  fourstate = digitalRead(four);
  fivestate = digitalRead(five);
  sixstate = digitalRead(six);
  sevenstate = digitalRead(seven);
  eightstate = digitalRead(eight);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (onestate == LOW && twostate == HIGH && threestate == HIGH && fourstate == HIGH && fivestate == LOW && sixstate == HIGH && sevenstate == HIGH && eightstate == HIGH){
  total=total+1;
  lcd.print("1");
  delay(650);
  }
  else if (onestate == LOW && twostate == HIGH && threestate == HIGH && fourstate == HIGH && fivestate == HIGH && sixstate == LOW && sevenstate == HIGH && eightstate == HIGH){
  total=total+1;
  lcd.print("2");
  delay(650);
  }
  else if (onestate == LOW && twostate == HIGH && threestate == HIGH && fourstate == HIGH && fivestate == HIGH && sixstate == HIGH && sevenstate == LOW && eightstate == HIGH){
  total=total+1;
  lcd.print("3");
  delay(650);
  }
  else if (onestate == HIGH && twostate == HIGH && threestate == LOW && fourstate == HIGH && fivestate == HIGH && sixstate == HIGH && sevenstate == HIGH && eightstate == LOW){
  lcd.clear();
  lcd.print("    ENTER");
  delay(650);
  lcd.clear();
  lcd.print("Correct Password");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  total=0;
  }
  else if (onestate == HIGH && twostate == LOW && threestate == HIGH && fourstate == HIGH && fivestate == LOW && sixstate == HIGH && sevenstate == HIGH && eightstate == HIGH){
  total=total+1;
  lcd.print("4");
  delay(650);
  }
  else if (onestate == HIGH && twostate == LOW && threestate == HIGH && fourstate == HIGH && fivestate == HIGH && sixstate == LOW && sevenstate == HIGH && eightstate == HIGH){
total=total+1;
  lcd.print("5");
  delay(650);
  }
  else if (onestate == HIGH && twostate == LOW && threestate == HIGH && fourstate == HIGH && fivestate == HIGH && sixstate == HIGH && sevenstate == LOW && eightstate == HIGH){
total=total+1;
  lcd.print("6");
  delay(650);
  }
  else if (onestate == HIGH && twostate == LOW && threestate == HIGH && fourstate == HIGH && fivestate == HIGH && sixstate == HIGH && sevenstate == HIGH && eightstate == LOW){

  lcd.setCursor(total,0);
  lcd.print(" ");
  lcd.setCursor(total,0);
  total=total-1;
  delay(650);
  }
  else if (onestate == HIGH && twostate == HIGH && threestate == LOW && fourstate == HIGH && fivestate == LOW && sixstate == HIGH && sevenstate == HIGH && eightstate == HIGH){
total=total+1;
  lcd.print("7");
  delay(650);
  }
  else if (onestate == HIGH && twostate == HIGH && threestate == LOW && fourstate == HIGH && fivestate == HIGH && sixstate == LOW && sevenstate == HIGH && eightstate == HIGH){
total=total+1;
  lcd.print("8");
  delay(650);
  }
  else if (onestate == HIGH && twostate == HIGH && threestate == LOW && fourstate == HIGH && fivestate == HIGH && sixstate == HIGH && sevenstate == LOW && eightstate == HIGH){
total=total+1;
  lcd.print("9");
  delay(650);
  }
  else if (onestate == LOW && twostate == HIGH && threestate == HIGH && fourstate == HIGH && fivestate == HIGH && sixstate == HIGH && sevenstate == HIGH && eightstate == LOW){
  lcd.clear();
  lcd.print("     CANCEL");
  delay(500);
  lcd.clear();
  lcd.print("    Canceled");
  lcd.setCursor(0,1);
  lcd.print(" successfully!");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  }
  else if (onestate == HIGH && twostate == HIGH && threestate == HIGH && fourstate == LOW && fivestate == HIGH && sixstate == LOW && sevenstate == HIGH && eightstate == HIGH){
total=total+1;
  lcd.print("0");
  delay(650);
  }
  
}
