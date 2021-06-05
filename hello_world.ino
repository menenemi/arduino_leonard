#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(32);
  delay(200);
  Keyboard.releaseAll();

  Keyboard.println("terminal");
  delay(1000);

  Keyboard.println("figlet 'Hello World!'");
  Keyboard.end();
}

void loop() {
}
