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
  lcd.begin(16, 2);//sutun ve satır
  lcd.createChar(0, gulenYuz);//0-7 arasında tanımlama yapılabilir
  lcd.createChar(1, zil);


  //lcd.print("merhaba millet!");
  //lcd.setCursor(2,1);//cursor baslangıc konumunu ayarla -sutun,satır index
  //lcd.print("sdu");
  //lcd.setCursor(2,1);//cursor baslangıc konumunu ayarla -sutun,satır index
  //lcd.autoscroll(); 
  lcd.blink(); //cursor yerini göstermek için kullanılabilir
  lcd.setCursor(0,0);


}

void loop() {
  // put your main code here, to run repeatedly:
  
  lcd.write((byte)0);
  lcd.write((byte)1);
  delay(5000);


}
