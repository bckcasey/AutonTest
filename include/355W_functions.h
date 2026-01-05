

#include "vex.h"


using namespace vex;

void upper(int power, int dir, float time){

if(dir == 1){
    
    Upper.spin(forward,power,percent);  
}
    
if(dir == -1){
 
    Upper.spin(reverse,power,percent); 

}

wait(time,seconds);

    // turn motors off
Upper.stop();

}





void middle(int power, int dir, float time){

if(dir == 1){
    
    Middle.spin(forward,power,percent);  
}
    
if(dir == -1){
 
    Middle.spin(reverse,power,percent); 

}

wait(time,seconds);

    // turn motors off
Middle.stop();

}




void ladder(int power, int dir, float time){

if(dir == 1){
    
    Ladder.spin(forward,power,percent);  
}
    
if(dir == -1){
 
    Ladder.spin(reverse,power,percent); 

}

wait(time,seconds);

    // turn motors off
Ladder.stop();

}


void intake(int power, int dir, float time){

if(dir == 1){
    
    Intake.spin(forward,power,percent);  
}
    
if(dir == -1){
 
    Intake.spin(reverse,power,percent); 

}

wait(time,seconds);

    // turn motors off
Intake.stop();

}

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


