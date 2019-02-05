 Invoke-WebRequest https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/shrek.jpg -OutFile "C:\shrek.jpg"
 reg add "HKEY_CURRENT_USER\Control Panel\Desktop" /v Wallpaper /t REG_SZ /d C:\shrek.jpg /f
 Start-Sleep -s 10
 rundll32.exe user32.dll, UpdatePerUserSystemParameters, 0, $false