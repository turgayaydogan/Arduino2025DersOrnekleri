#define LED_KONTROL_BUTON 8
#define LED1 13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_KONTROL_BUTON,INPUT_PULLUP);//INPUT_PULLUP=2(int) giriş ama PULLUP direnci bağlı gibi
  pinMode(LED1,OUTPUT);//yani 13 nolu pini çıkış yap
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDeger = digitalRead(LED_KONTROL_BUTON);
  digitalWrite(LED1,!okunanDeger);
}
