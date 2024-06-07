//CODE#1 FOR GREEN LIGHT ON LED STRIP CONTROLLED BY WHITE  BUTTON

#include <Adafruit_NeoPixel.h>
#define LED_PIN 2 // THIS IS LED STRIP 
#define LED_COUNT 30

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800) ;





void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show();
  pinMode (12, INPUT_PULLUP);


}

bool LED;
bool latch;

void loop() {
  if(!digitalRead(12)&&!latch){
    LED=!LED;
    strip.setPixelColor(10,0,LED*100,0);
    strip.show();
    latch=1;
    delay(10);
  }
  if(latch&&digitalRead(12)) {
    latch=0;
    delay(10);
    }




//  if(!digitalRead(12)){ //pin12 is button
    //when button in pin 12 is pressed, colour set to 
//  strip.setPixelColor(3,0,0, !digitalRead(12)*100);
//    strip.show();
    }
 //    if(!digitalRead(12)){ //pin12 is button
    //when button in pin 12 is pressed, colour set to 
 //       strip.setPixelColor(3,0,0,0);
  //  strip.show();


    
 // }
  //    strip.show();

//}

