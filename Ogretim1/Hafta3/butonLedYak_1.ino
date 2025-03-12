void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //butona basılınca +5V yani digital 1 gelecek
  //butona basılmayınca 0V yani digital 0 gelecek

  int okunanDeger = digitalRead(7);//7 nolu digital pini oku
  if(okunanDeger==1)//eğer butona basılı ise
    digitalWrite(13,1);
  if(okunanDeger==0)//eğer butona basılı değil ise
    digitalWrite(13,0);
}
