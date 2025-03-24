void setup() {
  // put your setup code here, to run once:
  for (int i = 15; i <= 19; i++)
    pinMode(i, OUTPUT);

  pinMode(8, INPUT_PULLUP);

  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnDeger = digitalRead(8);
  if (btnDeger == 0) {    // butona basılınca 0 gelir
                          //0 ve 4 arasında sınırlar dahil
    int rnd = random(5);  //0-1-2-3-4
    Serial.println(rnd);

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
  
    delay(250);//butona bas-çek süresi
  }





  // 10 ve 19 arasında sınırlar dahil
  //rnd = random(10, 20);
  //Serial.println(rnd);

  //delay(500);
}
