void setup()
{
  // motors
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin (9600);

}


void loop()
{
  // both wheels going backwards for 1 second
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  
  
  // both wheels stop for 1 second
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
  delay(1000);
  
  
  
  // both wheels going forward for 1 second
  digitalWrite(11, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  
  
  // both wheels stop for 1 second
  digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  delay(1000);
  
  
  
  // left wheel going forward for 1 second
  digitalWrite(11, HIGH);
  delay(1000);
  
  
  // left wheel stops for 1 second
  digitalWrite(11, LOW);
  delay(1000);
  
  
  // left wheel going backward for 1 second
  digitalWrite(10, HIGH);
  delay(1000);
  
  
  // left wheel stops for 1 second
  digitalWrite(10, LOW);
  delay(1000);
  
  // right wheel going backward for 1 second
  digitalWrite (7, HIGH);
  delay(1000);
  
  // right wheel stops for 1 second
  digitalWrite(7, LOW);
  delay(1000);
  
  
  // right wheel going forward for 1 second
  digitalWrite (6, HIGH);
  delay(1000);
  
  // right wheel stops for 1 second
  digitalWrite(6, LOW);
  delay(1000);
  
  
  // turn clockwise for 1 second
  digitalWrite(10, HIGH);
  digitalWrite (6, HIGH);
  delay(1000);
  
  // stop for 1 second
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  delay(1000);
  
  
  // turn anticlockwise for 1 second
  digitalWrite(11, HIGH);
  digitalWrite (7, HIGH);
  delay(1000);
  
  // stop for 1 second
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  delay(1000);


}

