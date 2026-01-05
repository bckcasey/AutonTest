/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       bcasey                                                    */
/*    Created:      1/3/2025, 10:25:16 AM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "355W_config.h"
#include "355W_functions.h"
#include <iostream>
#include <cmath>

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain1;

// define your global instances of motors and other devices here



// define a motor.  Type motor.  Motor's name is LeftFront





/*
This function tells the robot to drive straight for a 
specific power at at a specific percent.
*/




int main() 
{

    LeftFront.spin(forward,50,percent);  

    wait(5,seconds);

    LeftFront.stop();


}

