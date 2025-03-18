void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT_PULLUP);//INPUT_PULLUP=2(int) giriş ama PULLUP direnci bağlı gibi
  pinMode(LED_BUILTIN,OUTPUT);//LED_BUILTIN=13(int) yani 13 nolu pini çıkış yap
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDeger = digitalRead(8);
  if(okunanDeger==0)//butona basılı ise
    digitalWrite(LED_BUILTIN,1);
  else
    digitalWrite(LED_BUILTIN,0);
}
