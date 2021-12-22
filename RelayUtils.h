/*
  Relay Utils
  AUTOR:        Lucas Vinicius Pimenta
  LINKS:        https://github.com/luvinicius/relay-utils
  DESCRIPTION:  Relay class and methods
*/

#ifndef _RELAY_UTILS_H
#ifdef __cplusplus
#define _RELAY_UTILS_H

extern "C++"
{
  class Relay
  {
  private:
    int pin;
    int current_state;

  public:
    Relay(int pin);
    int getPin() { return pin; }
    int getCurrentState() { return current_state; }
    /**
       * @brief Does the pinMode and digitaWrite for the relay's pin and current state.
       */
    void init();

    /**
       * @brief Set current state of relay to ON, but doesn't do digitalWrite yet.
       */
    void set_to_on();

    /**
       * @brief Set current state of relay to OFF, but doesn't do digitalWrite yet.
       */
    void set_to_off();

    /**
       * @brief Does digitalWrite in relay's pin port with the relay's current state if it had a change.
       */
    void update();

    /**
       * @brief Set current state of relay to ON and call update().
       */
    void turn_on();
    /**
       * @brief Set current state of relay to OFF and call update().
       */
    void turn_off();
  };
}
#endif /* __cplusplus*/
#endif /* _RELAY_UTILS_H */
