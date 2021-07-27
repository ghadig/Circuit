#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;    //servos
Servo servo4;
Servo servo5;

const int pot1 =A0; 
const int pot2 =A1;
const int pot3 =A2;
const int pot4 =A3;   //each resestanc attached port
const int pot5 =A4;

void setup() {
  servo1.attach(7);// attaches the servo on pin 9 to the servo object
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  servo5.attach(12);
  //start the loop
}
void loop ()
{
  int pot1Value = analogRead(pot1);
  int pot2Value = analogRead(pot2);
  int pot3Value = analogRead(pot3);  //reading pot value
  int pot4Value = analogRead(pot4);
  int pot5Value = analogRead(pot5);
  
   int pot1Angle =map(pot1Value , 0 , 1023 , 0,90);
   int pot2Angle =map(pot2Value , 0 , 1023 , 0,90);  // the angle
   int pot3Angle =map(pot3Value , 0 , 1023 , 0,90);
   int pot4Angle =map(pot4Value , 0 , 1023 , 0,90);
   int pot5Angle =map(pot5Value , 0 , 1023 , 0,90);
  
  
  servo1.write(pot1Angle);
  servo2.write(pot2Angle);
  servo3.write(pot3Angle);// servo movement
  servo4.write(pot4Angle);
  servo5.write(pot5Angle);
}
