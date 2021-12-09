#include <Arduino.h>
#include <SoftwareSerial.h>

#define RXPIN 10
#define TXPIN 11

SoftwareSerial softSerial(RXPIN, TXPIN);

char ip = "";
void setup()  
{
  softSerial.begin(9600);

} 
void loop()  
{ 

  if (softSerial.available()>0)
  {
      delay (600);
    softSerial.write("Theres sth but i dont want to display it :p");
    ip=softSerial.read();

    softSerial.write(ip);
  
  }
  else {
    softSerial.write("Nothing here");
      delay (600);
  }

















}
