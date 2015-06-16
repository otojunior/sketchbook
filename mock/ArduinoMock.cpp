#include "ArduinoMock.h"
#include <windows.h>
#include <iostream>

ArduinoMock::ArduinoMock() {
    for (int i = 0; i < ARDUINOMOCK_NUMBER_PINS; i++) {
        _pins[i].init(i);
    }
}

void ArduinoMock::pinMode(int pin, int mode) {
    // TODO: Implementar controle de range de pinos entre 1 e 13.
    this->_pins[pin].pinMode(mode);
}

int ArduinoMock::digitalRead(int pin) {
    int value = this->_pins[pin].digitalRead();
    return value;
}

void ArduinoMock::digitalWrite(int pin, int value) {
    this->_pins[pin].digitalWrite(value);
}

void ArduinoMock::delay(int miliseconds) {
    Sleep(miliseconds);
}

void ArduinoMock::debug(int pin) {
    int value = this->_pins[pin].digitalRead();
    std::cout << 
        "[DEBUG] Pin: " << pin << 
        " Value: " << value <<
        std::endl;
}