#include "main.h"

//Ports

#define FL_MOTOR 1
#define FR_MOTOR 10
#define BL_MOTOR 11
#define BR_MOTOR 20
#define GOAL_CLAMP 2
#define RINGVEYOR 3
#define INTAKE 4

const double degToTick = 900/360;
//200*4.125*pi/60 * sqrt(2), = 60
/*const double robotSpeed = 43.196 * sqrt(2);
const double rotationSpeed = 200;*/

extern pros::Motor FrontLeft;
extern pros::Motor FrontRight;
extern pros::Motor BackLeft;
extern pros::Motor BackRight;




pros::Controller master (pros::E_CONTROLLER_MASTER);

ControllerButton RUp(ControllerDigital::R1);
ControllerButton RDown(ControllerDigital::R2);
ControllerButton A(ControllerDigital::A);
ControllerButton B(ControllerDigital::B);
ControllerButton X(ControllerDigital::X);
ControllerButton Y(ControllerDigital::Y);
ControllerButton left(ControllerDigital::left);
ControllerButton right(ControllerDigital::right);
ControllerButton up(ControllerDigital::up);
ControllerButton down(ControllerDigital::down);
/*
pros::Controller control (E_C xONTROLLER_MASTER);*/
pros::Motor goalClamp(GOAL_CLAMP, pros::E_MOTOR_GEARSET_36, false);
pros::Motor FrontLeft(FL_MOTOR, true);
pros::Motor FrontRight(FR_MOTOR, false);
pros::Motor BackLeft(BLPort, true);
pros::Motor BackRight(BRPort, false);
pros::Motor Ringveyor(RINGVEYOR,);

/*
pros::Motor LeftIntake(LIPort, false);
pros::Motor RightIntake(RIPort, true);
pros::Motor BackRoller(LRPort, true);
pros::Motor MainRoller(RRPort, true);
pros::Imu inertial(IMUPort);

ADIEncoder yWheel('C', 'D', true);
ADIEncoder xWheel('A', 'B', false);


//Calibrate the sensors
void calibrateSensors(){
  xWheel.reset();
  yWheel.reset();
  inertial.reset();

  int timeInit = pros::millis();

  inertial.reset();
  while(inertial.is_calibrating()){
    lcd::print(1, "Calibrating");
    delay(10);
  }
  delay(2000);
  lcd::print(1, "Calibration took %f", millis() - timeInit);
}*/
