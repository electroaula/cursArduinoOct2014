/**********************************************************************************
**                                                                               **
**                         Rs serie i paral·lel                                  **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************

//********** Variables ************************************************************
// pins for the LEDs:
const int ledPin = 13;
// variables for the R's
float r1, r2;
// variables for the results
float rSerie, rParalel;

//********** Setup ****************************************************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
  // make the pins outputs:
  pinMode(ledPin, OUTPUT); 
}

//********** Loop *****************************************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    r1 = Serial.parseInt(); 
    Serial.print("r1 = ");
    Serial.print(r1);
    Serial.print(" ohms\t");
    // do it again:
    r2 = Serial.parseInt(); 
    Serial.print("r2 = ");
    Serial.print(r2);
    Serial.println(" ohms");

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {
      // calculate serie and paralel
      rSerie = r1 + r2;
      rParalel = (r1 * r2) / (r1 + r2);
      
      Serial.print("rSerie = ");
      Serial.print(rSerie);
      Serial.print(" ohms\t");
      Serial.print("rParal.lel = ");
      Serial.print(rParalel);
      Serial.println(" ohms");
      Serial.println();
      Serial.println("Entra nous valors per r1 i r2");
    }
  }
}

//********** Funcions *************************************************************
