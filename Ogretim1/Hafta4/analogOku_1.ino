void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//seri haberleşmeyi başlat
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDegerAnalog = analogRead(0);//A0 analog pin değerini oku
  Serial.println(okunanDegerAnalog);//okunan degeri seri porta yolla
  delay(500);//500ms bekle
}
