void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buton1 = digitalRead(0);
  //eğer btn1 basılı ise led yanacak
  if(buton1==1)
    digitalWrite(13,1);

  int buton2 = digitalRead(1);
  //eğer btn2 basılı ise led sönecek
  if(buton2==1)
    digitalWrite(13,0);
}
