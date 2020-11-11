// OperatorControl.cpp : implementation file

#include "MainCpp.h"
#include "RobotConsts.h"

void OperatorControl ( unsigned long ulTime )
{

    while ( 1 )
    { 
       
       
        
        JoystickToMotor ( 1 , RobotConsts::leftjoystick_yaxis , RobotConsts::drive_left , 0 ) ; 
        JoystickToMotor ( 1 , RobotConsts::rightjoystick_yaxis , RobotConsts::drive_right , 0 ) ;



        JoystickToMotor ( 1 , 2 , RobotConsts::arm_updown , 0 ) ;

        //JoystickDigitalToServo ( 1 , 7 , 1 , 127 , 2 , -127 , 2 ) ; 
         
 
    }

}




