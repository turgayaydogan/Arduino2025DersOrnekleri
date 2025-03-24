
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  //0 ve 299 arasında sınırlar dahil
  rnd = random(300);
  Serial.println(rnd);  

  // 10 ve 19 arasında sınırlar dahil
  rnd = random(10, 20);
  Serial.println(rnd);

  delay(500);

}
