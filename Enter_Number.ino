// Function that allows the user to pick a passcode
int number=0;
int lastBtn1 = 0;
int lastBtn2 = 0;
int lastBtn3 = 0;

int Enter_Number()
{
  lcd_key = read_LCD_buttons();

  if (lcd_key == btnSELECT && lastBtn1 != btnSELECT) //if SELECT button was pressed
  {
    moveon = moveon+1;
    lastBtn1 = btnSELECT;  //change the last button to SELECT
  }
  else if (lcd_key != btnSELECT)
  {
    lastBtn1=0;            //reset last button to default
  }
  
  if (lcd_key == btnUP && lastBtn2 != btnUP)
  {
    number = number+1;
    lastBtn2 = btnUP;      //use a different "last button" variable to track the UP button
    if (number >= 9)       //set the upper limit to 9 (0-9)
    {
      number = 9;
    }
  }
  else if (lcd_key != btnUP)
  {
    lastBtn2=0;
  }

  if (lcd_key == btnDOWN && lastBtn3 != btnDOWN)
  {
    number = number-1;
    lastBtn3 = btnDOWN;    //use a different "last button" variable to track the DOWN button
    if (number <= 0)      //set the lower limit to 0 (0-9)
    {
      number = 0;
    }   
  }
  else if (lcd_key != btnDOWN)
  {
    lastBtn3=0;
  }
  
   return number;
}











