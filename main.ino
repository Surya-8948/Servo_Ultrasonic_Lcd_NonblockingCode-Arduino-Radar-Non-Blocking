#define TRIG_PIN 4
#define ECHO_PIN 5
unsigned long lastdischeck =0;
unsigned long lastsermove = 0;
unsigned long lastlcdupdate = 0;
int angle=0;
bool forward =true;
float distance =-1;
#include<Servo.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
Servo myservo;
void setup()
{
Serial.begin(115200);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("HELLOW ROBOT");
  delay(200);
  lcd.clear();
  myservo.attach(3);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}
void loop()
{
   ser();
   float objectdis = dis();
   LCD(objectdis,angle);
}

float dis()
{
  if(millis()-lastdischeck>=100)  
  {
  lastdischeck = millis();
  long duration;
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN, HIGH,30000);
  distance = duration * 0.0343 / 2;
   return distance;
  }
}

void ser()
{
    if(millis()-lastsermove>=20)
    {
      if(forward)
      {
      angle++;
      myservo.write(angle);
      if(angle==180)
      {
        forward =false;
      }
      }
      else
      {
        angle--;
        myservo.write(angle);
        if(angle==0)
        {
            forward=true;
        }
      }
      lastsermove = millis();
    }
}

void LCD(float DISTANCE ,int ANGLE)
{
   if(millis()-lastlcdupdate>=20)
   {
   lastlcdupdate = millis();
 
   lcd.setCursor(0,0);
   lcd.print(DISTANCE);
   lcd.print("       ");
   lcd.setCursor(0,1);
   lcd.print(ANGLE);
   lcd.print("        ");
   }
}
