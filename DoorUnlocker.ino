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

/*
byte h2[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B01110,
  B10001,
  B00000,
};
*/

int num1;
int num2;
int num3;
int num4;
int moveon=1;
int lcd_key=0;
int currentBtn=0;
int printlastbtn;
int servostatus;
int lockstatus;
int servodisp;

void setup(){
  lcd.begin(16,2);
  lcd.createChar(0,h1);
  //lcd.createChar(0,h2);
  myservo.attach(10);
  myservo.writeMicroseconds(1500); //start servo in the center position
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("Enter Passcode");
  servostatus = 1;                //Servo does nothing
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
  
  if (moveon == 5){           
    lcd.setCursor(3,1);
    lcd.write(byte(0));
    if (num1==1 & num2==1 & num3==1 & num4==1){  //Turn the servo if the correct passcode has been entered
      servostatus=2;                             //Unlock the door
      lockstatus = ServoFun(servostatus);        //passes servostatus variable to function, which will rotate servo to new position
    }
    else{
     lcd.setCursor(6,1);
     //lcd.print(byte(1));
     servostatus=1;                             //servo does nothing    
     lockstatus = ServoFun(servostatus);     
     }    
  }
 // if (moveon == 6){
//    servostatus=3;
 //   lockstatus = ServoFun(servostatus);
//  }
}

