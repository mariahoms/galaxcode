
///////////////CÓDIGO CAJA RANGOS///////////////////////

int LEDverd = 9;  //Conectamos el led verde en el pin 9 
int LEDgroc = 12; //Conectamos el led amarillo en el pin 12 
int LEDvermell = 10; //Conectamos el led rojo en el pin 10
int LEDblau = 11; //Conectamos el led azul en el pin 11
int PulseSensor = A0; //Conectamos el pulsometro en el pin A0
int pulso; //Declaramos la variable pulso
int NumReadings = 20; // Declaramos que el numero de "Readings" (veces que lee el pulso) son 20
int flag = 0; //Declaramos que la variable flag es 0

void setup() {
  pinMode(LEDverd,OUTPUT); //Declaramos el led verde como salida        
  pinMode(LEDgroc,OUTPUT); //Declaramos el led amarillo como salida 
  pinMode(LEDblau,OUTPUT); //Declaramos el led azul como salida 
  pinMode(LEDvermell,OUTPUT); //Declaramos el led rojo como salida 
  Serial.begin(9600); 

}

void loop() {

// Inicializamos la primera función 

if (flag == 0){

  for (int thisReading = 0; thisReading < NumReadings; thisReading++) // El programa empieza el contador a 0, va sumando 1 hasta llegar a 20
  {
    
    delay (300); 
    pulso = analogRead (PulseSensor); //La variable pulso lee el pulsometro 
  
    Serial.print ("tu pulso >>> ");
    Serial.println (pulso);
 
 // Feedback 

      digitalWrite(LEDverd, HIGH); 
      digitalWrite(LEDgroc, HIGH);
      digitalWrite(LEDblau, HIGH);
      digitalWrite(LEDvermell, HIGH);   
      delay(300);
      digitalWrite(LEDverd, LOW);
      digitalWrite(LEDgroc, LOW);
      digitalWrite(LEDblau, LOW);
      digitalWrite(LEDvermell, LOW);  
      delay(300);
      
  }

  flag = 1; //Cuando ya se ha leído el pulso 20 veces, la variable flag pasa a ser 1
 
}

// Inicializamos la segunda función 
if (flag == 1) {
  
  if (NumReadings == 20); {  //Si el pulso se ha leído 20 veces 
  
   if(pulso > 0 && pulso <= 430 ){                          // Si la señal es mayor a 0 y más pequeña o igual a 430, enciende el LEDverd  
     digitalWrite(LEDverd,HIGH);        
   } else {
     digitalWrite(LEDverd,LOW);                // Si la señal no es mayor a 0 y más pequeña o igual a 430, apaga el LEDverd  
   }
  if(pulso > 430 && pulso <= 500 ){                          // Si la señal es mayor a 430 y más pequeña o igual a 500, enciende el LEDgroc
     digitalWrite(LEDgroc,HIGH);         
   } else {
     digitalWrite(LEDgroc,LOW);                //  Si la señal no es mayor a 430 y más pequeña o igual a 500, apaga el LEDgroc
   }
  if(pulso > 500 && pulso <= 530 ){                          // Si la señal es mayor a 500 y más pequeña o igual a 530, enciende el LEDblau
     digitalWrite(LEDblau,HIGH); 
   } else {
     digitalWrite(LEDblau,LOW);                // Si la señal no es mayor a 500 y más pequeña o igual a 530, enciende el LEDblau
   }
  if(pulso > 530 ){                          // Si la señal es mayor a 530, enciende el LEDvermell.
     digitalWrite(LEDvermell,HIGH); 
   } else {
   digitalWrite(LEDvermell,LOW);                // Si la señal no es mayor a 530, enciende el LEDvermell.
   }
   
  delay (200); 
  
}

 flag = 2; //Cuando se ha dado el resultado, la variable flag pasa a ser 1

}

// Inicializamos la tercera función 

if (flag == 2) { //La variable flag es 2
  pulso = analogRead (PulseSensor); 
  if (pulso == 0) {flag = 0; } //Si el pulsometro detecta que el pulso es 0, cambia la variable flag a 0 
  delay(1000);
}

}
