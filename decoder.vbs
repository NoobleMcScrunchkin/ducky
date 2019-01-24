Option Explicit:
Dim aruments, inFile, outFile:
Set aruments = WScript.Arguments:
inFile = aruments(0):
outFile = aruments(1):
Dim base64Encoded, base64Decoded, outByteArray:
dim objFS:
dim objTS:
set objFS =  CreateObject("Scripting.FileSystemObject"):
set objTS = objFS.OpenTextFile(inFile, 1):
base64Encoded = objTS.ReadAll:
base64Decoded = decodeBase64(base64Encoded):
writeBytes outFile, base64Decoded:
private function decodeBase64(base64):
dim DM, EL:
Set DM = CreateObject("Microsoft.XMLDOM"):
Set EL = DM.createElement("tmp"):
EL.DataType = "bin.base64":
EL.Text = base64:
decodeBase64 = EL.NodeTypedValue:
end function:
private Sub writeBytes(file, bytes):
Dim binaryStream:
Set binaryStream = CreateObject("ADODB.Stream"):
binaryStream.Type = 1:
binaryStream.Open:
binaryStream.Write bytes:
binaryStream.SaveToFile file, 2: