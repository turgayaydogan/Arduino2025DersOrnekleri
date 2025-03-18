void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT_PULLUP);//sanki 5 nolu pine pullup dirençi bağlı gibi işlem yapar
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int butonOkunanDeger=digitalRead(5);
  if(butonOkunanDeger==0)//PULLUP olduğu için basıldığında 0 gelir
    digitalWrite(13,1);
  else
    digitalWrite(13,0);
}
