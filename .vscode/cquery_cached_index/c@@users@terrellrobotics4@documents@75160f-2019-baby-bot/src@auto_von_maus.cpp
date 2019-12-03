#include "main.h"
#include "send_includes/smart_ports.h"

#define ARM_SPEED 12000
#define LIFT_SPEED 12000
#define INTAKE_SPEED 12000

#define DRIVE_SPEED 10000
#define ROTATE_SPEED 10000

class auto_von_maus {
private:
  pros::Motor front_left {FRONT_LEFT};
  pros::Motor front_right {FRONT_RIGHT};
  pros::Motor back_left {BACK_LEFT};
  pros::Motor back_right {BACK_RIGHT};

  pros::Motor arm {ARM};
  pros::Motor left_intake {LEFT_INTAKE};
  pros::Motor right_intake {RIGHT_INTAKE};
  pros::Motor lift {LIFT_MOTOR};


public:
  auto_von_maus() {
    lift.set_brake_mode(MOTOR_BRAKE_HOLD);
    arm.set_brake_mode(MOTOR_BRAKE_HOLD);
  }

  //////////////////////////
  // DRIVE WITH ROTATIONS //
  //////////////////////////

  void drive (int distance) {

  }
  void drive (int power, int distance) {

  }
  void drive_t (int time) {
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

  /////////////////////
  // DRIVE WTIH TIME //
  /////////////////////

  void drive_t (int power, int time) {
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

  //////////////////////////
  // STRAFE WITH ROTATONS //
  //////////////////////////

  void strafe() {

  }

  //////////////////////
  // STRAFE WITH TIME //
  //////////////////////

  void strafe_t(int time) {
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

  void strafe_t(int power, int time) {
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

  /////////////////////////
  // ROTATE WITH DEGREES //
  /////////////////////////

  void rotate(int degrees) {

  }

  ///////////////////////
  // ROTATE WITH TIME //
  //////////////////////s

  void rotate_t(int time) {
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

  void rotate_t(int power, int time) {
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

  ////////////
  // INTAKE //
  ////////////

  void intake() {
    left_intake.move_voltage(INTAKE_SPEED);
    right_intake.move_voltage(INTAKE_SPEED);
  }

  void intake(int voltage_power) {
    left_intake.move_voltage(voltage_power);
    right_intake.move_voltage(voltage_power);
  }

  /////////////
  // OUTTAKE //
  /////////////

  void outtake() {
    left_intake.move_voltage(-INTAKE_SPEED);
    right_intake.move_voltage(-INTAKE_SPEED);
  }

  void outtake(int voltage_power) {
    left_intake.move_voltage(-voltage_power);
    right_intake.move_voltage(-voltage_power);
  }
  ////////////////
  // RAISE ARMS //
  ////////////////

  void raise_arms() {
    arm.move_voltage(ARM_SPEED);
  }

  void raise_arms(int voltage_power) {
    arm.move_voltage(voltage_power);
  }

  ////////////////
  // LOWER ARMS //
  ////////////////

  void lower_arms() {
    arm.move_voltage(-ARM_SPEED);
  }

  void lower_arms(int voltage_power) {
    arm.move_voltage(-voltage_power);
  }

  ///////////////
  // HOLD ARMS //
  ///////////////

  void hold_arms() {
    arm.move_voltage(0);
  }

  ////////////////
  // RAISE LIFT //
  ////////////////

  void raise_lift() {
    lift.move_voltage(LIFT_SPEED);
  }
  void raise_lift(int voltage_power) {
    lift.move_voltage(voltage_power);
  }

  ////////////////
  // LOWER LIFT //
  ////////////////

  void lower_lift() {
    lift.move_voltage(-LIFT_SPEED);
  }
  void lower_lift(int voltage_power) {
    lift.move_voltage(-voltage_power);
  }

  ///////////////
  // HOLD LIFT //
  ///////////////

  void hold_lift() {
    lift.move_voltage(0);
  }

};
