#define PWM_PIN 19

void setup() {
}

void loop() {
  for(int i = 0; i <= 100; i++) {
    analogWrite(PWM_PIN, i);
    delay(20); 
  }
  for(int i = 100; i >= 0; i--) {
    analogWrite(PWM_PIN, i);
    delay(20);
   }
}
