#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

const char* TEXT       = "Hello world";
#define BG_COLOR   TFT_WHITE 
#define TEXT_COLOR TFT_BLACK

void setup() {
  tft.init();
  tft.setRotation(1);

  tft.fillScreen(BG_COLOR);
  tft.setTextColor(TEXT_COLOR, BG_COLOR);
  tft.setTextDatum(MC_DATUM);
  tft.drawString(TEXT, tft.width() / 2, tft.height() / 2, 4);
}

void loop() {
}

