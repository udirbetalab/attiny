#include <Adafruit_NeoPixel.h>
#define PIN 0
#define NUM_PIXEL  4 //her er det brukt fire neopixel

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXEL, PIN, NEO_GRB + NEO_KHZ800);

int red[3]    = { 255, 0, 0 };
int yellow[3] = { 255, 255, 0 };
int green[3]  = { 0, 255, 0 };
int off[3]    = { 0, 0, 0 };

void setup() {
  strip.begin();
  strip.show();
}

void trafikklys(int nr, int color[3]) {
  strip.setPixelColor(nr, strip.Color(color[0], color[1], color[2]));
  strip.show();
  }

void loop() {
  strip.setBrightness(10);
  trafikklys(3,red);
  trafikklys(2,off);
  trafikklys(1,off);
  trafikklys(0,green);
  delay(1500);
  trafikklys(2,yellow);
  delay(700);
  trafikklys(3,off);
  trafikklys(2,off);
  trafikklys(1,green);
  trafikklys(0,red);
  delay(2000);
  trafikklys(3,off);
  trafikklys(2,yellow);
  trafikklys(1,off);
  delay(1000);
}
