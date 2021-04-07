#include "light_utils.h"

/*
 * STATIC
 */
void colorBleed(led_t *currentKeyLedColors);
void white(led_t *currentKeyLedColors, uint8_t intensity);
void orange(led_t *currentKeyLedColors, uint8_t intensity);
void red(led_t *currentKeyLedColors, uint8_t intensity);
void purple(led_t *currentKeyLedColors, uint8_t intensity);
void yellow(led_t *currentKeyLedColors, uint8_t intensity);
void green(led_t *currentKeyLedColors, uint8_t intensity);
void blue(led_t *currentKeyLedColors, uint8_t intensity);
void rainbowHorizontal(led_t *currentKeyLedColors, uint8_t intensity);
void rainbowVertical(led_t *currentKeyLedColors, uint8_t intensity);
void miamiNights(led_t *currentKeyLedColors, uint8_t intensity);

/*
 * ANIMATED
 */
void animatedRainbowVertical(led_t *currentKeyLedColors);
void animatedRainbowFlow(led_t *currentKeyLedColors);
void animatedRainbowWaterfall(led_t *currentKeyLedColors);
void animatedBreathing(led_t *currentKeyLedColors);
void animatedSpectrum(led_t *currentKeyLedColors);
void animatedWave(led_t *currentKeyLedColors);

/*
 * ANIMATED - responding to key presses
 */
void reactiveFade(led_t *ledColors);
void reactiveFadeKeypress(led_t *ledColors, uint8_t row, uint8_t col);
void reactiveFadeInit(led_t *ledColors);

void reactivePulse(led_t *ledColors);
void reactivePulseKeypress(led_t *ledColors, uint8_t row, uint8_t col);
void reactivePulseInit(led_t *ledColors);
