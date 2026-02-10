int latchPin = 4;
int clockPin = 5;
int dataPin = 2; //define three pins
void setup ()
{
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT); //three pins as output
}
void loop()
{

  int a[10]={
    252,96,218,242,102,182,190,224,254,246};   //define functional array
  for(int x=0; x<10 ;x++ )                        //calculate counting function
  {
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin,clockPin,MSBFIRST,a[x]);     //display array a[x]
    digitalWrite(latchPin,HIGH);
    delay(1000);
  }
}
