void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//birim zamanda yollanacak veri miktarı/bit adeti
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = 15;
  Serial.println(deger);

}
