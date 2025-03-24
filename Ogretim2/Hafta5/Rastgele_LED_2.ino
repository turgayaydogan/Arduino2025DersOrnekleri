void setup() {
  // put your setup code here, to run once:
  for (int i = 15; i <= 19; i++)
    pinMode(i, OUTPUT);

  pinMode(8, INPUT_PULLUP);

  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void sondur(){
  for(int i =15;i<=19;i++)
    digitalWrite(i,0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnDeger = digitalRead(8);
  if (btnDeger == 0) {    // butona basılınca 0 gelir
                          //0 ve 4 arasında sınırlar dahil
    int rnd = random(15,20);  //15-16-17-18-19
    Serial.println(rnd);
    sondur();
    digitalWrite(rnd,1);
 
    delay(250);//butona bas-çek süresi
  }





  // 10 ve 19 arasında sınırlar dahil
  //rnd = random(10, 20);
  //Serial.println(rnd);

  //delay(500);
}
