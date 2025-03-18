#define BUTON 5
void setup() {
  // put your setup code here, to run once:
  pinMode(BUTON,INPUT_PULLUP);//sanki 5 nolu pine pullup dirençi bağlı gibi işlem yapar
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int butonOkunanDeger=digitalRead(BUTON);
  digitalWrite(LED_BUILTIN,!butonOkunanDeger);
}
