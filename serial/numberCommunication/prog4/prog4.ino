/**********************************************************************************
**                                                                               **
**                         Salari                                                **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
// pins for the LEDs:
const int ledPin = 13;
int hores;
float salari;


//********** Setup ****************************************************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Quantes hores de treball?");
  // make the pins outputs:
  pinMode(ledPin, OUTPUT); 
}

//********** Loop *****************************************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    hores = Serial.parseInt(); 

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {
      
      if (hores <= 37){
        salari = hores * 20;
      }
      else{
        salari = 37 * 20 + (hores - 37) * 30;
      }
      if (salari <= 800){
        salari = salari * 0.95;
      }
      else{
        salari = salari * 0.9;
      }
      
      Serial.print("El salari per ");
      Serial.print(hores);
      Serial.print(" hores treballades es de ");
      Serial.print(salari);
      Serial.println(" Euros.");
      Serial.println("");
      Serial.println("Quantes hores de treball?");
    }
  }
}

//********** Funcions *************************************************************
