// lf=3,7#rf=5,11
//red-black#black-red
//ls=8,rs=9
void setup() {
  
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(3,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(5,OUTPUT);

 analogWrite(5,255);
 
 analogWrite(3,255);

}
void sense_left()
{
  digitalWrite(11,HIGH);
 digitalWrite(7,LOW);
 analogWrite(3,255);
 
  }
  void none_sense(){
     digitalWrite(11,HIGH);
 digitalWrite(7,HIGH);
 }
  
  void stop_mot_left()
  {
    digitalWrite(8,HIGH);
  }
  
void sense_right()
{
  digitalWrite(11,LOW);
 digitalWrite(7,HIGH);
 analogWrite(5,255);
 
  }
  void stop_mot_right()
  {
    digitalWrite(12,HIGH);
  }
void loop() {
  //none_sense();
   sense_left();
  //sense_right();
   
 delay(10000);
   stop_mot_right();
   stop_mot_left();
    delay(10000);
  
}
