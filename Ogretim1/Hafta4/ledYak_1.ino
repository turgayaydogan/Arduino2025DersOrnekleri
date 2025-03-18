void setup() {
  // put your setup code here, to run once:
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(15, 1);
  digitalWrite(16, 1);
  digitalWrite(17, 1);
  digitalWrite(18, 1);
  digitalWrite(19, 1);
  delay(1000);
  digitalWrite(15, 0);
  digitalWrite(16, 0);
  digitalWrite(17, 0);
  digitalWrite(18, 0);
  digitalWrite(19, 0);
  delay(1000);
}
