#include <Adafruit_NeoPixel.h>

#include <WiFiClient.h>

#include <EEPROM.h>


#define PIN            12
#define NUMPIXELS      9

#define SN "glowtie_v0.4_BETA"

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void on() {
  //M
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //O
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(255,255,255));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //R
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(255,255,255));
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(255,255,255));
  pixels.setPixelColor(3, pixels.Color(0, 0, 0));
  pixels.show();
  delay(3000);
   //E
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //H
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(0, 0, 0));
  pixels.show();
  delay(3000);
   //U
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(255,255,255));
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //M
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //A
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //N
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(255,255,255));
  pixels.setPixelColor(3, pixels.Color(0, 0, 0));
 pixels.show();
  delay(3000);
   //T
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(255,255,255));
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(0, 0, 0));
  pixels.show();
  delay(3000);
   //H
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(0, 0, 0));
  pixels.show();
  delay(3000);
   //A
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //N
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(255,255,255));
  pixels.setPixelColor(3, pixels.Color(0, 0, 0));
  pixels.show();
  delay(3000);
    //H
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(0, 0, 0));
  pixels.show();
  delay(3000);
   //U
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(255,255,255));
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //M
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //A
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(255,255,255));
  pixels.show();
  delay(3000);
   //N
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.setPixelColor(1, pixels.Color(255,255,255));
  pixels.setPixelColor(2, pixels.Color(255,255,255));
  pixels.setPixelColor(3, pixels.Color(0, 0, 0));
  pixels.show();
  delay(3000);
}
void lowBatt(int btMode) {

  while (btMode == 1) {
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));
    pixels.setPixelColor(3, pixels.Color(255, 0, 0));
    pixels.show();
  }
}

ADC_MODE(ADC_VCC);


int const battCacheSize = 30;
int battCachePosition = 0;
int battCache[battCacheSize] = {3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300};
int summedCache = 99000;
float avgBatt = 3300;
int newBatt = 0;

int delayVal = 8;
int btMode = 0;
int rVal = 0;
int gVal = 0;
int bVal = 0;
int brightness = 30;
int checkBattTimer = 0;
int prevMode = 0;

int ba = 0;
int bb = 0;
int bc = 0;
int bd = 0;
int bi = 0;

int pa = 0;
int pi = 0;

int ii = 0;

unsigned long prevMillis = millis();


void setup() {
   Serial.begin(115200);

  pixels.begin();
  pixels.setPixelColor(8, pixels.Color(255,153,051));
  pixels.show();
  //storing 4 eeprom values. the 0th is the saved mode, then the 1-3th are r, g, and b values, respectively. 4 bytes per int with 4 ints is 16 bytes:
 

  //CHECKING BATTERY

  newBatt = ESP.getVcc();
  if (newBatt <= 3100) {
    btMode = 1;
    Serial.println("Battery low, going into low battery mode.");
  }

 
  checkBattTimer = millis();


}

void loop() {
   //yield();
 
  //Checking battery value

  if (millis() >= checkBattTimer + 5000) {
    newBatt = ESP.getVcc();
    Serial.println(newBatt);
    if (newBatt <= 3100) {
      btMode = 1;
    }
    checkBattTimer = millis();
  }




  //LOW BATTERY MODE
 if (btMode == 1) {
    if (prevMode != 1) {
      lowBatt(btMode);
      prevMode = 1;
    }
  } else {
    on();
  }
  
}
