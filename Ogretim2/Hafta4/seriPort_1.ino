#define BUTON 3
#define LED1 5
int sayi =0;//global değişken
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(INPUT);
  Serial.println(OUTPUT);
  Serial.println(INPUT_PULLUP);
  Serial.println(LED_BUILTIN);
  Serial.println();
  Serial.println(BUTON);
  Serial.println(LED1);
  Serial.println();
  delay(2000);
}
