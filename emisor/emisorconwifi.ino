#ifdef ESP8266
 #include <ESP8266WiFi.h>
#else //ESP32
 #include <WiFi.h>
#endif
#include <ModbusIP_ESP8266.h>
#include <SPI.h>
#include <RF24.h>

RF24 radio(7, 8); // CE, CSN

const byte identificacion[6] = "00001";


//REGISTRO MODBUS
const int ID = 0;
const int PWM1 = 1;
const int PWM2 = 2;
const int PWM3 = 3;
const int PWM4 = 4;
ModbusIP mb;

void setup() {
  
  Serial.begin(9600);
    Serial.println("Setting WifiLocal.....");
    boolean result = WiFi.softAP("VssCom", "12345678");
    if(result == true)
    {
        Serial.println("");
        Serial.println("WiFi conectado");  
        Serial.println("Direccion IP: ");
        Serial.println(WiFi.localIP()); 
    }
    else
    {
        Serial.println("Failed!");
    }


  
  radio.begin();
  radio.openWritingPipe(identificacion);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();

  mb.server();
  mb.Hreg(ID);
  mb.Hreg(PWM1);
  mb.Hreg(PWM2);
  mb.Hreg(PWM3);
  mb.Hreg(PWM4);

}
String inputString = "";  // variable para almacenar los datos entrantes
String coma = ",";

void loop() {

  mb.task();
  int id = mb.Coil(ID);
  int pwm1 = mb.Coil(PWM1);
  int pwm2 = mb.Coil(PWM2);
  int pwm3 = mb.Coil(PWM3);
  int pwm4 = mb.Coil(PWM4);

  String Sid = String(id);
  String Spwm1 = String(pwm1);
  String Spwm2 = String(pwm2);
  String Spwm3 = String(pwm3);
  String Spwm4 = String(pwm4);

  inputString += Sid + coma + Spwm1 + coma + Spwm2 + coma + Spwm3 + coma + Spwm4

  char enviar[inputString.length() + 1];
  inputString.toCharArray(enviar, sizeof(enviar));
  Serial.println(enviar);
  radio.write(&enviar, sizeof(enviar));
  inputString = "";  // Limpiar la cadena de entrada para la siguiente lectura
  
  delay(10);
  
}