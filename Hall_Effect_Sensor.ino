#define Hall_Sensor A0       
#define Hall_Sensor_D 2
#define LED_PIN 13  // المصباح متصل على المخرج 13

int Val1 = 0, Val2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Hall_Sensor_D, INPUT);
  pinMode(LED_PIN, OUTPUT); // تحديد مخرج المصباح
}

void loop() {
  Val1 = analogRead(Hall_Sensor);
  Val2 = digitalRead(Hall_Sensor_D);
  
  Serial.print("Analog: ");
  Serial.print(Val1);
  Serial.print("\t Digital: ");
  Serial.println(Val2);

  // إذا تم الكشف عن مغناطيس (القيمة غالباً LOW)
  if (Val2 == LOW) {
    digitalWrite(LED_PIN, LOW); // شغّل المصباح
  } else {
    digitalWrite(LED_PIN, HIGH);  // أطفئ المصباح
  }

  delay(500);
}
