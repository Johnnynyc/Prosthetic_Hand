#include <Servo.h>

Servo S1;
Servo S2;
Servo S3;
Servo S4;
Servo S5;

int flexpin1 = A0;
int flexpin2 = A1;
int flexpin3 = A2;
int flexpin4 = A3;
int flexpin5 = A4;



float VCC = 5.00;		  //voltage
float R_DIV = 47500.0;    //resistance


void setup() {
  Serial.begin(9600);

  S1.attach(13);
  S2.attach(12);
  S3.attach(11);
  S4.attach(10);
  S5.attach(9);

  pinMode(flexpin1, INPUT);
  pinMode(flexpin2, INPUT);
  pinMode(flexpin3, INPUT);
  pinMode(flexpin4, INPUT);
  pinMode(flexpin5, INPUT);

}

void loop() {

  int flexADC = analogRead(flexpin1);     //Reads voltage from A0, Max(1023)
  Serial.println(flexADC);
  float flexV = flexADC * VCC / 1023.0;   //Voltage across flex sensor
  float flexR = R_DIV * (VCC / flexV - 1.0);    //Resistance of the flex sensor
  Serial.println("Resistance: " + String(flexR) + " ohms");
  int angle = map(flexADC, 0, 1023, 0, 180);    //map(value, lowest vol, highestvol, servo low, servo high)
  S1.write(angle);

  int flexADC2 = analogRead(flexpin2);
  int angle2 = map(flexADC2, 0, 1023, 0, 180);    //map(value, lowest vol, highestvol, servo low, servo high)
  S2.write(angle2);

  int flexADC3 = analogRead(flexpin3);
  int angle3 = map(flexADC3, 0, 1023, 0, 180);    //map(value, lowest vol, highestvol, servo low, servo high)
  S3.write(angle3);

  int flexADC4 = analogRead(flexpin4);
  int angle4 = map(flexADC4, 0, 1023, 0, 180);    //map(value, lowest vol, highestvol, servo low, servo high)
  S4.write(angle4);

  int flexADC5 = analogRead(flexpin5);
  int angle5 = map(flexADC5, 0, 1023, 0, 180);    //map(value, lowest vol, highestvol, servo low, servo high)
  S5.write(angle5);


  delay(500);

}
