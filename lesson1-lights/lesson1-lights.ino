// SETUP LED ============================================
// Set up LED on a PWM pin (digital 13)
int led1 = 13;

void setup()
{
  // led
  pinMode(led1, OUTPUT);  
}

void loop()
{
  // ---------------------------------------------
  // turn on led1 for 1000 millisecond or 1 second
  digitalWrite(led1, HIGH);
  delay(1000);

  // turn light off for 1 second
  digitalWrite(led1, LOW);
  delay(1000);
  // ---------------------------------------------

}

