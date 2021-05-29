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

  delay(10);
  M5.IMU.getAccelData(&X,&Y,&Z);
//  M5.IMU.getGyroData(&X,&Y,&Z);
  Serial.print(X);
  Serial.print(" ");
  Serial.print(Y);
  Serial.print(" ");
  Serial.print(Z);
  Serial.print("\n");
  
}
