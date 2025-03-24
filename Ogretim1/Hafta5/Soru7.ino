
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
    //0 ve 299 arasında sınırlar dahil
    int rnd = random(5);  //0-1-2-3-4
    Serial.println(rnd);

    ledSondur();
    if (rnd == 0)
      digitalWrite(15, 1);
    else if (rnd == 1)
      digitalWrite(16, 1);
    else if (rnd == 2)
      digitalWrite(17, 1);
    else if (rnd == 3)
      digitalWrite(18, 1);
    else if (rnd == 4)
      digitalWrite(19, 1);


    // 10 ve 19 arasında sınırlar dahil
    //rnd = random(10, 20);
    //Serial.println(rnd);

    delay(500);
  }
}
