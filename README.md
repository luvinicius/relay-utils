#Relay Utils Library
Class and methods to make easier control relays in Arduino.

##How to use

Example
```
#include <RelayUtils.h>

#define RELAY_PIN 7

Relay relay = Relay(RELAY_PIN);

setup(){
    relay.init();
}

loop(){
    relay.turn_on();
    delay(10000);

    relay.turn_off();
    delay(30000);
}
```