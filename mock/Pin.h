#ifndef PIN_H_
#define PIN_H_

#define INPUT           0
#define INPUT_PULLUP    2
#define OUTPUT          1

class Pin {
    private:
        int _number;
        int _mode;
        int _value;
    public:
        Pin();
        void init(int);
        void pinMode(int);
        int digitalRead();
        void digitalWrite(int);
};

#endif