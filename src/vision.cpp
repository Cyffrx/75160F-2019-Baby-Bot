#include "main.h"
#include "send_includes/smart_ports"

class vision {
private:
  pros::Vision camera (VISION_PORT);

  enum vTargets = {
    ORANGE, GREEN, PURPLE, NULL
  }

  vTargets target = NULL;

  void drt_angular_assist() {

  }

  void drt_distance_assist() {

  }

public:

  vision() {
    target = ORANGE;
  }

  void drivetrain_assist() {
    drt_angular_assist();
    drt_distance_assist();
  }

  void change_target() {
    switch (target) {
      case ORANGE:
        target = GREEN;
      break;
      case GREEN:
        target = PURPLE;
      break;
      case PURPLE:
        target = NULL;
      break;
      case NULL:
        target = ORANGE;
      break;
    }
  }

}
