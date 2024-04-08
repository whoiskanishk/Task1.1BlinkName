void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Kanishk
  blinkDash(); blinkDot(); blinkDash(); // K
  blinkLetterGap();
  blinkDot(); blinkDash(); // A
  blinkLetterGap();
  blinkDash(); blinkDot(); // N
  blinkLetterGap();
  blinkDot(); blinkDot(); // I
  blinkLetterGap();
  blinkDot(); blinkDot(); blinkDot(); // S
  blinkLetterGap();
  blinkDot(); blinkDot(); blinkDot(); blinkDot(); // H
  blinkLetterGap();
  blinkDash(); blinkDot(); blinkDash(); // K
  blinkWordGap();

  // Sachdeva
  blinkDot(); blinkDot(); blinkDot(); // S
  blinkLetterGap();
  blinkDot(); blinkDash(); // A
  blinkLetterGap();
  blinkDash(); blinkDot(); blinkDash(); blinkDot(); // C
  blinkLetterGap();
  blinkDot(); blinkDot(); blinkDot(); blinkDot(); // H
  blinkLetterGap();
  blinkDash(); blinkDot(); // D
  blinkLetterGap();
  blinkDot(); // E
  blinkLetterGap();
  blinkDot(); blinkDot(); blinkDot(); blinkDash(); // V
  blinkLetterGap();
  blinkDot(); blinkDash(); // A

  blinkWordGap(); // Repeat the name after a pause
}

void blinkDot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void blinkDash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void blinkLetterGap() {
  delay(600);
}

void blinkWordGap() {
  delay(1400);
}
