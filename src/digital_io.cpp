#include <Arduino.h>
#include "io.h"

int digital_buttonPin = 2;
int ledPin = 9;
int buttonState = 0;

void init_io_setup() {
    pinMode(digital_buttonPin,INPUT);
    pinMode(ledPin,OUTPUT);
}

void loop_io() {
    buttonState = digitalRead(digital_buttonPin);
    if (buttonState == HIGH) {
        digitalWrite(ledPin,HIGH);
    }   else {
        digitalWrite(ledPin,LOW);
    }
}

