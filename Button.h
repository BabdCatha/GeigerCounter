#ifndef BUTTON_H
#define BUTTON_H
#include <Arduino.h>
#include <TFT_eSPI.h>

class Button {
  
  private:
    uint16_t x;
	uint16_t y;
	int w;
	int h;
	const uint8_t* icon;
	int iconSX;
	int iconSY;
	int curve;
	int backgroundColor;
	int foregroundColor;
	int pressedColor;
	TFT_eSPI* tft;
    
  public:
    Button(uint16_t x, uint16_t y, int w, int h, const uint8_t* icon, int iconSX, int iconSY, int curve, int backgroundColor, int foregroundColor, int pressedColor, TFT_eSPI* tft);
    void init();
    void press();
    void unPress();
};
#endif