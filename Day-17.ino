const int ldrPin = A0;
const int ledPin = 13;
int threshold = 514;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightValue = analogRead(ldrPin);
  Serial.println(lightValue);

  if (lightValue < threshold) {
    digitalWrite(ledPin, HIGH);  // dark → LED on
  } else {
    digitalWrite(ledPin, LOW);   // bright → LED off
  }
  delay(500);
}
