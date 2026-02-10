#define SensorLED     13
#define SensorINPUT   2  
unsigned char state = 0; 
void setup() 
{ 
  pinMode(SensorLED, OUTPUT); 
  pinMode(SensorINPUT, INPUT);
attachInterrupt(0, blink, FALLING);//D2 as external interruption 0, when there is falling trigger and call blink function
 
}
void loop()
{
      if(state!=0)
      {
        digitalWrite(SensorLED,HIGH);
        delay(3000);
        state = 0;
      }   
      else 
        digitalWrite(SensorLED,LOW);
}  
 
void blink()// digital input of the sensor falling, triggering interruption function
{
  state++;
}
