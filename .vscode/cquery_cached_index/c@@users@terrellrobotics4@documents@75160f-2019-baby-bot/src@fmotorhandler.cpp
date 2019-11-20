#include "main.h"

class fMotorWrapper {
private:
  bool isToggled();

public:
  fMotorWrapper(pros::Motor motor) {
    // the argument doesn't actually do anything
  }

  void set_motor_speed(int power, pros::Motor motor) {
    power = (power*12000)/127;
    motor.move_voltage(power);
  }

  void set_hold() {
    
  }
};
