#define Hall_Sensor A0       
#define Hall_Sensor_D 2
#define LED_PIN 13  // LED connected to pin 13

int Val1 = 0, Val2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Hall_Sensor_D, INPUT);
  pinMode(LED_PIN, OUTPUT); // Set LED pin as output
}

void loop() {
  Val1 = analogRead(Hall_Sensor);         // Read analog signal from Hall sensor
  Val2 = digitalRead(Hall_Sensor_D);      // Read digital signal from Hall sensor

  Serial.print("Analog: ");
  Serial.print(Val1);
  Serial.print("\t Digital: ");
  Serial.println(Val2);

  // If a magnet is detected (digital signal is LOW = negative)
  if (Val2 == LOW) {
    digitalWrite(LED_PIN, LOW);  // Turn off the LED (negative signal)
  } else {
    digitalWrite(LED_PIN, HIGH); // Turn on the LED (no magnet = positive signal)
  }

  delay(500);
}
