

// SOS signalling with 3 LEDs
void setup() {

  pinMode(13, OUTPUT);  
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT); 
 
}


void loop() { 
  //led 1 blink
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  //led 2 blink
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  //led 3 blink
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW); 
  
  delay(700);
  //all together blink 
  allOnOff(500); 
  //with 0.5 sec delay  
  delay(700); 
  
}
void allOnOff(int delation){
  
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(delation);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW); 
  
  delay(delation);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  di gitalWrite(11, HIGH); 
  delay(delation);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW);
   
  delay(delation);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  delay(delation);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW);
  
}



