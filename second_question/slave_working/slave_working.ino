#include <AltSoftSerial.h>

AltSoftSerial altSerial;

void setup() {
  Serial.begin(9600);
  Serial.println("AltSoftSerial Test Begin");
  altSerial.begin(9600);
 
}

void loop() {
  char c;

  if (Serial.available()) {
    delay(200);
    c = Serial.read();
    altSerial.print(c);
  }
  if (altSerial.available()) {
    delay(200);
    c = altSerial.read();
    Serial.print(c);
  }
}
