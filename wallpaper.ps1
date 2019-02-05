Invoke-WebRequest https://raw.githubusercontent.com/NoobleMcScrunchkin/ducky/master/shrek.jpg -OutFile ($env:USERPROFILE + "\shrek.jpg")
Add-Type @"
using System;
using System.Runtime.InteropServices;
using Microsoft.Win32;
namespace Wallpaper
{
   public enum Style : int
   {
       Tile, Center, Stretch, NoChange
   }
   public class Setter {
      public const int SetDesktopWallpaper = 20;
      public const int UpdateIniFile = 0x01;
      public const int SendWinIniChange = 0x02;
      [DllImport("user32.dll", SetLastError = true, CharSet = CharSet.Auto)]
      private static extern int SystemParametersInfo (int uAction, int uParam, string lpvParam, int fuWinIni);
      public static void SetWallpaper ( string path, Wallpaper.Style style ) {
         SystemParametersInfo( SetDesktopWallpaper, 0, path, UpdateIniFile | SendWinIniChange );
         RegistryKey key = Registry.CurrentUser.OpenSubKey("Control Panel\\Desktop", true);
	     key.SetValue(@"WallpaperStyle", "1") ; 
	     key.SetValue(@"TileWallpaper", "1") ;
         key.Close();
      }
   }
}
"@

[Wallpaper.Setter]::SetWallpaper(($env:USERPROFILE + "\shrek.jpg"), 0 )
start ($env:USERPROFILE + "\shrek.jpg")