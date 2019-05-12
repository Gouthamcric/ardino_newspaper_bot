//qq/gou_ver_1.0_com_m&i
void setup() {
  

pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(4,INPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(3,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(5,OUTPUT);

}

void start_mot_left()
{
  digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 analogWrite(3,255);
 
 
  }                                                                                                                                                                                                                                                                                                  
  void stop_mot_left()
  {
    digitalWrite(8,HIGH);
  }
  
void start_mot_right()
{
  digitalWrite(11,LOW); 
 digitalWrite(12,LOW);
 analogWrite(5,140);
 
  }
  void stop_mot_right()
  {
    digitalWrite(12,HIGH); 
  }
void loop() {
  
int i=digitalRead(10);
int j=digitalRead(9);


if((i==0)&&(j==0))
{ start_mot_left();
  start_mot_right();}
if(!(i==0)&&(j==0))
{  stop_mot_left();
   start_mot_right(); 
}
if((i==0)&&!(j==0))
{ start_mot_left();
  stop_mot_right();
  }
if(!(i==0)&&!(j==0))
{ stop_mot_left();

  stop_mot_right();}
}
