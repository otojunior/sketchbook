#include "Pin.h"

Pin::Pin() {
    init(0);
}

void Pin::init(int number) {
    this->_number = number;
    this->_mode = INPUT;
    this->_value = 0;
}

void Pin::pinMode(int mode) {
    this->_mode = mode;
}

int Pin::digitalRead() {
    return this->_value;
}

void Pin::digitalWrite(int value) {
    this->_value = value;
}