#define rs 9;
#define ls 8;

void setup() {
pinMode(8,INPUT);
pinMode(9,INPUT);
//pinMode(4,INPUT);
Serial.begin(9600); 
}


void loop() {
int i=digitalRead(8);
int j=digitalRead(9);


if((i==0)&&(j==0))
{Serial.println("forward");}
if(!(i==0)&&(j==0))
{Serial.println("right");}
if((i==0)&&!(j==0))
{Serial.println("left");}
if(!(i==0)&&!(j==0))
{Serial.println("stop");}
}
