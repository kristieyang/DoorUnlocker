#include <LiquidCrystal.h>
//#include <SoftwareServo.h>

LiquidCrystal lcd(8,9,4,5,6,7);

int num1;
int num2;
int num3;
int num4;
int number;
int moveon=1;
int lcd_key = 0;
#define V1 80
#define V2 230
#define V3 350
#define V4 500
#define V5 800

void setup(){
  lcd.begin(16,2);
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("Enter Passcode");
  
  if (moveon == 1){
  Enter_Number();
  num1 = number;
  lcd.setCursor(0,1);
  lcd.print(num1,DEC);
  }
  
  if (moveon == 2){
  Enter_Number();
  num2 = number;
  lcd.setCursor(1,1);
  lcd.print(num2,DEC);
  }
  
  
  delay(5);
  
}
