
int Normalize_Number(int num_normal)
{
  if(num_normal<10)
  {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(1,1);
    lcd.print(num_normal);
  }
  else if(num_normal>=10)
  {
    lcd.setCursor(0,1);
    lcd.print(num_normal);
  }
}
