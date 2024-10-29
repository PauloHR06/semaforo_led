void setup() {

  for (int i = 8; i <= 10; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {

  int ledPins[] = {8, 9, 10};

  int *currentPin = ledPins;

  for (int i = 0; i < 3; i++) {
    digitalWrite(*(currentPin + i), HIGH); 
    delay((i == 1) ? 6000 : 2000);         
    digitalWrite(*(currentPin + i), LOW); 
  }
}
