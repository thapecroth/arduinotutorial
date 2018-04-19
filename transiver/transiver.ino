#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();
RCSwitch mySwitch2 = RCSwitch();

void setup() {
  Serial.begin(115200);
  mySwitch.enableTransmit(3);  
  mySwitch2.enableTransmit(4);  // Using Pin #10
}

void loop() {
  
  mySwitch.send();
  //mySwitch2.send(1,2);
  Serial.println("Sendinggggg ");
  delay(1000);
}
