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
       digitalWrite(10, HIGH);
       digitalWrite(7, HIGH); 
       delay(3000);
       
    
       digitalWrite(11, HIGH);
       digitalWrite(6, HIGH);
       delay(3000);
    
       digitalWrite(10, LOW);
       digitalWrite(6, HIGH);  
       delay(3000);
    
       digitalWrite(10, HIGH);
       digitalWrite(6, LOW);  
       delay(3000);
       
       digitalWrite(11, LOW);
       digitalWrite(7, HIGH);  
       delay(3000);
  
       digitalWrite(11, HIGH);
       digitalWrite(7, LOW);  
       delay(3000);
  
  Serial.println ("Master Reset");
  digitalWrite(6, LOW);  
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

