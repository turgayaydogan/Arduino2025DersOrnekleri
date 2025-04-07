#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);//sutun ve satır
  lcd.print("merhaba millet!");
  lcd.setCursor(2,1);//cursor baslangıc konumunu ayarla -sutun,satır index
  lcd.print("sdu");
  lcd.setCursor(2,1);//cursor baslangıc konumunu ayarla -sutun,satır index
  //lcd.autoscroll(); 
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  lcd.print("A");
  delay(5000);
  lcd.print("A");
  delay(5000);
  lcd.print("A");

  lcd.setCursor(0, 0);
  lcd.print("12345678911234567892123456789312345678941234567895123456789612345");

  delay(5000);
}
