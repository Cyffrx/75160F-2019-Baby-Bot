#include "main.h"
#include "send_includes/smart_ports.h"


void lift(int power) {
    pros::Motor lift (LIFT_MOTOR);
    lift.move(power);

    if (power == 0) {
      lift.move(power);
      lift.set_brake_mode(MOTOR_BRAKE_HOLD);
    } else {
      //lift.move(power);
      lift.move(power);
    }
}
