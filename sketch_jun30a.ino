#include <Wire.h>
void setup()
{
  Wire.begin(); // join i2c bus (address optional for master)
}

void loop()
{
  Wire.beginTransmission(0x19);
  Wire.write(100);
  //Wire.write(80);               
  Wire.endTransmission(); 
  delay(500);
}