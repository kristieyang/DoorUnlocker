#include <LiquidCrystal.h>
#include <Servo.h>

LiquidCrystal lcd(8,9,4,5,6,7);
Servo myservo;

//Hide the code with a smiley face
byte h1[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};


int num1;
int num2;
int num3;
int num4;
int moveon=1;
int lcd_key=0;
int currentBtn=0;
int printlastbtn;

void setup(){
  lcd.begin(16,2);
  lcd.createChar(0,h1);
  myservo.attach(0);
  myservo.write(90); //set servo to mid-point
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("Enter Passcode");

  if (moveon == 1){              //select first digit of passcode
    num1 = Enter_Number();
    lcd.setCursor(0,1);
    lcd.print(num1,DEC);

  }

  if (moveon == 2){             //select second digit of passcode
    num2 = Enter_Number();
    lcd.setCursor(0,1);
    lcd.write(byte(0));
    lcd.setCursor(1,1);
    lcd.print(num2,DEC);
  }
  
  if (moveon == 3){            //select third digit of passcode
    num3 = Enter_Number();
    lcd.setCursor(1,1);
    lcd.write(byte(0));
    lcd.setCursor(2,1);
    lcd.print(num3,DEC);
  }
  
  if (moveon == 4){            //select fourth digit of passcode
    num4 = Enter_Number();
    lcd.setCursor(2,1);
    lcd.write(byte(0));
    lcd.setCursor(3,1);
    lcd.print(num4,DEC);
  }
  
  if (moveon == 5){          //Add servo functionality here
    lcd.setCursor(3,1);
    lcd.write(byte(0));
  }
}

