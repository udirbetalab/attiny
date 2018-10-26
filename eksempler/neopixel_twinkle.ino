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


void loop() {
  Twinkle(green, 7, 100, false); //farge satt til grønn, antall twinkle er satt til 7
}

void Twinkle(int color[3], int Count, int SpeedDelay, boolean OnlyOne) {
  setAll(0,0,0);
  
  for (int i=0; i<Count; i++) {
     setPixel(random(NUM_PIXEL),color[0], color[1], color[2]);
     showStrip();
     delay(SpeedDelay);
     if(OnlyOne) { 
       setAll(0,0,0); 
     }
   }
  
  delay(SpeedDelay);
}

void showStrip() {
   strip.show();
}

void setPixel(int Pixel, byte red, byte green, byte blue) {
   strip.setPixelColor(Pixel, strip.Color(red, green, blue));
}

void setAll(byte red, byte green, byte blue) {
  for(int i = 0; i < NUM_PIXEL; i++ ) {
    setPixel(i, red, green, blue); 
  }
  showStrip();
}
