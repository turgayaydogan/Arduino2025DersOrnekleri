void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//13 nolu digital pin çıkış olarak ayarlandı
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);//13 nolu pine +5V yolla yani digital 1 yolla
  delay(1000);//1000ms = 1s
  digitalWrite(13,LOW);//13 nolu pine 0V yolla yani digital 0 yolla
  delay(1000);
}
