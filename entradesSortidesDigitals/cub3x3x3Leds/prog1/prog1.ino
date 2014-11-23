/**********************************************************************************
**                                                                               **
**                              Cub de 3x3x3 LEDs                                **
**                                                                               **
**                                 Programa1                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int col1 = 10;
const int col2 = 9;
const int col3 = 8;
const int col4 = 7;
const int col5 = 6;
const int col6 = 5;
const int col7 = 4;
const int col8 = 3;
const int col9 = 2;
const int niv1 = 11;
const int niv2 = 12;
const int niv3 = 13;

int pausa = 200;   // velocita de moviment del cub

//********** Setup ****************************************************************
void setup()
{
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);
  pinMode(col9, OUTPUT);
  pinMode(niv1, OUTPUT);
  pinMode(niv2, OUTPUT);
  pinMode(niv3, OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(niv1, HIGH);  // mostrat tot el nivell 1
  pinMode(col1, HIGH);
  delay(pausa);
  pinMode(col1, LOW);
  pinMode(col2, HIGH);
  delay(pausa);
  pinMode(col2, LOW);
  pinMode(col3, HIGH);
  delay(pausa);
  pinMode(col3, LOW);
  pinMode(col4, HIGH);
  delay(pausa);
  pinMode(col4, LOW);
  pinMode(col5, HIGH);
  delay(pausa);
  pinMode(col5, LOW);
  pinMode(col6, HIGH);
  delay(pausa);
  pinMode(col6, LOW);
  pinMode(col7, HIGH);
  delay(pausa);
  pinMode(col7, LOW);
  pinMode(col8, HIGH);
  delay(pausa);
  pinMode(col8, LOW);
  pinMode(col9, HIGH);
  delay(pausa);
  pinMode(col9, LOW);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, HIGH);  // mostrat tot el nivell 2
  pinMode(col1, HIGH);
  delay(pausa);
  pinMode(col1, LOW);
  pinMode(col2, HIGH);
  delay(pausa);
  pinMode(col2, LOW);
  pinMode(col3, HIGH);
  delay(pausa);
  pinMode(col3, LOW);
  pinMode(col4, HIGH);
  delay(pausa);
  pinMode(col4, LOW);
  pinMode(col5, HIGH);
  delay(pausa);
  pinMode(col5, LOW);
  pinMode(col6, HIGH);
  delay(pausa);
  pinMode(col6, LOW);
  pinMode(col7, HIGH);
  delay(pausa);
  pinMode(col7, LOW);
  pinMode(col8, HIGH);
  delay(pausa);
  pinMode(col8, LOW);
  pinMode(col9, HIGH);
  delay(pausa);
  pinMode(col9, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, HIGH);  // mostrat tot el nivell 3
  pinMode(col1, HIGH);
  delay(pausa);
  pinMode(col1, LOW);
  pinMode(col2, HIGH);
  delay(pausa);
  pinMode(col2, LOW);
  pinMode(col3, HIGH);
  delay(pausa);
  pinMode(col3, LOW);
  pinMode(col4, HIGH);
  delay(pausa);
  pinMode(col4, LOW);
  pinMode(col5, HIGH);
  delay(pausa);
  pinMode(col5, LOW);
  pinMode(col6, HIGH);
  delay(pausa);
  pinMode(col6, LOW);
  pinMode(col7, HIGH);
  delay(pausa);
  pinMode(col7, LOW);
  pinMode(col8, HIGH);
  delay(pausa);
  pinMode(col8, LOW);
  pinMode(col9, HIGH);
  delay(pausa);
  pinMode(col9, LOW);
  digitalWrite(niv3, LOW);
}

//********** Funcions *************************************************************
