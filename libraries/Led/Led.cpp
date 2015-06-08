/*
 * Copyright 2015 Oto Soares Coelho Junior
 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "Arduino.h"
#include "Led.h"

/**
 * Default constructor. Creates a Led object.
 * @param pin: the pin where the led is plugged.
 */
Led::Led(int pin) {
	_pin = pin;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
}

/**
 * Turns on the led.
 */
void Led::on() {
	digitalWrite(_pin, HIGH);
}

/**
 * Turns off the led.
 */
void Led::off() {
	digitalWrite(_pin, HIGH);
}

/**
 * Blink the led.
 * @param int miliseconds: the blink rate in ms.
 */
void Led::blink(int miliseconds) {
	digitalWrite(_pin, HIGH);
	delay(miliseconds);
	digitalWrite(_pin, LOW);
	delay(miliseconds);
}