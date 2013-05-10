// Function that allows the user to pick a set temperature
int number=0;

int Enter_Number()
{
  lcd_key = read_LCD_buttons();
  switch (lcd_key){
  case btnUP:
  {
    number = number + 1;
    break;
  }
  case btnDOWN:
  {
    number = number - 1;
    break;
  }

  case btnSELECT:
  {
    moveon = moveon + 1;
    break;
  }
  }

  /*
  if (lcd_key == btnSELECT){
   if(lcd_key == btnSELECT && buttonLast3 != btnSELECT)
   {
   moveon = moveon+1;
   }
   }
   else{
   buttonLast3=0;
   }
   
   if (lcd_key == btnUP){
   if (lcd_key == btnUP && buttonLast1 != btnUP)
   {
   number = number+1;
   if (number >= 9)
   {
   number = 9;
   }
   lcd.setCursor(0,1);
   lcd.print(number);
   buttonLast1 = btnUP;
   }
   }
   else{
   buttonLast1=0;
   }
   
   if(lcd_key == btnDOWN){
   if (lcd_key == btnDOWN && buttonLast2 != btnDOWN)
   {
   number = number-1;
   if (number < 1)
   {
   number=0;
   }
   buttonLast2 = btnDOWN;
   lcd.setCursor(0,1);
   lcd.print(number);
   }
   }
   else{
   buttonLast2=0;
   }
   
   lcd.setCursor(13,1);
   lcd.print(moveon,DEC);
   return number;
   
   */
}










