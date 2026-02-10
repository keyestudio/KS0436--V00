int value1=0;
int value2=0;
int AIN1=2;
int AIN2=3;
int STBY=4;
int BIN1=5;
int BIN2=6;
int PWMA=10;// enable pin 1
int PWMB=11;// enable pin 2
int Fspeed;
int Lspeed;
int Rspeed;
void setup()
 {
  Serial.begin(9600);
  int i;
  for (i=2;i<=6;i++) // Ardunio motor driver module
  pinMode(i,OUTPUT); // set digital pins 2,3,4,5,6 as output
  pinMode(10,OUTPUT);// set digital pins 10, 11 as output
  pinMode(11,OUTPUT);

 }
 
void loop() 
    {      
     value1=analogRead(0);
     value2=analogRead(1);
     Serial.print(value1);
     Serial.print("  ");
     Serial.println(value2);
     if(value1 >900&&value2 >900)         //if front distance is less than 10cm   
     {
      front(); 
      }
     if(value1 >900&&value2 <=900)         //if front distance is less than 10cm   
     {
      left();
      }
     if(value1 <=900&&value2 >900)         //if front distance is less than 10cm   
     {
      right(); 
      }  
       if(value1 <=900&&value2 <=900)         //if front distance is less than 10cm   
     {
      stop(); 
      }     
    }    
void front() {
    digitalWrite(STBY,HIGH);
    digitalWrite(AIN1,HIGH);
    digitalWrite(AIN2,LOW);
    analogWrite(PWMA,200);
    digitalWrite(BIN1,HIGH); 
    digitalWrite(BIN2,LOW);
    analogWrite(PWMB,200);
}

void back() {
    digitalWrite(STBY,HIGH);
    digitalWrite(AIN1,LOW);
    digitalWrite(AIN2,HIGH);
    analogWrite(PWMA,200); 
    digitalWrite(BIN1,LOW);
    digitalWrite(BIN2,HIGH);
    analogWrite(PWMB,200); 
}

void stop() {
  digitalWrite(STBY,LOW);
}

void left() {
   
    digitalWrite(STBY,HIGH);
    digitalWrite(AIN1,HIGH);
    digitalWrite(AIN2,LOW);
    analogWrite(PWMA,200); 
    digitalWrite(BIN1,LOW);
    digitalWrite(BIN2,HIGH);
    analogWrite(PWMB,200); 
}

void right() {
    digitalWrite(STBY,HIGH);
    digitalWrite(AIN1,LOW);
    digitalWrite(AIN2,HIGH);
    analogWrite(PWMA,200); 
    digitalWrite(BIN1,HIGH); 
    digitalWrite(BIN2,LOW);
    analogWrite(PWMB,200); 
}
