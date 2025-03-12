void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);//butonun bağlı olduğu pin giriş olarak ayarlandı
  pinMode(13,OUTPUT);//ledin bağlı olduğu pin çıkış olarak ayarlandı
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDeger = digitalRead(7);//butona basılıp basılmadığı okunacak
  digitalWrite(13,okunanDeger);
}
