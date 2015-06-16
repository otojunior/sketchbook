#ifndef ARDUINOMOCK_H_
#define ARDUINOMOCK_H_

#include "Pin.h"

#define NUMBER_PINS 14

#define HIGH    1
#define LOW     0

class ArduinoMock {
    private:
       Pin _pins[NUMBER_PINS];
    public:
        ArduinoMock();
        void pinMode(int, int);
        int digitalRead(int);
        void digitalWrite(int, int);
        void delay(int);
        void debug(int);
};   

#endif