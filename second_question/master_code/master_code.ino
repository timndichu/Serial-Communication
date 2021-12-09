#include <Arduino.h>
#include <SoftwareSerial.h>

#define RXPIN 10
#define TXPIN 11

SoftwareSerial softSerial(RXPIN, TXPIN);

void setup()  
{
  softSerial.begin(9600);
} 
void loop()  
{ 
  softSerial.write("U");
  delay (500);
}
