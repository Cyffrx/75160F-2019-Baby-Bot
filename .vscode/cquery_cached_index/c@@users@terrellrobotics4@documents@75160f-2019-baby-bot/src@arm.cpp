#include "main.h"
#include "send_includes/smart_ports.h"


void arm(int power) {
  pros::Motor arm(ARM);
  if (power == 0) {
    arm.set_brake_mode(MOTOR_BRAKE_HOLD);
    arm.move_velocity(power);


  } else{
    arm.move(power);
  }

}
