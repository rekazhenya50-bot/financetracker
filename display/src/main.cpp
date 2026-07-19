#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1);                    // 1 = альбомна, 320x240

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextDatum(MC_DATUM);            // координати = центр напису
  tft.drawString("Hello world", tft.width() / 2, tft.height() / 2, 4);
}

void loop() {
}
