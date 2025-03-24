int trigPin = 7; /* Sensorun trig pini Arduinonun 7 numaralı ayağına bağlandı */
int echoPin = 6; /* Sensorun echo pini Arduinonun 6 numaralı ayağına bağlandı */

long sure;
long uzaklik;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT); /* trig pini çıkış olarak ayarlandı */
  pinMode(echoPin, INPUT);  /* echo pini giriş olarak ayarlandı */
  Serial.begin(9600);       /* Seri haberlesme baslatildi */
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW); /* sensör pasif hale getirildi */
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); /* Sensore ses dalgasının üretmesi için emir verildi */
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);    /* Yeni dalgaların üretilmemesi için trig pini LOW konumuna getirildi */
  sure = pulseIn(echoPin, HIGH); /* ses dalgasının geri dönmesi için geçen sure ölçülüyor */
  uzaklik = sure / 29.1 / 2;     /* ölçülen sure uzaklığa çevriliyor */
  if (uzaklik > 200)
    uzaklik = 200;
  Serial.print("Uzaklik ");
  Serial.print(uzaklik); /* hesaplanan uzaklık bilgisayara aktarılıyor */
  Serial.println(" CM olarak olculmustur.");
  delay(500);
}
