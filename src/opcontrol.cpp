#include "main.h"
#include "send_includes/smart_ports.h"
#include "send_includes/lift.h"
#include "send_includes/intake.h"

void op_lift(pros::Controller driver) {

 const int PWR = 127;

 if (driver.get_digital(DIGITAL_R1)) {
   lift(PWR);
 } else if (driver.get_digital(DIGITAL_R2)) {
   lift(-PWR);
 } else {
   lift(0);
 }
}

void op_intake(pros::Controller driver) {
  const int PWR = 100;

  if (driver.get_digital(DIGITAL_L1)) {
    intake(PWR);
  } else if (driver.get_digital(DIGITAL_L2)) {
    intake(-PWR);
  } else  {
    intake(0);
  } 
}

void drivetrain(pros::Controller driver, pros::Motor front_left, pros::Motor front_right,
   pros::Motor back_left, pros::Motor back_right ) {

 int left_x = -driver.get_analog(ANALOG_LEFT_Y);
 int left_y = driver.get_analog(ANALOG_RIGHT_X);
 int right_x = driver.get_analog(ANALOG_LEFT_X);

 front_left.move(left_x - left_y - right_x);
 front_right.move(left_x + left_y + right_x);
 back_left.move(left_x - left_y + right_x);
 back_right.move(left_x + left_y - right_x);
}

void opcontrol() {
 pros::Motor front_left (FRONT_LEFT);
 pros::Motor front_right (FRONT_RIGHT);
 pros::Motor back_left (BACK_LEFT);
 pros::Motor back_right (BACK_RIGHT);

 pros::Motor lift_motor (LIFT_MOTOR);

 pros::Controller driver (CONTROLLER_MASTER);

  while (true) {
    drivetrain( driver, front_left, front_right, back_left, back_right );
    op_lift( driver);
    op_intake( driver);
    pros::delay(20);
  }
}
