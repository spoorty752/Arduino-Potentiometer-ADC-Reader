
#define POT_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(POT_PIN);

  float voltage = adcValue * (5.0 / 1023.0);

  Serial.print("ADC Value: ");
  Serial.print(adcValue);

  Serial.print(" | Voltage: ");
  Serial.print(voltage, 2);
  Serial.println(" V");

  delay(500);
}

