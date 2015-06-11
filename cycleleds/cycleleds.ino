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
 * 
 * --- CYCLE LEDS: ---
 * Author: Oto Soares Coelho Junior
 * Date: 11/06/2015
 * Description: Cycles a pre-defined series of leds to forward or backward 
 * direction in determined delay time between leds.
 */

// Constants
const int LEDS_QUANTITY = 5;
const int DELAY_TIME = 500;
const int FIRST_PIN = 13;
const bool BACK_CYCLE_DIRECTION = true;

// variables (components)
int leds[LEDS_QUANTITY];

/**
 * Default Arduino setup function.
 */
void setup() {
    int pin = FIRST_PIN;
    for (int i = 0; i < LEDS_QUANTITY; i++) {
        leds[i] = pin--;
        pinMode(leds[i], OUTPUT);
    }
}

/**
 * Default Arduino loop function.
 */
void loop() {
    // Forward cycle
    for (int i = 0; i < LEDS_QUANTITY; i++) {
        onlyLedOn(i);
        delay(DELAY_TIME);
    }
    
    // Back cycle
    if (BACK_CYCLE_DIRECTION) {
        for (int i = (LEDS_QUANTITY-2); i > 0; i--) {
            onlyLedOn(i);
            delay(DELAY_TIME);
        }
    }
}

/**
 * Turns on only one led.
 * @param ledIndex: Led index.
 */
void onlyLedOn(int ledIndex) {
    for (int i = 0; i < LEDS_QUANTITY; i++)
        digitalWrite(leds[i], LOW);
    digitalWrite(leds[ledIndex], HIGH);
}
