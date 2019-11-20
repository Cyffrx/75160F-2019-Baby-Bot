#include "main.h"
#include "send_includes/base_functions.h"
#include "send_includes/smart_ports.h"

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */



void profile_1() {
  pros::Motor front_left (FRONT_LEFT);
  pros::Motor front_right (FRONT_RIGHT);
  pros::Motor back_left (BACK_LEFT);
  pros::Motor back_right (BACK_RIGHT);

  pros::Motor left_intake(LEFT_INTAKE);
  pros::Motor right_intake(RIGHT_INTAKE);


  left_intake.move(100);
  right_intake.move(100);

  front_left.move(80);
  front_right.move(80);
  back_left.move(80);
  back_right.move(80);

  pros::delay(250);

  left_intake.move(0);
  right_intake.move(0);

  pros::delay(1750);

  front_left.move(-80);
  front_right.move(-80);
  back_left.move(-80);
  back_right.move(-80);

  pros::delay(3000);

  front_left.move(0);
  front_right.move(0);
  back_left.move(0);
  back_right.move(0);

}

void autonomous() {
  profile_1();
}
