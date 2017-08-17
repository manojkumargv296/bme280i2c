#include <BME280I2C.h>
#include <Wire.h>             
 float temperature, humidity, pressure;
BME280I2C bme;                 


void setup() {
  Serial.begin(9600);

bme.begin();
}

void loop() {
 

 
                                           
   bme.read(pressure, temperature,humidity);   
   

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print("C");
  Serial.print("\t\tHumidity: ");
  Serial.print(humidity);
  Serial.print("% RH");
  Serial.print("\t\tPressure: ");
  Serial.print(pressure);
  Serial.println("Bar");
  delay(1000);
}
