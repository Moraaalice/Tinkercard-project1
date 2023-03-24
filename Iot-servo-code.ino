// C++ code
//
#include <Servo.h>
int sensor = 0;
int i = 0;
int j = 0;
Servo servo_9;
  
void setup()
{
  servo_9.attach(9,500,2500);
}

void loop()
{
  sensor = 0;
  for (sensor=1;sensor<=30;
       sensor += 1){
    servo_9.write(sensor);
}
  delay (20000);
  for (sensor = 90; sensor>=30; sensor=-1){
  servo_9.write(sensor);
  }
  
} 
  