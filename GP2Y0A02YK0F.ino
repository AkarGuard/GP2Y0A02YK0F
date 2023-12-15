const int analogPin = A0;
const int ledPin = 13;    // İstediğin bir LED pin numarasını gir
const float voltageMultiplier = 5.0 / 1023.0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(analogPin);

  float voltage = sensorValue * voltageMultiplier;

  // Mesafeyi formüle göre hesapla | Calculate distance by formula
  float distance = 17.493 / (voltage - 0.3081);

  Serial.print("Analog Değer: ");
  Serial.print(sensorValue);
  Serial.print(", Gerilim: ");
  Serial.print(voltage);
  Serial.print("V, Mesafe: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 20) {
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW);  
  }

  delay(500);
}