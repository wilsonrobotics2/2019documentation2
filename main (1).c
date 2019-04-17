#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,100);//right motor
    motor(3,100);//left motor
    msleep(3300);//2 sec.
    
    motor(0,100);//right motor
    motor(3,50);//left motor
    msleep(2550);//3 sec.
    
    motor(0,100);//right motor
    motor(3,100);//left motor
    msleep(1600);//3 sec.
    
    motor(0,50);//right motor
    motor(3,0);//left motor
    msleep(2600);//3 sec.
    
    motor(3,100);
    motor(0,100);
    msleep(7000);
    motor(0,50);//right motor
    motor(3,0);//left motor
    msleep(2400);//3 sec.
    motor(3,100);
    motor(0,100);
    msleep(1900);
    motor(0,50);//right motor
    motor(3,0);//left motor
    msleep(2400);//3 sec.
    motor(0,100);
    motor(3,100);
    msleep(3500);
    return 0;
}
