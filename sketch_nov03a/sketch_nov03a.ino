#include<LiquidCrystal.h>

LiquidCrystal LCD(12, 11, 5, 4, 3, 2);
int Gas = 9; //read the state of sensor
int redLight = 7;
int greenLight = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(Gas, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(Gas) == HIGH) {
    LCD.setCursor(0,0);
    LCD.print("WARNING!");
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
  }
  else {
    LCD.setCursor(0,0);
    LCD.print("SAFE.");
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    
  }
  delay(1000);
  LCD.clear();
}
