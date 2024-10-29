# Controle de Semáforo com Arduino

Este projeto implementa um sistema simples de controle de semáforo usando LEDs e um Arduino. O sistema utiliza três LEDs (vermelho, amarelo e verde) para simular as fases de um semáforo com temporizações diferentes. Este projeto é ideal para quem deseja aprender mais sobre controle básico de saída com Arduino, uso de ponteiros em C++, e temporizações.

## Materiais Necessários

- 1 Arduino (pode ser Uno, Nano, etc.)
- 1 LED vermelho
- 1 LED amarelo
- 1 LED verde
- 3 resistores de 220 ohms
- Fios para conexões
- Protoboard

## Montagem do Circuito

1. Conecte cada LED à protoboard. Em cada LED, o terminal positivo (perna mais longa) deve ser conectado ao resistor de 220 ohms.
2. Conecte os resistores ao pino positivo de cada LED e depois aos pinos digitais do Arduino da seguinte forma:
   - **LED vermelho**: pino 8 do Arduino
   - **LED amarelo**: pino 9 do Arduino
   - **LED verde**: pino 10 do Arduino
3. Conecte o terminal negativo (perna mais curta) de cada LED ao GND do Arduino.

## Código

Este código define o comportamento dos LEDs para simular as fases de um semáforo com as seguintes temporizações:

- **LED vermelho**: Acende por 2 segundos
- **LED amarelo**: Acende por 6 segundos
- **LED verde**: Acende por 2 segundos

### Código Completo

```cpp
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
```