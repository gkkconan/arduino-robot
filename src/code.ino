#include <Otto.h>
#include <Servo.h>
#include <SoftwareSerial.h>
#include "melodies/melodies.c"

//**************************************************

Otto Otto;
Servo Servo_6; /* RightArm */
Servo Servo_7; /* LeftArm */
Servo Servo_5; /* RightFoot */
Servo Servo_4; /* LeftFoot */

int i = 0;
int rxPin = 11;
int txPin = 12;
int Piezo = 13;
bool walkForward = false, walkBackwards = false;
SoftwareSerial bluetooth(rxPin, txPin);
char message;

#define LeftArm 7
#define RightArm 6
#define RightFoot 5
#define LeftFoot 4
#define RightLeg 3
#define LeftLeg 2


//**************************************************

void startArms(){
  Servo_6.write(0); delay(100);
  Servo_7.write(180); delay(100);
}

void move_RigthArm() {
  if(Servo_6.read() == 0){
    Servo_6.write(90);
    Servo_6.write(1); 
    Servo_6.write(180);
  } else{
    Servo_6.write(0);
  }
}

void move_LeftArm() {
  if(Servo_7.read() == 180){
    Servo_7.write(90);
    Servo_7.write(179);
    Servo_7.write(5);
  } else{
    Servo_7.write(180);
  }
}

void bothArms() {
  if(Servo_6.read() == 0 && Servo_7.read() == 180){
    Servo_6.write(180);
    Servo_7.write(0);
  } else{
    Servo_6.write(0);
    Servo_7.write(180);
  }
}

void onWalkForward(){
  while(walkForward){
    Otto.walk(1, 750, 1);
    message = char(bluetooth.read());
    message == 'h' ? walkBackwards = false : undefined;
  }
}

void onWalkBackwards(){
  while(walkBackwards){
    Otto.walk(1, 1000, -1);
    message = char(bluetooth.read());
    message == 'h' ? walkBackwards = false : undefined;
  }
}

void TurnLeft(){ Otto.turn(5, 750, 1); }
void TurnRight(){ Otto.turn(5, 750, -1); }

void fly(){
  for(i = 0; i < 10; i++){
    Servo_6.write(90);  delay(100);
    Servo_7.write(90);  delay(100);
    Servo_6.write(0);   delay(100);
    Servo_7.write(180); delay(45);

    message = char(bluetooth.read());
    message = '0' ? break : undefined;
  }
}

//**************************************************

void setup(){
  pinMode(Piezo, OUTPUT);
  Serial.begin(9600);
  bluetooth.begin(9600);

  Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Piezo);
  Servo_7.attach(LeftArm);
  Servo_6.attach(RightArm);
  startArms();
  Otto.sing(S_connection);
  Otto.home();
}


void loop(){
  Serial.println("START");

  if(bluetooth.available()){
    message = char(bluetooth.read());
    Serial.println("message = ");
    Serial.println(message);

    switch(message){
      case 'a': move_LeftArm(); break;
      case 'b': move_RigthArm(); break;
      case 'c': bothArms(); break;
      case 'd': fly(); break;
      case 'e': walkForward = !walkForward; onWalkForward(); break;
      case 'f': onWalkBackwards(); break;
      case 'g': TurnLeft(); break;
      case 'h': TurnRight(); break;
      case 'i': HappyBirthday(); break;
      case 'j': WeWishYouAMerryChristmas(); break;
      case 'k': NeverGonnaGiveYouUp(); break;
    }
  }
}