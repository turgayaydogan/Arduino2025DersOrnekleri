void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, 1);//13 nolu digital pine digital1 yani +5V yolla
  delay(1000);//ms cinsinden 1000 = 1sn
  digitalWrite(13,0);
  delay(1000);
}
