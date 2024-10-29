void setup() {
  // Configura os pinos 8, 9 e 10 como saídas para controlar os LEDs
  for (int i = 8; i <= 10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int ledPins[] = {8, 9, 10}; // Array com os pinos dos LEDs
  int *currentPin = ledPins;  // Ponteiro para o primeiro elemento do array

  for (int i = 0; i < 3; i++) {
    digitalWrite(*(currentPin + i), HIGH);           // Acende o LED correspondente
    delay((i == 1) ? 6000 : 2000);                   // Mantém o LED aceso (6 segundos para o pino 9, 2 segundos para os outros)
    digitalWrite(*(currentPin + i), LOW);            // Apaga o LED
  }
}

