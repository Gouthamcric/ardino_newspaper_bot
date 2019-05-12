/*gou_last
 * a->right
 * b->left
  */

  int vSpeed = 170;        // MAX 255
  int turn_speed = 130    ;    // MAX 255 
  int turn_delay = 500;
  
   
  const int motorA      = 3;  
   
  const int motorAspeed  = 5;
  const int motorB      = 7; 
  
  const int motorBspeed  =6;

//Sensor Connection
  const int left_sensor_pin =9;
  const int right_sensor_pin =10;

  
  
  int left_sensor_state;
  int right_sensor_state;

void setup() {
  pinMode(motorA, OUTPUT);
  
  pinMode(motorB, OUTPUT);
  

  Serial.begin(9600);

  delay(3000);
  
}

void loop() {
  

  


left_sensor_state = digitalRead(left_sensor_pin);
right_sensor_state = digitalRead(right_sensor_pin);

if(right_sensor_state == HIGH && left_sensor_state == LOW)
{
  Serial.println("turning right");

  digitalWrite (motorA,LOW);
                        

  digitalWrite(motorB,HIGH);

  analogWrite (motorBspeed, 180);
  analogWrite (motorAspeed, 255);
  
  }
if(right_sensor_state == LOW && left_sensor_state == HIGH)
{
  Serial.println("turning left");
  
  digitalWrite (motorA,HIGH);
                         
  
  digitalWrite(motorB,LOW);

  analogWrite (motorBspeed, 255);
  analogWrite (motorAspeed, 180);

  delay(turn_delay);
  }

if(right_sensor_state == LOW && left_sensor_state == LOW)
{
  Serial.println("going forward");

  digitalWrite (motorA,LOW);
                        
 
  digitalWrite(motorB,LOW);

  analogWrite (motorAspeed, 160);
  analogWrite (motorBspeed, 160);

  delay(turn_delay);
  
  }

if(right_sensor_state == HIGH && left_sensor_state == HIGH)
{ 
  Serial.println("stop");
  
  analogWrite (motorAspeed, 0);
  analogWrite (motorBspeed, 0);

  }

 
}










 
