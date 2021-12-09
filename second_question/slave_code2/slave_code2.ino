#include <AltSoftSerial.h>

AltSoftSerial altSerial;

void setup() {
  Serial.begin(9600);
  altSerial.begin(9600);
 
}

void loop() {
  char c;

  if (Serial.available()) {
   
    c = Serial.read();
    altSerial.print(c);
      altSerial.print("\n");
     delay(1);
  }
  
}
