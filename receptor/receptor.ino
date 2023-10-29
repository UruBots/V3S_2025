//receptor
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(8, 10); // CE, CSN

#define motor1_derecha 9
#define motor1_izquierda 6
#define motor2_derecha 3
#define motor2_izquierda 5
const byte identificacion[6] = "00001";

void setup()
{
  Serial.begin(9600);
  radio.begin();

  radio.openReadingPipe(0, identificacion);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
}
const int maxNumbers = 5; // Número máximo de valores que puede recibir

int numbers[maxNumbers]; // Arreglo para almacenar los números

int id,motor1_pwm0,motor1_pwm1,motor2_pwm0,motor2_pwm1;

void loop() {
  if (radio.available()>0) {
    char receivedData[32] = "";
    radio.read(&receivedData, sizeof(receivedData));
    
    int count = 0;
    char* token = strtok(receivedData, ",");
    while (token != NULL && count < maxNumbers) {
      numbers[count] = atoi(token);
      token = strtok(NULL, ",");
      count++;
    }
    // Imprimir los valores separados
    /*for (int i = 0; i < count; i++) {
      Serial.print("Number ");
      Serial.print(i);
      Serial.print(": ");
      Serial.println(numbers[i]);
    }*/
    id = numbers[0];
    motor1_pwm0 = numbers[1];
    motor1_pwm1 = numbers[2];
    motor2_pwm0 = numbers[3];
    motor2_pwm1 = numbers[4];

    Serial.print("id= ");
    Serial.println(id);
    Serial.print("motor1_pwm0= ");
    Serial.println(motor1_pwm0);
    
    Serial.print("motor1_pwm1= ");
    Serial.println(motor1_pwm1);

    Serial.print("motor2_pwm0= ");
    Serial.println(motor2_pwm0);

    Serial.print("motor2_pwm1= ");
    Serial.println(motor2_pwm1);

    if(id==1){
      analogWrite(motor1_derecha, motor1_pwm0);
      analogWrite(motor1_izquierda, motor1_pwm1);
      analogWrite(motor2_derecha, motor2_pwm0);
      analogWrite(motor2_izquierda, motor2_pwm1);
    }
  }
}