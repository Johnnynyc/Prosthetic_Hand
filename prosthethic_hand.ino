#include <Servo.h>

Servo S1;

int flexpin1 = A0;

float VCC = 5.00;		  //voltage
float R_DIV = 47500.0;    //resistance


void setup() {
  Serial.begin(9600);

  S1.attach(13);

  pinMode(flexpin1, INPUT);


}

void loop() {

  int flexADC = analogRead(flexpin1);     //Reads voltage from A0, Max(1023)
  Serial.println(flexADC);
  float flexV = flexADC * VCC / 1023.0;   //Voltage across flex sensor
  float flexR = R_DIV * (VCC / flexV - 1.0);    //Resistance of the flex sensor
  Serial.println("Resistance: " + String(flexR) + " ohms");
  int angle = map(flexADC, 0, 1023, 0, 180);    //map(value, lowest vol, highestvol, servo low, servo high)
  S1.write(angle);

  delay(500);

}
