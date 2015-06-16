#ifndef INOBASE_H_
#define INOBASE_H_

#include "ArduinoMock.h"

ArduinoMock mock;

void pinMode(int pin, int mode) {
    mock.pinMode(pin, mode);
}

int digitalRead(int pin) {
    return mock.digitalRead(pin);
}

void digitalWrite(int pin, int value) {
    mock.digitalWrite(pin, value);
}

void delay(int mili) {
    mock.delay(mili);
}

#endif