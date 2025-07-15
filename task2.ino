const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 2;
const int ldrPin = A0;

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Measure distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343) / 2;

  // Read LDR value
  int ldrValue = analogRead(ldrPin);

  // Print values
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm\tLDR: ");
  Serial.println(ldrValue);

  // LED ON only when object is close AND it is bright
  if (distance <= 15 && ldrValue < 500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}

