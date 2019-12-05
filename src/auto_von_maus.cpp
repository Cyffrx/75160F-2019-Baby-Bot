#include "send_includes/auto_von_maus.h"

#define ARM_SPEED 12000 // in volts
#define LIFT_SPEED 12000 // in volts
#define INTAKE_SPEED 12000 // in volts

#define DRIVE_SPEED 10000 // in volts
#define ROTATE_SPEED 10000 // in volts


auto_von_maus::auto_von_maus() {
  lift.set_brake_mode(MOTOR_BRAKE_HOLD);
  arm.set_brake_mode(MOTOR_BRAKE_HOLD);

  lift.move_voltage(0);
  arm.move_voltage(0);
}

void auto_von_maus::drive (int distance) {

}
void auto_von_maus::drive (int power, int distance) {

}

/////////////////////
// DRIVE WTIH TIME //
/////////////////////

void auto_von_maus::drive_t (int power, int time) {
  front_left.move_voltage(power);
  front_right.move_voltage(power);
  back_left.move_voltage(power);
  back_right.move_voltage(power);

  pros::delay(time);

  front_left.move_voltage(0);
  front_right.move_voltage(0);
  back_left.move_voltage(0);
  back_right.move_voltage(0);

}

void auto_von_maus::drive_t (int time) {
  front_left.move_voltage(DRIVE_SPEED);
  front_right.move_voltage(DRIVE_SPEED);
  back_left.move_voltage(DRIVE_SPEED);
  back_right.move_voltage(DRIVE_SPEED);

  pros::delay(time);

  front_left.move_voltage(0);
  front_right.move_voltage(0);
  back_left.move_voltage(0);
  back_right.move_voltage(0);
}

//////////////////////////
// STRAFE WITH ROTATONS //
//////////////////////////

void auto_von_maus::strafe(int distance, int time) {

}
void auto_von_maus::strafe(int distance) {

}
//////////////////////
// STRAFE WITH TIME //
//////////////////////

void auto_von_maus::strafe_t(int power, int time) {
    front_left.move_voltage(power);
    front_right.move_voltage(-power);
    back_left.move_voltage(-power);
    back_right.move_voltage(power);

    pros::delay(time);

    front_left.move_voltage(0);
    front_right.move_voltage(0);
    back_left.move_voltage(0);
    back_right.move_voltage(0);
  }

void auto_von_maus::strafe_t(int time) {
  front_left.move_voltage(DRIVE_SPEED);
  front_right.move_voltage(-DRIVE_SPEED);
  back_left.move_voltage(-DRIVE_SPEED);
  back_right.move_voltage(DRIVE_SPEED);

  pros::delay(time);

  front_left.move_voltage(0);
  front_right.move_voltage(0);
  back_left.move_voltage(0);
  back_right.move_voltage(0);
}

/////////////////////////
// ROTATE WITH DEGREES //
/////////////////////////

void rotate(int degrees) {

}

///////////////////////
// ROTATE WITH TIME //
//////////////////////s
void auto_von_maus::rotate_t(int power, int time) {
  front_left.move_voltage(power);
  front_right.move_voltage(-power);
  back_left.move_voltage(power);
  back_right.move_voltage(-power);

  pros::delay(time);

  front_left.move_voltage(0);
  front_right.move_voltage(0);
  back_left.move_voltage(0);
  back_right.move_voltage(0);

}

void auto_von_maus::rotate_t(int time) {
  front_left.move_voltage(ROTATE_SPEED);
  front_right.move_voltage(-ROTATE_SPEED);
  back_left.move_voltage(ROTATE_SPEED);
  back_right.move_voltage(-ROTATE_SPEED);

  pros::delay(time);

  front_left.move_voltage(0);
  front_right.move_voltage(0);
  back_left.move_voltage(0);
  back_right.move_voltage(0);

}

////////////
// INTAKE //
////////////

void auto_von_maus::intake() {
  left_intake.move_voltage(INTAKE_SPEED);
  right_intake.move_voltage(INTAKE_SPEED);
}

void auto_von_maus::intake(int voltage_power) {
  left_intake.move_voltage(voltage_power);
  right_intake.move_voltage(voltage_power);
}

/////////////
// OUTTAKE //
/////////////

void auto_von_maus::outtake() {
  left_intake.move_voltage(-INTAKE_SPEED);
  right_intake.move_voltage(-INTAKE_SPEED);
}

void auto_von_maus::outtake(int voltage_power) {
  left_intake.move_voltage(-voltage_power);
  right_intake.move_voltage(-voltage_power);
}
////////////////
// RAISE ARMS //
////////////////

void auto_von_maus::raise_arms() {
  arm.move_voltage(ARM_SPEED);
}

void auto_von_maus::raise_arms(int voltage_power) {
  arm.move_voltage(voltage_power);
}

////////////////
// LOWER ARMS //
////////////////

void auto_von_maus::lower_arms() {
  arm.move_voltage(-ARM_SPEED);
}

void auto_von_maus::lower_arms(int voltage_power) {
  arm.move_voltage(-voltage_power);
}

///////////////
// HOLD ARMS //
///////////////

void auto_von_maus::auto_von_maus::hold_arms() {
  arm.move_voltage(0);
}

////////////////
// RAISE LIFT //
////////////////

void auto_von_maus::auto_von_maus::raise_lift() {
  lift.move_voltage(LIFT_SPEED);
}

void auto_von_maus::raise_lift(int voltage_power) {
  lift.move_voltage(voltage_power);
}

////////////////
// LOWER LIFT //
////////////////

void auto_von_maus::auto_von_maus::lower_lift() {
  lift.move_voltage(-LIFT_SPEED);
}
void auto_von_maus::lower_lift(int voltage_power) {
  lift.move_voltage(-voltage_power);
}

///////////////
// HOLD LIFT //
///////////////

void auto_von_maus::hold_lift() {
  lift.move_voltage(0);
}
