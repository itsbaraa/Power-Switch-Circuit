const int ledPin = 13;
const int ldrPin = 8;
const int buttonPin = 0;

bool circuitEnabled = false;

bool lastButtonReading = HIGH;
bool buttonState = HIGH;  // Current debounced state
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ldrPin, INPUT_PULLUP);
  digitalWrite(ledPin, LOW);
}

void loop() {
  bool currentReading = digitalRead(buttonPin);

  // If the button reading has changed, reset debounce timer
  if (currentReading != lastButtonReading) {
    lastDebounceTime = millis();
  }

  // If the reading is stable for > debounceDelay, treat as valid
  if ((millis() - lastDebounceTime) > debounceDelay) {
    // If state changed from last known stable state
    if (currentReading != buttonState) {
      buttonState = currentReading;

      // Only toggle on the **falling edge** (button press)
      if (buttonState == LOW) {
        circuitEnabled = !circuitEnabled;

        if (circuitEnabled) {
          blinkLED(1); // 2 blinks = ON
        } else {
          blinkLED(2); // 1 blink = OFF
        }
      }
    }
  }

  lastButtonReading = currentReading;

  // LDR-controlled LED only when circuit is enabled
  if (circuitEnabled) {
    if (digitalRead(ldrPin) == LOW) {
      digitalWrite(ledPin, HIGH);  // DARK: LED ON
    } else {
      digitalWrite(ledPin, LOW);   // LIGHT: LED OFF
    }
  } else {
    digitalWrite(ledPin, LOW);     // Circuit disabled
  }
}

void blinkLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(150);
  }
}
