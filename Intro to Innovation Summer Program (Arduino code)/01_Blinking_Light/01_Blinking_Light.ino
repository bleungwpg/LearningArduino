int led12 = 12;
int led13 = 13;

void setup() {    
   pinMode(led12, OUTPUT);
   pinMode(led13, OUTPUT);
}

void loop() {
  digitalWrite(led13, HIGH);
  delay(100);
  digitalWrite(led13, LOW);
  delay(100);


  digitalWrite(led12, HIGH);
  delay(100);
  digitalWrite(led12, LOW);
  delay(100);

}
