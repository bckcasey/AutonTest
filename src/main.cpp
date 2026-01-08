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
#include "355W_autons.h"
#include <iostream>
#include <cmath>

using namespace vex;





int main() 
{

    LeftFront.spin(forward,50,percent);  

    wait(5,seconds);

    LeftFront.stop();


}

