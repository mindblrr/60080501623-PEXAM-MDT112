int buzzer = 10;

void setup() {
  pinMode(buzzer, OUTPUT);
  tone(buzzer, 800,200);
    delay(400);
    noTone(buzzer);
  
}

void loop() {
  
}

