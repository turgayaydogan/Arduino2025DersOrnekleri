void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //butona basılınca +5V yani digital 1 gelecek
  //butona basılmayınca 0V yani digital 0 gelecek

  digitalWrite(13,digitalRead(7));

}
