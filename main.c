#include <kipr/botball.h>

int main()
{ 
 int right_sensor = analog(3);
 int left_sensor = analog(5);
 int light_sensor = analog(0); 
 printf("Must not touch the black lines");

wait_for_light(light_sensor); 
    
 motor(0,100);
 motor(3,100);
 msleep(1000);
    
 while ((right_sensor< 1100) && left_sensor<1100)
 {
     motor(0,100);
     motor(3,100);
     msleep(6000);
 } 

 while (analog(5) >1100)
 {
     motor(0,90);
     motor(3,80);
 }    

 while (analog(3) >1100)
 {
     motor(0,80);
     motor(3,90);
 }
 ao();
 return 0;
}
