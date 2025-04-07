#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCursor(0,1);//kursor konumlandırma 0. sutun, 1.satır-index olarak
  lcd.print("merhaba millet");
  lcd.setCursor(0,0);
  lcd.blink();//imlec konumunda yanıp soner
  //lcd.noBlink();//yanıp sonme islemini pasif eder
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(5000);

  lcd.setCursor(0,1);//kursor konumlandırma 0. sutun, 1.satır-index olarak
  lcd.print("                ");

}
