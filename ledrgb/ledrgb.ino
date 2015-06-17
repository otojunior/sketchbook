const int RED_PIN     = 10;
const int GREEN_PIN   = 9;
const int BLUE_PIN    = 11;
const int POT_PIN     = A0;
const int MIN_ANALOG  = 0;
const int MAX_ANALOG  = 255;
const int STEP        = 127;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int r = MIN_ANALOG; r < MAX_ANALOG; r+=STEP) {
    for (int g = MIN_ANALOG; g < MAX_ANALOG; g+=STEP) {
      for (int b = MIN_ANALOG; b < MAX_ANALOG; b+=STEP) {
        if ((r == MIN_ANALOG && g == MIN_ANALOG && b == MIN_ANALOG) ||
            (r == MAX_ANALOG && g == MAX_ANALOG && b == MAX_ANALOG)) {
          continue;
        }
        analogWrite(RED_PIN, r); 
        analogWrite(GREEN_PIN, g);
        analogWrite(BLUE_PIN, b);
        Serial.println(tostr(r,g,b));
        int potvalue = analogRead(POT_PIN);
        int delaytime = map(potvalue, 0, 1023, 1000, 0);
        delay(delaytime);
      }
    }
  }
}

String tostr(int i, int j, int k) {
  String s = "";
  s += i;
  s += " ";
  s += j;
  s += " ";
  s += k;
  return s;
}
