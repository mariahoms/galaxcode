
//////////////////////MÓDULO VERDE//////////////////////

const int VIBRA2 = 2; //Conectamos el motor2 en el pin 2
const int VIBRA3 = 3; //Conectamos el motor3 en el pin 3
const int VIBRA4 = 4; //Conectamos el motor4 en el pin 4
const int VIBRA5 = 5; //Conectamos el motor5 en el pin 5
const int VIBRA6 = 6; //Conectamos el motor6 en el pin 6
const int VIBRA7 = 7; //Conectamos el motor7 en el pin 7

void setup() {
    Serial.begin (9600);
    pinMode (VIBRA2, OUTPUT); //Declaramos el motor2 como salida       
    pinMode (VIBRA3, OUTPUT); //Declaramos el motor3 como salida    
    pinMode (VIBRA4, OUTPUT); //Declaramos el motor4 como salida    
    pinMode (VIBRA5, OUTPUT); //Declaramos el motor5 como salida    
    pinMode (VIBRA6, OUTPUT); //Declaramos el motor6 como salida    
    pinMode (VIBRA7, OUTPUT); //Declaramos el motor7 como salida    
 
}

void loop() {

//Empieza la secuencia de vibracion del modulo verde 

     digitalWrite(VIBRA7, HIGH);
      delay(250);
    digitalWrite(VIBRA7, LOW);
    digitalWrite(VIBRA2, HIGH);
       delay(250);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, HIGH);
       delay(250);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, HIGH);
       delay(250);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, HIGH);
       delay(250);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, HIGH);
       delay(250);
    digitalWrite(VIBRA6, LOW);
    digitalWrite(VIBRA7, HIGH);
    digitalWrite(VIBRA2, HIGH);
       delay(2000);
    digitalWrite(VIBRA7, LOW);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, HIGH);
    digitalWrite(VIBRA4, HIGH);
       delay(2000);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, HIGH);
    digitalWrite(VIBRA6, HIGH);
       delay(2000);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, LOW);

   
    digitalWrite(VIBRA7, LOW);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, LOW);
      delay(500);
    digitalWrite(VIBRA7, HIGH);
    digitalWrite(VIBRA2, HIGH);
    digitalWrite(VIBRA3, HIGH);
    digitalWrite(VIBRA4, HIGH);
    digitalWrite(VIBRA5, HIGH);
    digitalWrite(VIBRA6, HIGH);
      delay(3000);
    digitalWrite(VIBRA7, LOW);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, LOW);
      delay(500);
    digitalWrite(VIBRA7, HIGH);
    digitalWrite(VIBRA2, HIGH);
    digitalWrite(VIBRA3, HIGH);
    digitalWrite(VIBRA4, HIGH);
    digitalWrite(VIBRA5, HIGH);
    digitalWrite(VIBRA6, HIGH);
      delay(3000);
    digitalWrite(VIBRA7, LOW);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, LOW);   
    
}
