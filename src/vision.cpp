#include "main.h"
#include "send_includes/smart_ports.h"

void vision() {
  pros::Vision camera (VISION_PORT);
  pros::vision_object_s_t object = camera.get_by_sig(0, 0);

  
}
