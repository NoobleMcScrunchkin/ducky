#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("terminal");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("curl -O https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/shrek.jpg");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("osascript -e 'tell application \"Finder\" to set desktop picture to POSIX file \"~/shrek.jpg\"'");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  for (;;) {} 
}
