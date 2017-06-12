//#include <doxygen.h>
#include <ESP8266.h>
#include <SoftwareSerial.h>


SoftwareSerial mySerial(10,11);
//ESP8266 wifi(mySerial);

void setup() {
  mySerial.begin(115200); //RX1 TX1，即 Pin18 及 Pin19
  Serial.begin(9600);
  Serial.println("Start");
  //pinMode(13,OUTPUT);
}
void loop()
{
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
 
  if (Serial.available()) {
    char chars = Serial.read();
    mySerial.write(chars);
    //digitalWrite(13,HIGH);
  }
}
