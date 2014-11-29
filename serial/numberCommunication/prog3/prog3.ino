/**********************************************************************************
**                                                                               **
**                        Xifres                                                 **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
// pins for the LEDs:
const int ledPin = 13;
long numEntrat, num;
int numXifres;

//********** Setup ****************************************************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Entra un numero? ");
  // make the pins outputs:
  pinMode(ledPin, OUTPUT); 
}

//********** Loop *****************************************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    numEntrat = Serial.parseInt(); 
    num = numEntrat;
    numXifres = 0;
    
    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') { 
      do{
        num = num / 10;
        numXifres++;
      }while (num != 0);
      Serial.print("El el numero ");
      Serial.print(numEntrat);
      Serial.print(" te ");
      Serial.print(numXifres);
      Serial.println(" xifres.");
      Serial.println("");
      Serial.println("Entra un numero? ");
    }
  }
}

//********** Funcions *************************************************************
