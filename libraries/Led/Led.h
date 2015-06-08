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
#ifndef LED_H_
#define LED_H_

namespace otojunior {
  /**
   * Represents a Led component.
   */
  class Led {
    private:
      /**
       * The pin where the led is plugged on.
       */
      int _pin;
    public:
      /**
       * Default constructor. Creates a Led object.
       * @param pin: the pin where the led is plugged.
       */
      Led(int);
      
      /**
       * Turns on the led.
       */
      void on();
      
      /**
       * Turns off the led.
       */
      void off();
      
      /**
       * Blink the led.
       * @param int miliseconds: the blink rate in ms.
       */
      void blink(int);
  };  
}
#endif