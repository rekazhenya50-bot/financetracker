#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

// --- Женя міняє тільки ці три рядки ---
const char* TEXT       = "Hello world";
#define BG_COLOR   TFT_WHITE   // колір фону
#define TEXT_COLOR TFT_BLACK   // колір тексту
// --------------------------------------

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
