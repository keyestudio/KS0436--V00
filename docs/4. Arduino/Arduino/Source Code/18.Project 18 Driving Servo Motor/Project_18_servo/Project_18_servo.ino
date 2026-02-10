#include <Servo.h>
Servo myservo;//define steering engine variable
int servo =0;
void setup()
{
 Serial.begin(9600); // 9600 bps
 myservo.attach(9);//define steering engine interface（alternative 9 and 10 but just able to control 2interfaces）
}
void loop()
{
servo=map ( analogRead(0) , 0 , 1023 , 0 , 180 )  ;
Serial.println(servo ,DEC);
myservo.write(servo);//set rotating angle
delay(50);
}
