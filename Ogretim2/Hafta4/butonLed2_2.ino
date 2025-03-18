int durum = 0;  //global
void setup() {
  // put your setup code here, to run once:
  pinMode(1, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnDegeri = digitalRead(1);
  
  if (btnDegeri == 1) {
    durum++;
    int kalan = durum % 2;
    if (kalan == 1)
      digitalWrite(13, 1);
    else
      digitalWrite(13, 0);
    delay(500);
  }
}
