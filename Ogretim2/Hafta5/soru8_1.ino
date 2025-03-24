int beklemeSuresi = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(15, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn1 = digitalRead(8);
  if (btn1 == 0) {  //butona basılı ise
    beklemeSuresi -= 250;

    beklemeSuresi = beklemeSuresi<=500?500:beklemeSuresi;
    delay(250);
  }

  int btn2 = digitalRead(9);
  if (btn2 == 0) {  //butona basılı ise
    beklemeSuresi += 250;
    if (beklemeSuresi >= 2000)
      beklemeSuresi = 2000;
    delay(250);
  }
  digitalWrite(15, 1);
  delay(beklemeSuresi);
  digitalWrite(15, 0);
  delay(beklemeSuresi);
  Serial.println(beklemeSuresi);
}
