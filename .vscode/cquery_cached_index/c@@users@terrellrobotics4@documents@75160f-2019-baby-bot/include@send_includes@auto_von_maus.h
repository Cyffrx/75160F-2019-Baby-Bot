class auto_von_maus {
public:
  auto_von_maus();

  void drive(int power, int distance);
  void drive(int distance);

  void drive_t(int power, int time);
  void drive_t(int time);

  void strafe(int power, int distance);
  void strafe(int distance);

  void strafe_t(int power, int time);
  void strafe_t(int time);

  void rotate(int degrees);
  void rotate_t(int time);
  void rotate_t(int power, int time);

  void intake();
  void intake(int voltage_power);

  void outtake();
  void outtake(int voltage_power);

  void raise_arms();
  void raise_arms(int voltage_power);

  void lower_arms();
  void lower_arms(int voltage_power);

  void hold_arms();

  void raise_lift();
  void raise_lift(int voltage_power);

  void lower_lift();
  void lower_lift(int voltage_power);

  void hold_lift();

};
