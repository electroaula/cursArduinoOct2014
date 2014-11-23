/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                 Programa6                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledPin[] = {5, 6, 7, 8, 9, 10, 11, 12};   
const int buttonPin[] = {2, 3};
boolean buttonEstat[] = {LOW, LOW};

int ledNum = 8;
int buttonNum = 2;
byte num = 0;               // definir variable del número a mostrar tipus byte
                            // a un byte si fem 255+1=0 i si fem 0-1=255

//********** Setup ****************************************************************
void setup()
{
  for(int i = 0; i < ledNum; i++) // definir sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  for(int i = 0; i < buttonNum; i++) // definir entrades
  {
    pinMode(buttonPin[i], OUTPUT);
  }
  for(int j = 0; j < ledNum ; j++)  // definir estat inicals sortides, mostren número 0
  { 
    digitalWrite(ledPin[j], 0);
  }
}

//********** Loop *****************************************************************
void loop()
{
  buttonEstat[0] = digitalRead(buttonPin[0]);
  buttonEstat[1] = digitalRead(buttonPin[1]);
  
  if (buttonEstat[0] == HIGH)  // incrementar
  { 
    num = num + 1;                 // incrementar el número a mostrar
    for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }
  
  if (buttonEstat[1] == HIGH)  // disminuir
  { 
    num = num - 1;                 // disminuir el número a mostrar
    for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }
}

//********** Funcions *************************************************************
