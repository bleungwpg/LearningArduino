void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin (9600);
}
 void loop()
{
  // both wheels going backwards
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  
  
  // both wheels stop
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
  delay(1000);
  
  
  
  // both wheels going forward
  digitalWrite(11, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  
  
  // both wheels stop
  digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  delay(1000);
  
  
  
  // left wheel going forward
  digitalWrite(11, HIGH);
  delay(1000);
  
  
  // left wheel stops
  digitalWrite(11, LOW);
  delay(1000);
  
  
  // left wheel going backward
  digitalWrite(10, HIGH);
  delay(1000);
  
  
  // left wheel stops
  digitalWrite(10, LOW);
  delay(1000);
  
  // right wheel going backward
  digitalWrite (7, HIGH);
  delay(1000);
  
  // right wheel stops
  digitalWrite(7, LOW);
  delay(1000);
  
  
  // right wheel going forward
  digitalWrite (6, HIGH);
  delay(1000);
  
  // right wheel stops
  digitalWrite(6, LOW);
  delay(1000);
  
  
  // turn clockwise
  digitalWrite(10, HIGH);
  digitalWrite (6, HIGH);
  delay(1000);
  
  // stop
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  delay(1000);
  
  
  // turn anticlockwise
  digitalWrite(11, HIGH);
  digitalWrite (7, HIGH);
  delay(1000);
  
  // stop
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  delay(1000);
}

