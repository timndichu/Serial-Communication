#include <AltSoftSerial.h>

AltSoftSerial altSerial;

void setup() {
  Serial.begin(9600);
  Serial.println("AltSoftSerial Test Begin");
  altSerial.begin(9600);
  altSerial.println("Hello World Master");
}

void loop() {
  char c;

  if (Serial.available()) {
    
  delay (100);
    c = Serial.read();
    altSerial.print(c);
  }
  if (altSerial.available()) {
    delay (100);
    c = altSerial.read();
    Serial.print(c);
  }
}
