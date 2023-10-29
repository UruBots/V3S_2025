//emisor
#include <SPI.h>
#include <RF24.h>

RF24 radio(8, 10); // CE, CSN

const byte identificacion[6] = "00001";

void setup() 
{
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(identificacion);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
String inputString = "";  // variable para almacenar los datos entrantes
int num1 = 0;
int num2 = 0;
int num3 = 0;
int num4 = 0;

void loop() 
{
  while (Serial.available()) {
    char inChar = (char)Serial.read(); // Leer un caracter del puerto serie
    inputString += inChar;             // A�adirlo a la cadena de entrada


}
 
    char enviar[inputString.length() + 1];
    inputString.toCharArray(enviar, sizeof(enviar));
    Serial.println(enviar);
    radio.write(&enviar, sizeof(enviar));
    inputString = "";  // Limpiar la cadena de entrada para la siguiente lectura
    

}