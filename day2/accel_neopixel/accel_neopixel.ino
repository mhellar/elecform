#include <Wire.h>
#include <Adafruit_LSM303.h>
#include <Adafruit_NeoPixel.h>

Adafruit_LSM303 lsm;

#define PIN            9
#define NUMPIXELS      1

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() 
{
#ifndef ESP8266
  while (!Serial);     // will pause Zero, Leonardo, etc until serial console opens
#endif
  Serial.begin(9600);
  
  // Try to initialise and warn if we couldn't detect the chip
  if (!lsm.begin())
  {
    Serial.println("Oops ... unable to initialize the LSM303. Check your wiring!");
    while (1);
  }
  pixels.begin();
}

void loop() 
{
  lsm.read();
  Serial.print("Accel X: "); Serial.print((int)lsm.accelData.x); Serial.print(" ");
  Serial.print("Y: "); Serial.print((int)lsm.accelData.y);       Serial.print(" ");
  Serial.print("Z: "); Serial.println((int)lsm.accelData.z);     Serial.print(" ");
  Serial.print("Mag X: "); Serial.print((int)lsm.magData.x);     Serial.print(" ");
  Serial.print("Y: "); Serial.print((int)lsm.magData.y);         Serial.print(" ");
  Serial.print("Z: "); Serial.println((int)lsm.magData.z);       Serial.print(" ");
  delay(100);

  if(lsm.magData.y < 0){
  multi(0,255,0);
  delay(100);
  multi(0,0,255);
  delay(100);
  }else if(lsm.magData.y > 0){
  multi(255,0,0);
  delay(10);
  multi(0,0,255);
  delay(10);
  }


}

void multi(int r, int g, int b){
    pixels.setPixelColor(0, pixels.Color(r,255,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
}



