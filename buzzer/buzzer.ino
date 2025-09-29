// LED pins
int leds[3] = {D1, D2, D3};

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

// Helper: turn all LEDs off
void allOff() {
  for (int i = 0; i < 3; i++) digitalWrite(leds[i], LOW);
}

void loop() {
  // Pattern 1: Running light
  for (int i = 0; i < 3; i++) {
    allOff();
    digitalWrite(leds[i], HIGH);
    delay(200);
  }

  // Pattern 2: Wave on/off
  for (int i = 0; i < 3; i++) {
    digitalWrite(leds[i], HIGH);
    delay(150);
  }
  for (int i = 0; i < 3; i++) {
    digitalWrite(leds[i], LOW);
    delay(150);
  }

  // Pattern 3: All blink together
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) digitalWrite(leds[i], HIGH);
    delay(300);
    for (int i = 0; i < 3; i++) digitalWrite(leds[i], LOW);
    delay(300);
  }

  // Pattern 4: Random sparkle
  for (int j = 0; j < 10; j++) {
    int r = random(0, 3);
    digitalWrite(leds[r], HIGH);
    delay(200);
    digitalWrite(leds[r], LOW);
  }
}
