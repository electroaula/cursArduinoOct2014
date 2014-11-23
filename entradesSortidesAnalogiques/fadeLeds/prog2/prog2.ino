/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                 Programa2                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 0);      
  analogWrite(led1, 0);      
  analogWrite(led2, 0);     
  analogWrite(led3, 0);      
  analogWrite(led4, 0);     
  analogWrite(led5, 0);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 40);      
  analogWrite(led1, 0);      
  analogWrite(led2, 0);     
  analogWrite(led3, 0);      
  analogWrite(led4, 0);     
  analogWrite(led5, 0);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 80);      
  analogWrite(led1, 40);      
  analogWrite(led2, 0);     
  analogWrite(led3, 0);      
  analogWrite(led4, 0);     
  analogWrite(led5, 0);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 120);      
  analogWrite(led1, 80);      
  analogWrite(led2, 40);     
  analogWrite(led3, 0);      
  analogWrite(led4, 0);     
  analogWrite(led5, 0);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 160);      
  analogWrite(led1, 120);      
  analogWrite(led2, 80);     
  analogWrite(led3, 40);      
  analogWrite(led4, 0);     
  analogWrite(led5, 0);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 200);      
  analogWrite(led1, 160);      
  analogWrite(led2, 120);     
  analogWrite(led3, 80);      
  analogWrite(led4, 40);     
  analogWrite(led5, 0);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);      
  analogWrite(led1, 200);      
  analogWrite(led2, 160);     
  analogWrite(led3, 120);      
  analogWrite(led4, 80);     
  analogWrite(led5, 40);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);      
  analogWrite(led1, 255);      
  analogWrite(led2, 200);     
  analogWrite(led3, 160);      
  analogWrite(led4, 120);     
  analogWrite(led5, 80);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);      
  analogWrite(led1, 255);      
  analogWrite(led2, 255);     
  analogWrite(led3, 200);      
  analogWrite(led4, 160);     
  analogWrite(led5, 120);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);      
  analogWrite(led1, 255);      
  analogWrite(led2, 255);     
  analogWrite(led3, 255);      
  analogWrite(led4, 200);     
  analogWrite(led5, 160);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);      
  analogWrite(led1, 255);      
  analogWrite(led2, 255);     
  analogWrite(led3, 255);      
  analogWrite(led4, 255);     
  analogWrite(led5, 200);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);      
  analogWrite(led1, 255);      
  analogWrite(led2, 255);     
  analogWrite(led3, 255);      
  analogWrite(led4, 255);     
  analogWrite(led5, 255);     

  delay(velocitat);           // es queden leds velocitat ms en aquest estat  
}

//********** Funcions *************************************************************
