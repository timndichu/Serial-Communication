#include <AltSoftSerial.h>

AltSoftSerial altSerial;

void setup() {
  Serial.begin(9600);

  altSerial.begin(9600);

}

void loop() {
  int count = 100;
    for(int i=0;i<=count;i++){
      altSerial.println(i);
      delay(100);
       altSerial.println("\n");
       delay(100);
    }
    
}
