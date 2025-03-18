void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDegerA = analogRead(0);//A0 pinini okur
  Serial.println(okunanDegerA);
  delay(500);
}
