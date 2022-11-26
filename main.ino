
//#include <ESP8266WiFi.h> // include wifi lib
#include <Servo.h>
#include <HCSR04.h> // include ultrasonic lib

Servo servo;
HCSR04 hc(5, 6);

const int controlMotorPort = 2;
const int servoMotorPort = 3;
const int wifiInputPort = 1;


int parseWifiMsg() {

}

int botRotateByDder(char der) {
    
}

int simpleUltrasonicAlgiritm() {
    int dist = hc.dist();

    if (dist > 30) {
        digitalWrite(controlMotorPort, 190);
    } else {
        servo.write(90);
        digitalWrite(controlMotorPort, 190);
    }
    
}

void setup() {
    Serial.begin(9600);

    pinMode(controlMotorPort, OUTPUT);
    pinMode(wifiInputPort, INPUT);

    servo.attach(servoMotorPort);
}

void loop() {
    simpleUltrasonicAlgiritm();
}

