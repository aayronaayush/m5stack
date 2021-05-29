#define M5STACK_MPU6886
#include <FastLED.h>
#include <M5Atom.h>

float X = 0;
float Y = 0;
float Z = 0;

void setup() {
  Serial.begin(115200);
//  delay(1000);
  M5.begin();
  M5.IMU.Init();
}

int cnt = 0;

void loop() {

  delay(1);
  M5.IMU.getAccelData(&X,&Y,&Z); // get the data from the sensor and store in the respective variables
  Serial.print(X); // print out the accelerometer value along X-axis
//  similarly you can access the y and z axis values
  Serial.print("\n"); // not relevant for the functionality of the code.
  
}
