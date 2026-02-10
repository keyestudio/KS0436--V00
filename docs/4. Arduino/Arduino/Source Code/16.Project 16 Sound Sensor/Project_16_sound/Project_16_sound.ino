int LEDpin = 7;                 // set pin for LED 
void setup() {
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
}
void loop() {
  
  int Soundvalue = analogRead(A0);  // read the input analog value
  Serial.println(Soundvalue);
  if(Soundvalue>700)
  {
   digitalWrite(LEDpin,HIGH);      // when the analog value is bigger than the set value, turn on the LED
   for(int i=0;i<5;i++){
   delay(1000);                    // wait for 5s
   }
  }
  else{
   digitalWrite(LEDpin,LOW);      // turn off the LED 
    }
}
