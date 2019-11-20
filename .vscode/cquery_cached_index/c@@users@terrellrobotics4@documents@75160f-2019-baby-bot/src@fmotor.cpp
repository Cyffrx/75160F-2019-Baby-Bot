#include "main.h"

class fMotor {
private:
  int port;
  pros::Motor motor(port);
  bool isToggled = false;

public:
  fMotor () {

  }
}
