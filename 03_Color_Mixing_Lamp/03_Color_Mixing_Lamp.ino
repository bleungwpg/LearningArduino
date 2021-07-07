const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

void setup() {
  
  Serial.begin(9600); 

  
  pinMode(greenLEDPin,OUTPUT);
  pinMode(redLEDPin,OUTPUT);
  pinMode(blueLEDPin,OUTPUT);
}

void loop() {

  // turn on light to red for 1 second
  analogWrite(redLEDPin, 255);
  analogWrite(greenLEDPin, 0);
  analogWrite(blueLEDPin, 0);
  delay(1000);

  // turn on light to green for 1 second
  analogWrite(redLEDPin, 0);
  analogWrite(greenLEDPin, 255);
  analogWrite(blueLEDPin, 0);
  delay(1000);

  // turn on light to blue for 1 second
  analogWrite(redLEDPin, 0);
  analogWrite(greenLEDPin, 0);
  analogWrite(blueLEDPin, 255);
  delay(1000);

  // try adding other colors of your own.  Google "RGB table" and look for other colors!

}
