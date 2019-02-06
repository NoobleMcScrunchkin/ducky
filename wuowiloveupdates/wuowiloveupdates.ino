#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(200);
 DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("iexplore -k http://fakeupdate.net/win10u/");
 DigiKeyboard.delay(200);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 for (;;) {}
}
