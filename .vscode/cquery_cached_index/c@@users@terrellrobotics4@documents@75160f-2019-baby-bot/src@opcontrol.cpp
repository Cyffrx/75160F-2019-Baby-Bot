#include "main.h"
#include "send_includes/smart_ports.h"
#include "send_includes/base_functions.h"

void op_lift(pros::Controller driver) {

 const int PWR = 100;

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
  const int PASS = 20;

  if (driver.get_digital(DIGITAL_L1)) {
    intake(PWR);
  } else if (driver.get_digital(DIGITAL_L2)) {
    intake(-PWR);
  } else  {
    intake(PASS);
  }
}


void op_arm(pros::Controller driver) {
  const int PWR = 100;

  if (driver.get_digital(DIGITAL_X)) {
    arm(PWR);
  } else if (driver.get_digital(DIGITAL_B)) {
    arm(-PWR);
  } else  {
    arm(0);
  }
}

void drivetrain(pros::Controller driver, pros::Motor front_left, pros::Motor front_right,
   pros::Motor back_left, pros::Motor back_right ) {

 int a = driver.get_analog(ANALOG_LEFT_Y);
 int b = driver.get_analog(ANALOG_RIGHT_X);
 int c = driver.get_analog(ANALOG_LEFT_X);

 a = (abs(a)>20) ? a:0;
 b = (abs(b)>20) ? b:0;
 c = (abs(c)>20) ? c:0;

 front_left.move(a + b + c);
 front_right.move(-a + b + c);
 back_left.move(a + b - c);
 back_right.move(a - b + c);

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
