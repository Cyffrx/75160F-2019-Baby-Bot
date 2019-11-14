#include "main.h"
#include "send_includes/smart_ports"

class drivetrain {
private:
  pros::Motor front_left (FRONT_LEFT, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
  pros::Motor back_left (BACK_LEFT, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
  pros::Motor front_right (FRONT_RIGHT, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
  pros::Motor back_right (BACK_RIGHT, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);

  enum brakeType = {
    HOLD,
    COAST,
    BRAKE
  }

public:

  drivetrain();

  void set_motor(pros::Motor set_motor, int power) {

  }

  void brake_motor(pros::Motor set_motor, brakeType type) {
    set_motor.brake()
  }

  // consider putting ezAuto drive functions here

}
