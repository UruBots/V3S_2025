#include <SPI.h>
#include <RF24.h>

// Pinos do NRF24L01
#define CE_PIN 9
#define CSN_PIN 10

RF24 radio(CE_PIN, CSN_PIN);  // Declaração única do rádio

// Endereço de comunicação
const byte endereco[6] = "00001";

// Pinos do Joystick KY-023
#define VRX A0  // Eixo X
#define VRY A1  // Eixo Y

struct Dados {
  char direcao;
  byte velocidade;
};

void setup() {
  Serial.begin(9600);

  // Inicializando NRF24L01
  if (!radio.begin()) {
    Serial.println("NRF24L01 não encontrado!");
    while (1);
  }

  radio.openWritingPipe(endereco);
  radio.setPALevel(RF24_PA_HIGH);
  radio.setDataRate(RF24_1MBPS);
  radio.stopListening(); // Garante que o módulo está no modo de transmissão

  Serial.println("Transmissor pronto!");
}

void loop() {
  int x = analogRead(VRX); // Lê eixo X
  int y = analogRead(VRY); // Lê eixo Y

  Dados dados;
  dados.direcao = 's'; // Padrão: parar
  dados.velocidade = 0; // Velocidade padrão

  // Define direção e velocidade
  if (y > 550) { 
    dados.direcao = 'f'; // Frente
    dados.velocidade = map(y, 550, 1023, 0, 255);
  } else if (y < 450) { 
    dados.direcao = 'b'; // Trás
    dados.velocidade = map(y, 450, 0, 0, 255);
  } else if (x > 550) { 
    dados.direcao = 'r'; // Direita
    dados.velocidade = map(x, 550, 1023, 0, 255);
  } else if (x < 450) { 
    dados.direcao = 'l'; // Esquerda
    dados.velocidade = map(x, 450, 0, 0, 255);
  } else {
    dados.direcao = 's'; // Parar
    dados.velocidade = 0;
  }

  // Envia dados via rádio
  radio.write(&dados, sizeof(dados));
  Serial.print("Comando enviado: ");
  Serial.print(dados.direcao);
  Serial.print(" | Velocidade: ");
  Serial.println(dados.velocidade);

  delay(100);
}
