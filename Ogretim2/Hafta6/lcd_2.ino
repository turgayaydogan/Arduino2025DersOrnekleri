#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
byte gulenYuz[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

uint8_t zil[8] = {0x4, 0xe, 0xe, 0xe, 0x1f, 0x0, 0x4};

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.createChar(0, gulenYuz);//0-7 arasında tanımlama yapılabilir
  lcd.createChar(1, zil);





  lcd.setCursor(0,0);//kursor konumlandırma 0. sutun, 0.satır-index olarak
  lcd.print("merhaba millet");
  lcd.setCursor(2,1);
  lcd.print("nasilsiniz");
  lcd.setCursor(0,1);//kursor konumlandırma 0. sutun, 1.satır-index olarak
}
void sil_1(){
  lcd.setCursor(0,1);//2.saıra konumlandır
  lcd.print("                 ");
}

void sil_2(){
  lcd.setCursor(0,1);//2.saıra konumlandır
  for(int i=0;i<16;i++)
    lcd.print(" ");
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(5000);
  lcd.write((byte)0);
  lcd.write((byte)1);
  


}
