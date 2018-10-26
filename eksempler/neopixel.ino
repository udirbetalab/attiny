#include <Adafruit_NeoPixel.h>
#define PIN 0
#define NUM_PIXEL  12

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXEL, PIN, NEO_GRB + NEO_KHZ800);

int red[3]    = { 255, 0, 0 };
int yellow[3]    = { 255, 255, 0 };
int green[3]    = { 0, 255, 0 };
int blue[3]    = { 0, 0, 255 };
int purple[3]    = { 80, 0, 80 };
int aqua[3]    = { 0, 255, 255 };
int pink[3]    = { 255, 153, 255 };
int off[3]    = { 0, 0, 0 };

void setup() {
  strip.begin();
  strip.show(); 
  strip.setBrightness(50);
}

void farge(int color[3]) {
  for( int i = 0; i<NUM_PIXEL; i++){
    strip.setPixelColor(i, strip.Color(color[0], color[1], color[2]));
    strip.show();
    }
  }

void loop() {
  
  rainbowCycle(20);
  farge(red);
  delay(500);
  farge(yellow);
  delay(500);
  farge(green);
  delay(500);
  farge(purple);
  delay(500);
  farge(aqua);
  delay(500);
  farge(pink);
  delay(500);
  farge(off);
  delay(500);
}

void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*2; j++) { // 2 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else if(WheelPos < 170) {
    WheelPos -= 85;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  }
}
