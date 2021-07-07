const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

const int lightSensorPin = A0;

// Change RGB values here
int redValue = 0;
int greenValue = 255;
int blueValue = 0;

int lightSensorValue = 0;

void setup() {
  
  Serial.begin(9600); 

  
  pinMode(greenLEDPin,OUTPUT);
  pinMode(redLEDPin,OUTPUT);
  pinMode(blueLEDPin,OUTPUT);
}

void loop() {

  
  lightSensorValue = analogRead(lightSensorPin);
  delay(5);
  lightSensorValue = lightSensorValue/4;

  
  analogWrite(redLEDPin, redValue*lightSensorValue);
  analogWrite(greenLEDPin, greenValue*lightSensorValue);
  analogWrite(blueLEDPin, blueValue*lightSensorValue);


}
