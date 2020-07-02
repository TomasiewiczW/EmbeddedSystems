#include <Wire.h>
int val = 0;
void setup()
{
  Wire.begin(); // join i2c bus (address optional for master)
  pinMode(12, OUTPUT);
  pinMode(6, INPUT);
}

byte x = 0;

void loop()
{
  val = digitalRead(7);
  if(val == HIGH){
     Wire.beginTransmission(0x19); // transmit to device #4
     Wire.write(80);              // sends one byte  
     Wire.endTransmission();    // stop transmitting
  }
  else{
      Wire.beginTransmission(0x19); // transmit to device #4
      Wire.write(100);              // sends one byte  
      Wire.endTransmission();    // stop transmitting    
  }
  delay(500);
}
