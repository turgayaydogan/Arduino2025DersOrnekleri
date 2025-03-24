void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrDeger= analogRead(A0);
  Serial.println(ldrDeger);
  delay(1000);
}
