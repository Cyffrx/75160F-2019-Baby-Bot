#include "main.h"
#include "send_includes/base_functions.h"
#include "send_includes/smart_ports.h"
#include "send_includes/auto_von_maus.h"

void auto_von_maus_debug();

void autonomous() {
  auto_von_maus_debug();
}

void auto_von_maus_debug() {
  auto_von_maus av = auto_von_maus();

  av.drive_t(250);
  av.drive_t(-10000, 250);

  av.strafe_t(250);
  av.strafe_t(-10000,250);

  av.rotate_t(250);
  av.rotate_t(-10000,250);

  av.intake();
  pros::delay(250);

  av.intake(-10000);
  pros::delay(250);

  av.outtake();
  pros::delay(250);

  av.outtake(-10000);
  pros::delay(250);

  av.raise_arms();
  pros::delay(250);

  av.raise_arms(-10000);
  pros::delay(250);

  av.lower_arms();
  pros::delay(250);

  av.lower_arms(-10000);
  pros::delay(250);

  av.hold_arms();
  pros::delay(250);

  av.raise_lift();
  pros::delay(250);

  av.raise_lift(-10000);
  pros::delay(250);

  av.lower_lift();
  pros::delay(250);

  av.lower_lift(-10000);
  pros::delay(250);

  av.hold_lift();
  pros::delay(250);


}

void av_1() {
  pros::Motor front_left (FRONT_LEFT);
  pros::Motor front_right (FRONT_RIGHT);
  pros::Motor back_left (BACK_LEFT);
  pros::Motor back_right (BACK_RIGHT);

  pros::Motor arm(ARM);

  pros::Motor left_intake(LEFT_INTAKE);
  pros::Motor right_intake(RIGHT_INTAKE);

  left_intake.move(-100);
  right_intake.move(-100);

  arm.move(127);

  front_left.move(80);
  front_right.move(80);
  back_left.move(80);
  back_right.move(80);

  pros::delay(750);

  left_intake.move(0);
  right_intake.move(0);

  arm.move(0);

  pros::delay(1500);

  front_left.move(-80);
  front_right.move(-80);
  back_left.move(-80);
  back_right.move(-80);

  pros::delay(2000);

  front_left.move(0);
  front_right.move(0);
  back_left.move(0);
  back_right.move(0);

}
