#include <Servo.h>
#define x_pin A0
#define y_pin A1
#define hardcoded_vcc1 A2
#define hardcoded_gnd1 A3
//controlling the motor using the joystick and the c++;
Servo myServo;

void setup() {

 Serial.begin(9600);
 pinMode(hardcoded_vcc1,OUTPUT);
 pinMode(hardcoded_gnd1, OUTPUT);
 digitalWrite(hardcoded_vcc1, HIGH);
 digitalWrite(hardcoded_gnd1, LOW);
 myServo.attach(6);
}
void loop() {
  int x_val=analogRead(x_pin);
  int y_val=analogRead(y_pin);
  int angle=map(x_val,0,1023,0,180);
  myServo.write(angle);
  delay(15);
  Serial.print("X= ");
  Serial.print(x_val);//x value
  Serial.print(", Y= ");
  Serial.print(y_val);//x value
}
