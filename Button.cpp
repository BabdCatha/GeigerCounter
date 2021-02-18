#include "Button.h"
#include <TFT_eSPI.h>

Button::Button(uint16_t x, uint16_t y, int w, int h, const uint8_t* icon, int iconSX, int iconSY, int curve, int backgroundColor, int foregroundColor, int pressedColor, TFT_eSPI* tft) {
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    this->icon = icon;
    this->iconSX = iconSX;
    this->iconSY = iconSY;
    this->curve = curve;
    this->backgroundColor = backgroundColor;
    this->foregroundColor = foregroundColor;
    this->pressedColor = pressedColor;
	this->tft = tft;
}
void Button::init() {
	unPress();
}
void Button::press() {
	tft->fillRoundRect(x, y, w, h, curve, pressedColor);
	tft->drawBitmap(x, y, icon, iconSX, iconSY, foregroundColor);
}
void Button::unPress() {
	tft->fillRoundRect(x, y, w, h, curve, backgroundColor);
	tft->drawBitmap(x, y, icon, iconSX, iconSY, foregroundColor);
}