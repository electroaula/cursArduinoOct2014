/**********************************************************************************
**                                                                               **
**                       Parell o senar                                          **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
// pins for the LEDs:
const int ledPin = 13;
long num;

//********** Setup ****************************************************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.print("Entrar un numero, ");
  // make the pins outputs:
  pinMode(ledPin, OUTPUT); 
}

//********** Loop *****************************************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    num = Serial.parseInt(); 
    Serial.print("el ");
    Serial.print(num);
    
    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') { 
      
      if ( num % 2 == 0){
        Serial.println(" es parell.");
      }
      else{
        Serial.println(" es imparell.");
      }
      Serial.println("");
      Serial.print("Entrar un numero, ");
    }
  }
}

//********** Funcions *************************************************************
