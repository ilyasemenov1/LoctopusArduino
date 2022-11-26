
//#include <ESP8266WiFi.h>
#include <Servo.h>

Servo servo;

const int controlMotorPort = 2;
const int servoMotorPort = 3;
const int wifiInputPort = 1;


int parseWifiMsg() {

}

int botRotateByDder(char der) {

    
}

void setup() {
    Serial.begin(9600);

    pinMode(controlMotorPort, OUTPUT);
    pinMode(wifiInputPort, INPUT);

    servo.attach(servoMotorPort);
}

void loop() {

}

