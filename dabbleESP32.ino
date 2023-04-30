#include <DabbleESP32.h>

#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE

const int in1 = 32;
const int in2 = 33;
const int in3 = 25;
const int in4 = 26;
const int in5 = 27;
const int in6 = 14;
const int in7 = 12;
const int in8 = 13;


void Stop(){
      digitalWrite(in1,HIGH);//MOVE FRONT
      digitalWrite(in2,HIGH);
      digitalWrite(in3,HIGH);//MOVE FRONT
      digitalWrite(in4,HIGH);
      digitalWrite(in5,HIGH);//MOVE FRONT
      digitalWrite(in6,HIGH);
      digitalWrite(in7,HIGH);//MOVE FRONT
      digitalWrite(in8,HIGH);
}
void Forward(){
 
     
      digitalWrite(in1,HIGH);//MOVE FRONT
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);//MOVE FRONT
      digitalWrite(in4,LOW);
      digitalWrite(in5,HIGH);//MOVE FRONT
      digitalWrite(in6,LOW);
      digitalWrite(in7,HIGH);//MOVE FRONT
      digitalWrite(in8,LOW);
     
     
}
void Backward(){
      digitalWrite(in1,LOW);//MOVE FRONT
      digitalWrite(in2,HIGH);
      digitalWrite(in3,LOW);//MOVE FRONT
      digitalWrite(in4,HIGH);
      digitalWrite(in5,LOW);//MOVE FRONT
      digitalWrite(in6,HIGH);
      digitalWrite(in7,LOW);//MOVE FRONT
      digitalWrite(in8,HIGH);
}
void Left(){
      digitalWrite(in1,HIGH);//MOVE FRONT
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);//MOVE FRONT
      digitalWrite(in4,LOW);
      digitalWrite(in5,HIGH);//MOVE FRONT
      digitalWrite(in6,LOW);
      digitalWrite(in7,HIGH);//MOVE FRONT
      digitalWrite(in8,LOW);
}

void Right(){
      digitalWrite(in1,HIGH);//MOVE FRONT
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);//MOVE FRONT
      digitalWrite(in4,LOW);
      digitalWrite(in5,HIGH);//MOVE FRONT
      digitalWrite(in6,LOW);
      digitalWrite(in7,HIGH);//MOVE FRONT
      digitalWrite(in8,LOW);
}





void setup() 
    {
       // put your setup code here, to run once:
      Serial.begin(250000);
    Dabble.begin("hama"); 
      
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);
  Stop();
    }   
        
  void loop() 
     {
        // put your main code here, to run repeatedly:
        Dabble.processInput();
        if (GamePad.isUpPressed())
          {
            Serial.print("UP");
            Forward();
          }

        else if (GamePad.isDownPressed())
          {
             Serial.print("DOWN");
             Backward();
          }

       else  if (GamePad.isLeftPressed())
           {
              Serial.print("Left");
              Left();
           }

       else  if (GamePad.isRightPressed())
           {
               Serial.print("Right");
               Right();
           }

           else 
           {
            Serial.println("strop");
            Stop();
           }


     }
