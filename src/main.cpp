#include <Arduino.h>
/********************************************************************************
    Written By : Noch_kakada
  Property of: ROCK STAR
  Dated      : 08 August 2022
  *******************************************************************************/
#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); // RX  TX;
char BT_data;//data from the Blutooth

void setup() {
  // start the serial communication with the computer
  Serial.begin(9600);
  Serial.setTimeout(50);
  // start the serial communication with the blutooth using 9600
  BT.setTimeout(50);
  BT.begin(9600);
}

void loop() {
  //read from blutooth and send to arduino serial monitor
  if (BT.available ()) {
    BT_data = BT.read();// Read the data from blutooth
    Serial.println(BT_data);
    delay(50);
  }
/*if (BT_data=='F'){
  digitalWrite(13,1);
  }
  else{
    digitalWrite(13,0);
*/
  }

