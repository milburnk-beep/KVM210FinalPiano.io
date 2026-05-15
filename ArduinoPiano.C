#define PIN_BUZZER 21
#define PRESS_VAL   180000    //Set a threshold to judge touch
#define RELEASE_VAL 75000     //Set a threshold to judge release
#define CHN 0

bool T8Touch = false;
bool T3Touch = false;
bool T9Touch = false;
bool T10Touch = false;
bool T11Touch = false;
bool T12Touch = false;
bool T13Touch = false;
bool T14Touch = false;
void setup() {
  Serial.begin(115200);
  pinMode(PIN_BUZZER, OUTPUT);
  ledcAttachChannel(PIN_BUZZER, 2000, 10, CHN);  //attach the led pin to pwm channel
  ledcWriteTone(PIN_BUZZER, 2000);        //Sound at 2KHz for 0.3 seconds
  delay(300);
}

void loop() {
  if (touchRead(T8) > PRESS_VAL) {        //If the touch sensor at 8 reads a signal higher than Press_val, the buzzer will play C6
    if (!T8Touch) {                       //Checks to make sure that the touch sensor wasn't already activated
      T8Touch = true;
      Serial.println("C6");               //Prints the note in the serial monitor
      ledcWriteTone(PIN_BUZZER, 1046.5);
      delay(10);
    }
  }
  if (touchRead(T8) < RELEASE_VAL) {      //Upon release, stops playing note
    if (T8Touch) {
      T8Touch = false;
      ledcWriteTone(PIN_BUZZER, 0);
    }
  }
  
  if (touchRead(T3) > PRESS_VAL) {        //Each chunk is a repeat of above with a different channel and note
    if (!T3Touch) {
      T3Touch = true;
      Serial.println("D6");
      ledcWriteTone(PIN_BUZZER, 1174.66);
      delay(10);
    }
  }
  if (touchRead(T3) < RELEASE_VAL) {
    if (T3Touch) {
      T3Touch = false;
      ledcWriteTone(PIN_BUZZER, 0);
    }
  }
   if (touchRead(T9) > PRESS_VAL) {
    if (!T9Touch) {
      T9Touch = true;
      Serial.println("E6");
      ledcWriteTone(PIN_BUZZER, 1318.51);
      delay(10);
    }
  }
  if (touchRead(T9) < RELEASE_VAL) {
    if (T9Touch) {
      T9Touch = false;
      ledcWriteTone(PIN_BUZZER, 0);
    }
  }
  
  if (touchRead(T10) > PRESS_VAL) {
    if (!T10Touch) {
      T10Touch = true;
      Serial.println("F6");
      ledcWriteTone(PIN_BUZZER, 1396.91);
      delay(10);
    }
  }
  if (touchRead(T10) < RELEASE_VAL) {
    if (T10Touch) {
      T10Touch = false;
      ledcWriteTone(PIN_BUZZER, 0);
    }
  }
 if (touchRead(T11) > PRESS_VAL) {
    if (!T11Touch) {
      T11Touch = true;
      Serial.println("G6");
      ledcWriteTone(PIN_BUZZER, 1567.98);
      delay(10);
    }
  }
  if (touchRead(T11) < RELEASE_VAL) {
    if (T11Touch) {
      T11Touch = false;
      ledcWriteTone(PIN_BUZZER, 0);
    }
  }
  
  if (touchRead(T12) > PRESS_VAL) {
    if (!T12Touch) {
      T12Touch = true;
      Serial.println("A6");
      ledcWriteTone(PIN_BUZZER, 1760);
      delay(10);;
    }
  }
  if (touchRead(T12) < RELEASE_VAL) {
    if (T12Touch) {
      T12Touch = false;
      ledcWriteTone(PIN_BUZZER, 0);
    }
  }
   if (touchRead(T13) > PRESS_VAL) {
    if (!T13Touch) {
      T13Touch = true;
      Serial.println("B6");
      ledcWriteTone(PIN_BUZZER, 1975.53);
      delay(10);
    }
  }
  if (touchRead(T13) < RELEASE_VAL) {
    if (T13Touch) {
      T13Touch = false;
      ledcWriteTone(PIN_BUZZER, 0);
    }
  }
  
  if (touchRead(T14) > PRESS_VAL) {
    if (!T14Touch) {
      T14Touch = true;
      Serial.println("C7");
      ledcWriteTone(PIN_BUZZER, 2093);
      delay(10);;
    }
  }
  if (touchRead(T14) < RELEASE_VAL) {
    if (T14Touch) {
      T14Touch = false;
      ledcWriteTone(PIN_BUZZER, 0);
    }
  }
  
}
