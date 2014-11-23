/**********************************************************************************
**                                                                               **
**                            Cruïlla de semàfors                                **
**                                                                               **
**                                 Programa1                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int semaforAR = 7;          // donar nom al pin 7 de l’Arduino
const int semaforAT = 8;          // donar nom al pin 8 de l’Arduino
const int semaforAV = 9;          // donar nom al pin 9 de l’Arduino
const int semaforBR = 10;         // donar nom al pin 10 de l’Arduino
const int semaforBT = 11;         // donar nom al pin 11 de l’Arduino
const int semaforBV = 12;         // donar nom al pin 12 de l’Arduino
int pausa = 100;             // definir variable de temps en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(semaforAR, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(semaforAT, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(semaforAV, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(semaforBR, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(semaforBT, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(semaforBV, OUTPUT);     // definir el pin 12 com una sortida
  
  digitalWrite(semaforAR, HIGH);    // posar a 5V el pin 7
  digitalWrite(semaforAT, LOW);    // posar a 0V el pin 8
  digitalWrite(semaforAV, LOW);    // posar a 0V el pin 9
  digitalWrite(semaforBR, HIGH);    // posar a 5V el pin 10
  digitalWrite(semaforBT, LOW);    // posar a 0V el pin 11
  digitalWrite(semaforBV, LOW);    // posar a 0V el pin 12  
  
  delay(pausa);                     // es queden leds pausa ms en aquest estat
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(semaforBR, LOW);     // apaga roig semàfor B
  digitalWrite(semaforBV, HIGH);    // encén verd semàfor B
  
  delay(4*pausa);                   // es queden leds 4*pausa ms en aquest estat
  
  digitalWrite(semaforBV, LOW);     // apaga verd semàfor B
  digitalWrite(semaforBT, HIGH);    // encén taronja semàfor B
  
  delay(pausa);                     // es queden leds pausa ms en aquest estat
  
  digitalWrite(semaforBT, LOW);     // apaga taronja semàfor B
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B
   
  delay(pausa);                     // es queden leds pausa ms en aquest estat
  
  digitalWrite(semaforAR, LOW);     // apaga roig semàfor A
  digitalWrite(semaforAV, HIGH);    // encén verd semàfor A
  
  delay(4*pausa);                   // es queden leds 4*pausa ms en aquest estat
  
  digitalWrite(semaforAV, LOW);     // apaga verd semàfor A
  digitalWrite(semaforAT, HIGH);    // encén taronja semàfor A
  
  delay(pausa);                     // es queden leds pausa ms en aquest estat
  
  digitalWrite(semaforAT, LOW);     // apaga taronja semàfor A
  digitalWrite(semaforAR, HIGH);    // encén roig semàfor A
  
   delay(pausa);                     // es queden leds pausa ms en aquest estat
}

//********** Funcions *************************************************************
