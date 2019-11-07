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
  void y_move(int power, int distance) {
    distance *= DEGREE_TRAVEL;
    front_left.set_zero_position(front_left.get_position());

    while (front_left.get_position() != distance) {
      front_left.move(power);
      front_right.move(power);
      back_left.move(power);
      back_right.move(power);
    }

  }

  void x_move(int power, int distance) {
    distance *= DEGREE_TRAVEL;
    front_left.set_zero_position(front_left.get_position());

    while (front_left.get_position() != distance) {

      front_left.move(power);
      front_right.move(-power);
      back_left.move(-power);
      back_right.move(power);
    }

  }

  void rotate(int power, int rotation_distance) {
    rotation_distance *= DEGREE_TRAVEL;
    front_left.set_zero_position(front_left.get_position());

    while(front_left.get_position() != rotation_distance) {
      front_left.move(power);
      front_right.move(-power);
      back_left.move(power);
      back_right.move(-power);
    }

  }
};
