#define LED 13
#define VIBRA 3

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(VIBRA, OUTPUT);
  digitalWrite(LED,LOW);
  digitalWrite(VIBRA,LOW);
}

void loop() {
  digitalWrite(LED, HIGH);
  digitalWrite(VIBRA, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(VIBRA, LOW);
  delay(1000);
}
