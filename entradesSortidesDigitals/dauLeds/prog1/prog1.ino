/**********************************************************************************
**                                                                               **
**                                Dau de LEDs                                    **
**                                                                               **
**                                 Programa1                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int leds4 = 5;          // donar nom al pin 5 de l’Arduino
const int leds3 = 6;          // donar nom al pin 6 de l’Arduino
const int leds2 = 7;          // donar nom al pin 7 de l’Arduino
const int led1 = 8;           // donar nom al pin 8 de l’Arduino

int pausa = 2000;              // definir variable de pausa ms entre números

//********** Setup ****************************************************************
void setup()
{
  pinMode(leds4, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(leds3, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(leds2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led1, OUTPUT);      // definir el pin 8 com una sortida
  
  digitalWrite(leds4, LOW);   // posar a 0V el pin 5
  digitalWrite(leds3, LOW);   // posar a 0V el pin 6
  digitalWrite(leds2, LOW);   // posar a 0V el pin 7
  digitalWrite(led1, HIGH);   // posar a 5V el pin 8
  
  delay(pausa);
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led1, LOW);    // mostrar el 2
  digitalWrite(leds2, HIGH);  
  
  delay(pausa);
  
  digitalWrite(leds2, LOW);    // mostrar el 3
  digitalWrite(led1, HIGH); 
  digitalWrite(leds3, HIGH);  
  
  delay(pausa);
  
  digitalWrite(led1, LOW);    // mostrar el 4
  digitalWrite(leds2, HIGH); 
  
  delay(pausa);
  
  digitalWrite(led1, HIGH);   // mostrar el 5  
  
  delay(pausa);
  
  digitalWrite(led1, LOW);    // mostrar el 6
  digitalWrite(leds4, HIGH);
    
  delay(pausa);
  
  digitalWrite(leds4, LOW);   // mostrar el 1
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);  
  digitalWrite(led1, HIGH);   
  
  delay(pausa);
}

//********** Funcions *************************************************************
