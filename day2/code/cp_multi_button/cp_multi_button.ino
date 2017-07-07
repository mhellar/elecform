#include <Adafruit_CircuitPlayground.h>
 
#define CAP_THRESHOLD   50
#define DEBOUNCE        250
 
////////////////////////////////////////////////////////////////////////////
boolean capButton(int pad) {
  if (CircuitPlayground.readCap(pad) > CAP_THRESHOLD) {
    return true;  
  } else {
    return false;
  }
}
 
////////////////////////////////////////////////////////////////////////////
void setup() {
  // Initialize serial.
  Serial.begin(9600); 
  
  // Initialize Circuit Playground library.
  CircuitPlayground.begin();
}
 
////////////////////////////////////////////////////////////////////////////
void loop() {
  // Check if capacitive touch exceeds threshold.
  if (capButton(0)) {
 
      // Print message.
      Serial.println("Button 0 Touched!");
      //add your code here
      // Bu t not  too often.
      delay(DEBOUNCE); 
  }
  else  if (capButton(1)) {
 
      // Print message.
      Serial.println("Button 1 Touched!");
      //add your code here
      // But not too often.
      delay(DEBOUNCE); 
  }
    else  if (capButton(2)) {
 
      // Print message.
      Serial.println( "Button 2 Touched!");
      //add your code here
      // But not too often.
      delay(DEBOUNCE); 
  }    else  if (capButton(3)) {
 
      // Print message.
      Serial.println("Button 3 Touched!");
      //add your code here
      // But not too often.
      delay(DEBOUNCE); 
  }
  else  if (capButton(9)) {
 
      // Print message.
      Serial.println("Button 10 Touched!");
      //add your code here
      // But not too often.
      delay(DEBOUNCE); 
  }
  else  if (capButton(12)) {
 
      // Print message.
      Serial.println("Button 12 Touched!");
      //add your code here
      // But not too often.
      delay(DEBOUNCE); 
  }
  else  if (capButton(6)) {
 
      // Print message.
      Serial.println("Button 3 Touched!");
      //add your code here
      // But not too often.
      delay(DEBOUNCE); 
  }
}
