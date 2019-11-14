#include "main.h"
#include "send_includes/smart_ports.h"

#define SIG_ORANGE 1
#define SIG_GREEN 2
#define SIG_PURPLE 3

void vision(int target) {
  pros::Vision camera (VISION_PORT);

  pros::vision_object_s_t vision_target;

  if (target == 1) {

  } else if (target == 2) {

  } else if (target == 2) {

  } else {

  }

  pros::vision_object_s_t sig_orange = camera.get_by_sig(0, SIG_ORANGE);
  pros::vision_object_s_t sig_green = camera.get_by_sig(0, SIG_GREEN);
  pros::vision_object_s_t sig_purple = camera.get_by_sig(0, SIG_PURPLE);
}
