//LED LIGHT COLOUR CHANGE WHERE YOU CLICK BUTTON AND THE 5 CHANGE COLORS

#include <Adafruit_NeoPixel.h>
#define LED_PIN 2 // THIS IS LED STRIP 
#define LED_COUNT 30

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800) ;

int pix;

void setup() {
  // put your setup code here, to run once:
  strip.begin();
 // strip.show();
  pinMode (12, INPUT_PULLUP);
  strip.setPixelColor(pix,strip.ColorHSV(random(65536)));
  strip.show();
  

}
bool latch;

void loop() {
  if(!digitalRead(12)&&!latch){ // THE ARDUINO IS READING THE BUTTON!
  strip.setPixelColor(pix,0,0,0);
  pix++;
  pix%=LED_COUNT;
  strip.setPixelColor(pix,strip.ColorHSV(random(65536)));
  strip.show();
  latch=1;
  delay(10);
    }
  if(latch&&digitalRead(12)){
  latch=0;
  delay(10);
  }

}


//  if(!digitalRead(12)){ //pin12 is button
    //when button in pin 12 is pressed, colour set to 
//  strip.setPixelColor(3,0,0, !digitalRead(12)*100);
//    strip.show();
    //}
 //    if(!digitalRead(12)){ //pin12 is button
    //when button in pin 12 is pressed, color set to 
 //       strip.setPixelColor(3,0,0,0);
  //  strip.show();


    
 // }
  //    strip.show();

//}
