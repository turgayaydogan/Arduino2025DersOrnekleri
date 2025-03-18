#define ledPIN 13
#define butonPIN 3

int durum = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(butonPIN, INPUT);
  pinMode(ledPIN, OUTPUT);
  //veya
  //pinMode(3,INPUT);
  //pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int butonDegeri = digitalRead(butonPIN);
  //veya
  //int butonDegeri = digitalRead(3);
  if (butonDegeri == 1) {
    durum++;
    int kalan = durum % 2;
    if (kalan == 1)
      digitalWrite(ledPIN, 1);
    else
      digitalWrite(ledPIN, 0);
    delay(500);//kullanıcıya butona basmaya süresi tanıdı
  }
}
