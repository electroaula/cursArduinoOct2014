/**********************************************************************************
**                                                                               **
**                        Mida cargol                                            **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
// pins for the LEDs:
const int ledPin = 13;
int midaCargol;

//********** Setup ****************************************************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Quina mida te el cargol en cm?");
  // make the pins outputs:
  pinMode(ledPin, OUTPUT); 
}

//********** Loop *****************************************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    midaCargol = Serial.parseInt(); 

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {
      
      Serial.print("El cargol amb una mida de ");
      Serial.print(midaCargol);
      Serial.print(" cm es ");
      switch (midaCargol) {
        case 1:
          Serial.println("petit.");
          break;
        case 2:
          Serial.println("petit.");
          break;
        case 3:
          Serial.println("mitja.");
          break;
        case 4:
          Serial.println("mitja.");
          break;
        case 5:
          Serial.println("gran.");
          break;
        case 6:
          Serial.println("gran.");
          break;
        case 7:
          Serial.println("gran.");
          break;
        case 8:
          Serial.println("molt gran.");
          break;
        case 9:
          Serial.println("molt gran.");
          break;
        case 10:
          Serial.println("molt gran.");
          break;
        default: 
          Serial.println("incorrecte.");
      }
      Serial.println("");
      Serial.println("Quina mida te el cargol en cm?");
    }
  }
}

//********** Funcions *************************************************************
