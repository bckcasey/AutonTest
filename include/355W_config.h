


#include "vex.h"

using namespace vex;

vex::brain       Brain;

motor LeftFront = motor(PORT19, ratio36_1, true);
motor LeftMiddle = motor(PORT18, ratio36_1, true);
motor LeftBack = motor(PORT16, ratio36_1, false);

motor RightFront = motor(PORT8, ratio36_1, false);
motor RightMiddle = motor(PORT4, ratio36_1, false);
motor RightBack = motor(PORT15, ratio36_1, true);

motor Intake = motor(PORT10, ratio36_1, true);
motor Ladder = motor(PORT9, ratio36_1, false);
motor Middle = motor(PORT7, ratio36_1, true);
motor Upper = motor(PORT8, ratio36_1, true);

motor Wheels = motor(PORT16, ratio6_1, false);

motor Chain = motor(PORT18, ratio6_1, false);

inertial MyGyro = inertial(PORT14);

digital_out Pneumatic1 = digital_out(Brain.ThreeWirePort.H);
digital_out Pneumatic2 = digital_out(Brain.ThreeWirePort.G);


controller driveController1 = controller(primary);
controller driveController2 = controller(partner);