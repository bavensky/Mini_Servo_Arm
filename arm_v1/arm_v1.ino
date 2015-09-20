#include <Servo.h> 

Servo BASE;
Servo SHOULDER;
Servo ARM;

#define base  3
#define shoulder  5
#define arm 6

#define s_base  A0
#define s_shoulder  A1
#define s_arm  A2

int val_base = 0, val_shoulder = 0, val_arm = 0;

void setup() {
  Serial.begin(9600);
  
  BASE.attach(base);
  SHOULDER.attach(shoulder);
  ARM.attach(arm);
}

void loop() {
//  Serial.print(analogRead(s_base));
//  Serial.print("  ");
//  Serial.print(analogRead(s_shoulder));
//  Serial.print("  ");
//  Serial.print(analogRead(s_arm));
//  Serial.print("Map = ");
//  Serial.print(val_base);
//  Serial.print("  ");
//  Serial.print(val_shoulder);
//  Serial.print("  ");
//  Serial.println(val_arm);

  val_base = map(analogRead(s_base), 0, 1023, 0, 180);
  val_shoulder = map(analogRead(s_shoulder), 0, 1023, 0, 180); 
  val_arm = map(analogRead(s_arm), 0, 1023, 0, 180);

  BASE.write(val_base);
  SHOULDER.write(val_shoulder);
  ARM.write(val_arm);
}
