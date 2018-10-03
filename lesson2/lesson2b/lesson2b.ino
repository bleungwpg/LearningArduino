
int ledPin1 = 5; // first LED on pin 5
int ledPin2 = 9; // second LED on pin 9
int brightness1 = 0; // minimum brightness
int brightness2 = 255; // maximum brightness
int fadeAmount = 11; // how many points to fade the LED by
int fadeAmount2 = 51; // how many points to fade the LED by


// the setup routine runs once when you press reset:
void setup() {
// declare led pins to be outputs:
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of LED's:
  analogWrite(ledPin1, brightness1);
  analogWrite(ledPin2, brightness2);
  
  // change the brightness for next time through the loop:
  brightness1 = brightness1 - fadeAmount;
  brightness2 = brightness2 - fadeAmount2;
  
  // reverse the direction of the fading at the ends of the fade:
  if (brightness1 == 0 || brightness1 == 255){
    fadeAmount = -fadeAmount ;
  }
  // reverse the direction of the fading at the ends of the fade:
  if (brightness2 == 0 || brightness2 == 125){
    fadeAmount2 = -fadeAmount2 ;
  }
  
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
