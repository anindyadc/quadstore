#include <FastLED.h>

#define LED_PIN 5
#define NUM_LEDS 60

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  for (int i=0;i<60;i++){
  leds[i] = CRGB(150, 20, 50); #Switch on
  FastLED.show();
  delay(5);

  leds[i] = CRGB(0, 0, 0); #Switch off
  FastLED.show();
  delay(5);
  }
}
