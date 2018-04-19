#include <RCSwitch.h>
RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600);
  mySwitch.enableReceive(0);  //ต่อกับขา inerrupt 0 => ในที่นี้คือขา #2
}

void loop() {
  
  if (mySwitch.available()) {
    int value = mySwitch.getReceivedValue();

    if (value == 0) {
      Serial.print("Unknown encoding");
    } 
    else {
      Serial.print( mySwitch.getReceivedValue() );
    }
    mySwitch.resetAvailable();

  }

}
