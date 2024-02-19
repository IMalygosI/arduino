#define BUZZER_PIN 3
#define LDR_PIN    A0

void setup() {
  // put your setup code here, to run once:
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(LDR_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int val, frequency;
    val = analogRead(LDR_PIN);
    frequency = map(val, 0, 1023, 5000, 10000);
    
    for (int i = 0; i < 10; i++) {
      tone(BUZZER_PIN, frequency, 20);
      delay(70);
    }
    delay(800);
}