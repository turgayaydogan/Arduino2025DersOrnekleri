void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//seri haberleşmeyi başlattı
}

void loop() {
  // put your main code here, to run repeatedly:
  int sayi = 3;
  Serial.println(sayi);//seri olarak sayi değişkeni değerini yolla

}
