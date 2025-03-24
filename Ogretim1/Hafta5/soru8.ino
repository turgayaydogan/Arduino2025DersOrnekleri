int beklemeSuresi=1000;//1000ms
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//test için, değişken değerini gözlemek için
  pinMode(15,OUTPUT);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn1 = digitalRead(6);

  if(btn1==0){
    beklemeSuresi += 250;
    delay(250);
  }

  int btn2 = digitalRead(7);

  if(btn2==0){
    beklemeSuresi -= 250;
    delay(250);
  }

  digitalWrite(15,1);
  delay(beklemeSuresi);
  digitalWrite(15,0);
  delay(beklemeSuresi);
  Serial.println(beklemeSuresi);
}
