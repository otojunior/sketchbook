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
#include <Led.h>
#include <Arduino.h>

namespace otojunior {
  /**
   * Default constructor. Creates a Led object
   * with no pin definition.
   */
  Led::Led(void) {
  }
  
  /**
   * Default constructor. Creates a Led object.
   * @param pin: the pin where the led is plugged.
   */
  Led::Led(int pin) {
    this->set(pin);
  }
  
  /**
   * sets (define) the pin for the led.
   * @param pin: Pin where plugged the led.
   */
  void Led::set(int pin) {
    this->_pin = pin;
    pinMode(this->_pin, OUTPUT);
    digitalWrite(this->_pin, LOW);
  }
  
  /**
   * Turns on the led.
   */
  void Led::on() {
    digitalWrite(this->_pin, HIGH);
  }

  /**
   * Turns off the led.
   */
  void Led::off() {
    digitalWrite(this->_pin, LOW);
  }
}
