Invoke-WebRequest https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/shrek.jpg -OutFile ($env:USERPROFILE + "\shrek.jpg")
set-itemproperty -path "HKCU:Control Panel\Desktop" -name WallPaper -value ($env:USERPROFILE + "\shrek.jpg")
Start-Sleep -s 10
rundll32.exe user32.dll, UpdatePerUserSystemParameters