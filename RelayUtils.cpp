/*
  Relay Utils
  AUTOR:        Lucas Vinicius Pimenta
  LINKS:        https://github.com/luvinicius/relay-utils
  DESCRIPTION:  Relay methods
*/

#include <Arduino.h>
#include "RelayUtils.h"

Relay::Relay(int npin){
  pin = npin;
  current_state = HIGH;
}
void Relay::init()
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, current_state);
}

void Relay::set_to_on()
{
  current_state = LOW;
}
void Relay::set_to_off()
{
  current_state = HIGH;
}

void Relay::update()
{
  int real_state = digitalRead(pin);
  if (current_state != real_state)
  {
    // Updating relay status
    digitalWrite(pin, current_state);
  }
}

void Relay::turn_on()
{
  set_to_on();
  update();
}
void Relay::turn_off()
{
  set_to_off();
  update();
}
