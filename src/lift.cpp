#include "main.h"
#include "send_includes/smart_ports.h"


void lift(int power) {
    pros::Motor lift (LIFT_MOTOR);
    lift.move(power);
}
