#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("iexplore -k ");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("https://www.youtube.com/embed/6n3pFFPSlW4");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){}
}
