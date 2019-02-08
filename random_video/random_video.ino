#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
 randomSeed(analogRead(0));
 String youArr[] = {"https://www.youtube.com/embed/6n3pFFPSlW4", "https://www.youtube.com/embed/-k3mVnRlQLU", "https://www.youtube.com/embed/-2NqSBWJ6xk"};
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(200);
 DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 String message = "iexplore -k " + youArr[random(sizeof(youArr))];
 DigiKeyboard.print(message);
 DigiKeyboard.delay(200);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 for (;;) {}
}
