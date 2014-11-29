/**********************************************************************************
**                                                                               **
**          Prem tecla i mostra valor en dec, hex, oct i binari                  **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
char thisByte;
char thatByte = 33; 
// you can also write ASCII characters in single quotes.
// for example. '!' is the same as 33, so you could also use this:
// int thatByte = '!';  

//********** Setup ****************************************************************
void setup() { 
  //Initialize serial and wait for port to open:
  Serial.begin(9600); 
  // prints title with ending line break 
  Serial.println("Prem una tecla..."); 
} 

//********** Loop *****************************************************************
void loop() { 
  // see if there's incoming serial data:
  while (Serial.available() > 0) {

    thisByte = thatByte; 
    thatByte = Serial.read(); 

    // look for the newline. That's the end of your sentence:
    if (thatByte == '\n') {
      
      // prints value unaltered, i.e. the raw binary version of the 
      // byte. The serial monitor interprets all bytes as 
      // ASCII, so 33, the first number,  will show up as '!' 
      Serial.write(thisByte);    
    
      Serial.print(", dec: "); 
      // prints value as string as an ASCII-encoded decimal (base 10).
      // Decimal is the  default format for Serial.print() and Serial.println(),
      // so no modifier is needed:
      Serial.print(thisByte);      
      // But you can declare the modifier for decimal if you want to.
      // this also works if you uncomment it: 
      // Serial.print(thisByte, DEC);  
    
      Serial.print(", hex: "); 
      // prints value as string in hexadecimal (base 16):
      Serial.print(thisByte, HEX);     
    
      Serial.print(", oct: "); 
      // prints value as string in octal (base 8);
      Serial.print(thisByte, OCT);     
    
      Serial.print(", bin: "); 
      // prints value as string in binary (base 2) 
      // also prints ending line break:
      Serial.println(thisByte, BIN);   
      //Serial.println("Prem una tecla..."); 
    }
  }  
} 

//********** Funcions *************************************************************







