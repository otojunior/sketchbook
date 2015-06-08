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

// Pre-compilation constant definition to represent delay time (in ms.)
#define DELAY_TIME 500

using namespace otojunior;

// Led object plugged into pin 13
Led theLed(13);

// Initial config function
void setup() {
  // (No initial config needed in this simple example).
}

// Loop function
void loop() {
  theLed.on();
  delay(DELAY_TIME);
  theLed.off();
  delay(DELAY_TIME);
}