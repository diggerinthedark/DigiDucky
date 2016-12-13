#include "DigiKeyboard.h"

int iterationCounter = 0;

void setup() {
  
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);   
  digitalWrite(0, LOW);   
  digitalWrite(1, LOW); 
  
}


void loop() {
  
  DigiKeyboard.update();

  if (iterationCounter == 0) {
    DigiKeyboard.sendKeyStroke(0);
  
  
    DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT); //minimise all windows
  DigiKeyboard.delay(1000);  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_RIGHT); //open run dialogue
  
 DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.print("iexplore https://www.youtube.com/watch?v=dQw4w9WgXcQ"); //point to iexplore and pass rick astley link
   DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //press ok
  
    
   }

  delay(1000);
  
  iterationCounter++;
}
