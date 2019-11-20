#include "main.h"
#include "send_includes/smart_ports.h"


// HIGHLY EXPERIMENTAL AND UNTESTED
// 360 degrees = 4 inches travel

#define WHEEL_SIZE 4
#define DEGREE_TRAVEL 90

class ezMove {
private:
  pros::Motor front_left = pros::Motor(FRONT_LEFT);
  pros::Motor front_right = pros::Motor(FRONT_RIGHT);
  pros::Motor back_left = pros::Motor(BACK_LEFT);
  pros::Motor back_right = pros::Motor(BACK_RIGHT);
public:
  ezMove() {

  }
  void move(int power, int time) {
    front_left.move(power);
    front_right.move(power);
    back_left.move(power);
    back_right.move(power);

    pros::delay( time);

    front_left.move(0);
    front_right.move(0);
    back_left.move(0);
    back_right.move(0);

  }

  void strafe(int power, int time) {
    front_left.move(power);
    front_right.move(power);
    back_left.move(-power);
    back_right.move(-power);

    pros::delay( time);

    front_left.move(0);
    front_right.move(0);
    back_left.move(0);
    back_right.move(0);

  }

  void rotate(int power, int time) {

    front_left.move(power);
    front_right.move(-power);
    back_left.move(power);
    back_right.move(-power);

    pros::delay( time);

    front_left.move(0);
    front_right.move(0);
    back_left.move(0);
    back_right.move(0);

  }
};
