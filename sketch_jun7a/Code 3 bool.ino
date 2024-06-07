//CODE#3 - LED RANDOM COLOR CHANGE 5/20 (code done jasmin, jessey, nicole)

#include <Adafruit_NeoPixel.h>
#define LED_PIN 2 // THIS IS LED STRIP 
#define LED_COUNT 20

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800) ;


bool dice[20][20]={{1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0},
                   {1,1,1,1,1,0,0,1,1,0,1,0,1,0,0,0,0,1,0,1},
                   {0,1,1,1,1,0,1,0,1,0,0,0,1,1,0,0,1,1,0,0},
                   {1,1,1,0,1,1,0,1,0,0,0,0,1,1,0,0,1,0,0,1},
                   {1,0,1,0,1,1,1,0,1,1,1,0,1,0,1,0,1,0,1,0},
                   {0,1,1,0,1,1,1,1,1,0,0,0,0,0,0,1,1,0,1,0},
                   {1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,0,1},
                   {1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,1}};
                   




                      // {1,0,0,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1},
                      // {1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,0,1},
                      // {0,1,1,0,0,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1},
                      // {1,1,0,0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1},
                      // {1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,0,1,1,0,1},
                      // {1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1}};







void setup() {
  // put your setup code here, to run once:
  strip.begin();
  Serial.begin(115200);
  strip.begin();
  for(int a=0;a<20;a++){
    setDice(a,random(65536));
  strip.show();
  delay(800);
  strip.setPixelColor(a,0,0,0);
  }
  strip.show();  
  pinMode (12, INPUT_PULLUP);
}

void loop() {
//   for(int a=0;a<LED_COUNT;a++){
// strip.setPixelColor(a,strip.ColorHSV(random(65536)));
// strip.show();
// delay(50);
// strip.setPixelColor(a,0,0,0);
if(!digitalRead(12)) {
  setDice(random(20), random(65536));
  strip.show();
  delay(120);

    }

  }
  

void setDice(int rollz, word colorz) {
  for(int a=0;a<20;a++){
    if(dice[rollz] [a]) {
      strip.setPixelColor(a,strip.ColorHSV(colorz));

  } else {
    strip.setPixelColor(a,0,0,0);
  }
  }
  }


//  if(!digitalRead(12)){ //pin12 is button
    //when button in pin 12 is pressed, colour set to 
//  strip.setPixelColor(3,0,0, !digitalRead(12)*100);
//    strip.show();
    //}
 //    if(!digitalRead(12)){ //pin12 is button
    //when button in pin 12 is pressed, colour set to 
 //       strip.setPixelColor(3,0,0,0);
  //  strip.show();


    
 // }
  //    strip.show();

//}


