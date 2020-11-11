// RobotConsts.h : header file
#include "MainCpp.h"

// TODO: add your code here
class RobotConsts{
public:


    

    //motor pins
    const static int drive_left = 2;
    const static int drive_right = 3;
    const static int arm_updown = 4;
    const static int arm_leftright = 5;
    const static int arm_claw = 6;

    
    //idk why easyC doesn't already have control bindings but here you go :) -Alex Ortiz

    
    //left joystick binding
    const static int leftjoystick_xaxis = 4;
    const static int leftjostick_yaxis = 3;

    //right joystick binding    
    const static int rightjoystick_xaxis = 1;
    const static int rightjoystick_yaxis = 2;

    //button bindings
    const static int left_button_pad = 7;
    const static int right_button_pad = 8;
    
    const static int left_shoulder_pad = 5;
    const static int right_shoulder_pad = 6;
    

    

};


