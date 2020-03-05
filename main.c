#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    //This part of code makes claw move downward because it starts facing upward so it won't start illegally
    motor(3,-20);
    msleep(1000);
    
    //This part of code makes robot move forward in order to knock down the stack of the 3 processed iron boxes and the 3 processed quicklime boxes
    motor(0,100);
    motor(1,100);
    msleep(3000);
    
    //This part of code makes robot go backwards into mineral lab
    motor(0,-100);
    motor(1,-100);
    msleep(3000);
    
    motor(0,50);
    motor(1,50);
    msleep(1500);
    
    motor(0,0);
    motor(1,50);
    msleep(1000);
    
    motor(0,100);
    motor(1,100);
    msleep(1500);
    return 0;
}
