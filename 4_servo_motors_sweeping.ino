#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);

  int pos = 0;          
  int direction = 1;    
  int stepSize = 3;     
  
  unsigned long startTime = millis();

  while (millis() - startTime < 2000) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    
    pos += (direction * stepSize);
    
    if (pos >= 180) {
      pos = 180;
      direction = -1;
      delay(500); 
    } else if (pos <= 0) {
      pos = 0;
      direction = 1;
      delay(500); 
    }
    
    delay(15); 
  }

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
}