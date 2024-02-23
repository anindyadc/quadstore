#include <FastLED.h>

#define LED_PIN 5
#define NUM_LEDS 60

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  leds[0] = CRGB(255, 255, 255);
  FastLED.show();
  delay(100);
}
