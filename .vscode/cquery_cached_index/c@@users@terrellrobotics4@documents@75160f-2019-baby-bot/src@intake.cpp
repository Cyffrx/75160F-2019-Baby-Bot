#include "main.h"
#include "send_includes/smart_ports.h"


void intake(int power) {
  pros::Motor left_intake(LEFT_INTAKE);
  pros::Motor right_intake(RIGHT_INTAKE);

  left_intake.move_voltage(power);
  right_intake.move_voltage(power);

}
