#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("sndvol.exe -f");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  for (int i = 0; i < 100; i++) {
    DigiKeyboard.sendKeyStroke(0x52);
  }
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("iexplore -k https://www.youtube.com/embed/6n3pFFPSlW4");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(0x53, MOD_ALT_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0x5D);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0x53);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0x53);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0x53);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0x5D);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0x53);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0x53, MOD_ALT_LEFT | MOD_SHIFT_LEFT);
  for(;;){}
}
