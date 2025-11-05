/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       bcasey                                                    */
/*    Created:      1/3/2025, 10:25:16 AM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include <iostream>
#include <cmath>

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain1;

// define your global instances of motors and other devices here



// define a motor.  Type motor.  Motor's name is LeftFront
motor LeftFront = motor(PORT19, ratio36_1, true);
motor LeftMiddle = motor(PORT18, ratio36_1, true);
motor LeftBack = motor(PORT16, ratio36_1, false);

motor RightFront = motor(PORT8, ratio36_1, false);
motor RightMiddle = motor(PORT4, ratio36_1, false);
motor RightBack = motor(PORT15, ratio36_1, true);




/*
This function tells the robot to drive straight for a 
specific power at at a specific percent.
*/

void driveFor(int power, float deg)
{
    
    //Tell the motor what power/velocity it should drive at
    LeftFront.setVelocity(power,percent);
    RightFront.setVelocity(power,percent);
    LeftMiddle.setVelocity(power,percent);
    RightMiddle.setVelocity(power,percent);
    LeftBack.setVelocity(power,percent);
    RightBack.setVelocity(power,percent);

    //Its turning on the motor and telling it to stay 
    //on until the motor rotat3es a certain number of degrees  
    //The false/true tells the robot to excecute all comands
    // at the same time until it reaches the end (true)
    LeftFront.spinFor(deg,degrees,false);
    RightFront.spinFor(deg,degrees,false);
    LeftMiddle.spinFor(deg,degrees,false);
    RightMiddle.spinFor(deg,degrees,false);
    LeftBack.spinFor(deg,degrees,false);
    RightBack.spinFor(deg,degrees,true);

    // turn motors off
    LeftFront.stop();
    RightFront.stop();
    LeftMiddle.stop();
    RightMiddle.stop();
    LeftBack.stop();
    RightBack.stop();

    //wait a bit then exit
    wait(10,msec);
    
}

//turn time is in seconds, power is in percent, 
//forward dir is 1, backward is -1;
void turn(int dir, int power, float time)
{
    // turn motors on to turn right
    if(dir == 1){
    
        LeftFront.spin(forward,power,percent);    
        RightFront.spin(reverse,power,percent); 
        LeftMiddle.spin(forward,power,percent);    
        RightMiddle.spin(reverse,power,percent); 
        LeftBack.spin(forward,power,percent);    
        RightBack.spin(reverse,power,percent);  
    }

    // turn motors on to turn left
    if(dir == -1){

        LeftFront.spin(reverse,power,percent);    
        RightFront.spin(forward,power,percent); 
        LeftMiddle.spin(reverse,power,percent);    
        RightMiddle.spin(forward,power,percent);    
        LeftBack.spin(reverse,power,percent);    
        RightBack.spin(forward,power,percent); 
    }

    // wait until you get where you want to go
     wait(time,seconds);

    // turn motors off
    LeftFront.stop();
    RightFront.stop();
    LeftMiddle.stop();
    RightMiddle.stop();
    LeftBack.stop();
    RightBack.stop();

    //wait a bit then exit
    wait(10,msec);
    
}



int main() 
{

    LeftFront.spin(forward,50,percent);  

    wait(5,seconds);

    LeftFront.stop();


}

