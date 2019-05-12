// lf=3,7#rf=5,11
//red-black#black-red
//ls=8,rsd=9
//2.O
//#include <Servo.h>
int left_sensor_state;
int right_sensor_state;
int pos = 0; 
//Servo s1,s2,s3;
void setup() {
  
pinMode(7,OUTPUT);
//pinMode(8,OUTPUT);
pinMode(3,OUTPUT);
pinMode(11,OUTPUT);
//pinMode(12,OUTPUT);
pinMode(5,OUTPUT);

pinMode(8,INPUT);
pinMode(9,INPUT);
//s1.attach(12);  
//s2.attach(13);
 
}
void sense_left()
{
 digitalWrite(11,HIGH);
 digitalWrite(7,LOW);
 //analogWrite(3,255);
 
}
  void none_sense()
{
 digitalWrite(11,HIGH);
 digitalWrite(7,HIGH);
}
void sense_both()
{analogWrite(3,0);
analogWrite(5,0);
}
  
void sense_right()
{
 digitalWrite(11,LOW);
 digitalWrite(7,HIGH);
 //analogWrite(5,255);
 
}
/*
void modi_pos()
{
  if(pos==90)
  {pos=0;}
  else
  {pos=90;}
  }
*/
/*void mechanism()
{
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

  }*/
void loop() {

 analogWrite(5,165);
 
 analogWrite(3,165);
left_sensor_state = digitalRead(8);
right_sensor_state = digitalRead(9);
/*if(side_sensor_state==HIGH)
{
  delay(5000);
  mechanism();
  }*/
  
if(right_sensor_state == LOW && left_sensor_state == LOW)
{
none_sense();
}
if(right_sensor_state == LOW && left_sensor_state == HIGH)
{
sense_left();
}
if(right_sensor_state == HIGH && left_sensor_state == LOW)
{
sense_right();
}
if(right_sensor_state == HIGH && left_sensor_state == HIGH)
{
 sense_both();
 
}  
}
