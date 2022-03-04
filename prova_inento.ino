
int LEDverd = 13;  
int LEDgroc = 12;
int LEDvermell = 11;
int LEDblau = 10;
int PulseSensor = A0;
int average = 0;
int pulso; 
int NumReadings = 20; 
int readIndex = 0;
int flag = 0;
int thisReading = 0;




void setup() {
  pinMode(LEDverd,OUTPUT);         
  pinMode(LEDgroc,OUTPUT);
  pinMode(LEDblau,OUTPUT);
  pinMode(LEDvermell,OUTPUT);
  Serial.begin(9600);

}

void loop() {

// funcio 1 
if (flag == 0){

  for (int thisReading = 0; thisReading < NumReadings; thisReading++) {
    
    delay (300); 
    pulso = analogRead (PulseSensor); 
  
    Serial.print ("tu pulso >>> ");
    Serial.println (pulso);
 
     
      digitalWrite(LEDverd, HIGH);
      digitalWrite(LEDgroc, HIGH);
      digitalWrite(LEDblau, HIGH);
      digitalWrite(LEDvermell, HIGH);   
      delay(100);
      digitalWrite(LEDverd, LOW);
      digitalWrite(LEDgroc, LOW);
      digitalWrite(LEDblau, LOW);
      digitalWrite(LEDvermell, LOW);  
      delay(100);
      
  }
  
  flag = 1;
  Serial.println ("flag1111111");
  Serial.println ("THIS READING"); 
  Serial.print (NumReadings); 

}

// funcio 2
if (flag == 1) {
  
  Serial.println ("flag1encuentro ");
  
  //for ( int thisReading; thisReading == NumReadings;thisReading++) {
if (NumReadings == 20); {
  
   Serial.println ("dentro");
   if(pulso > 0 && pulso <= 430 ){                          // If the signal is above "550", then "turn-on" Arduino's on-Board LED.  
     digitalWrite(LEDverd,HIGH);        
   } else {
     digitalWrite(LEDverd,LOW);                //  Else, the sigal must be below "550", so "turn-off" this LED.
   }
  if(pulso > 430 && pulso <= 500 ){                          // If the signal is above "550", then "turn-on" Arduino's on-Board LED.  
     digitalWrite(LEDgroc,HIGH);         
   } else {
     digitalWrite(LEDgroc,LOW);                //  Else, the sigal must be below "550", so "turn-off" this LED.
   }
  if(pulso > 500 && pulso <= 530 ){                          // If the signal is above "550", then "turn-on" Arduino's on-Board LED.  
     digitalWrite(LEDblau,HIGH); 
   } else {
     digitalWrite(LEDblau,LOW);                //  Else, the sigal must be below "550", so "turn-off" this LED.
   }
  if(pulso > 530 ){                          // If the signal is above "550", then "turn-on" Arduino's on-Board LED.  
     digitalWrite(LEDvermell,HIGH); 
   } else {
   digitalWrite(LEDvermell,LOW);                //  Else, the sigal must be below "550", so "turn-off" this LED.
   }
   
  delay (200); 
  

  Serial.println ("hola");
  
}

 flag = 2;
 Serial.println ("flag2");
 

}

//funcio 3 
if (flag == 2) {
  pulso = analogRead (PulseSensor); 
  if (pulso == 0) {flag = 0; }
  delay(1000);
}

}
