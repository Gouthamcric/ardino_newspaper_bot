//slider-crank=s1,scale=s2,s=s3
#include <Servo.h>
int pos = 0; 
Servo s1,s2,s3; 
void setup() {
s1.attach(12);  
s2.attach(13);
 

}
void modi_pos()
{
  if(pos==90)
  {pos=0;}
  else
  {pos=90;}
  }

void loop() {
modi_pos();
s2.write(pos);
delay(500);
s1.write(150);
delay(2000);
modi_pos();
s2.write(pos);
delay(500);
s1.write(30);
delay(2000);

}
