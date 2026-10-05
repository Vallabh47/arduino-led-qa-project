const int LED_PIN = 13;

unsigned long previousMillis = 0;
const unsigned long interval = 500;

bool ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }

  // Other Arduino operations can run here
}
