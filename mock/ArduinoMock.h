#ifndef ARDUINOMOCK_H_
#define ARDUINOMOCK_H_

#include "Pin.h"

#define HIGH    1
#define LOW     0

const int ARDUINOMOCK_NUMBER_PINS = 14;

class ArduinoMock {
    private:
       Pin _pins[ARDUINOMOCK_NUMBER_PINS];
    public:
        ArduinoMock();
        void pinMode(int, int);
        int digitalRead(int);
        void digitalWrite(int, int);
        void delay(int);
        void debug(int);
};   

#endif