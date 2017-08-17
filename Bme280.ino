#include <BME280I2C.h>
#include <Wire.h>             
 float temp, hum, pres;
BME280I2C bme;                 


void setup() {
  Serial.begin(9600);

bme.begin();
}

void loop() {
 

 
                                           
   bme.read(pres, temp, hum);   
   

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print("C");
  Serial.print("\t\tHumidity: ");
  Serial.print(hum);
  Serial.print("% RH");
  Serial.print("\t\tPressure: ");
  Serial.print(pres);
  Serial.println("Bar");
  delay(1000);
}
