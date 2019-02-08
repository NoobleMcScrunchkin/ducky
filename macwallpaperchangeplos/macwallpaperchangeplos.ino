#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("photobooth");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_GUI_LEFT | MOD_SHIFT_LEFT);
  while (true) {
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
  }

  for (;;) {} 
}
