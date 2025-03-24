
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

  for (int i = 15; i <= 19; i++)
    pinMode(i, OUTPUT);

  pinMode(6, INPUT_PULLUP);
}

void ledSondur(){
  for(int i = 15;i<=19;i++)
    digitalWrite(i, 0);
}

void loop() {
  int btnDeger = digitalRead(6);
  if (btnDeger == 0)  //btn basılı ise,PULL_UP olduğu için
  {
    //15 ve 19 arasında sınırlar dahil
    int rnd = random(15,20);  //15-16-17-18-19
    Serial.println(rnd);

    ledSondur();
    digitalWrite(rnd,1);

    delay(500);
  }
}
