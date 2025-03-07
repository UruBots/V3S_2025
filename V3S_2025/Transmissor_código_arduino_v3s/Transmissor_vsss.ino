#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

// Definição dos pinos do NRF24L01
#define CE_PIN 10
#define CSN_PIN 9

// Definição dos botões de controle
#define BOTAO_FRENTE 2
#define BOTAO_RE 3
#define BOTAO_ESQUERDA 4
#define BOTAO_DIREITA 5

RF24 radio(CE_PIN, CSN_PIN);

// Endereço de comunicação NRF24L01
const byte endereco[6] = "00001";

struct PacoteDados {
    int comando; // 0 = Parado, 1 = Frente, 2 = Ré, 3 = Esquerda, 4 = Direita
};
PacoteDados dadosEnvio;

void setup() {
    Serial.begin(9600);
    
    pinMode(BOTAO_FRENTE, INPUT_PULLUP);
    pinMode(BOTAO_RE, INPUT_PULLUP);
    pinMode(BOTAO_ESQUERDA, INPUT_PULLUP);
    pinMode(BOTAO_DIREITA, INPUT_PULLUP);
    
    radio.begin();
    radio.openWritingPipe(endereco);
    radio.setPALevel(RF24_PA_LOW);
    radio.stopListening();
}

void loop() {
    int comando = 0;
    
    if (digitalRead(BOTAO_FRENTE) == LOW) {
        comando = 1;
    } else if (digitalRead(BOTAO_RE) == LOW) {
        comando = 2;
    } else if (digitalRead(BOTAO_ESQUERDA) == LOW) {
        comando = 3;
    } else if (digitalRead(BOTAO_DIREITA) == LOW) {
        comando = 4;
    }
    
    dadosEnvio.comando = comando;
    radio.write(&dadosEnvio, sizeof(dadosEnvio));
    
    Serial.print("Comando Enviado: ");
    Serial.println(comando);
    
    delay(100);
}
