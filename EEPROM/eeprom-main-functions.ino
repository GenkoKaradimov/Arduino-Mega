#include <EEPROM.h>

void setup() {
  Serial.begin(9600); 
}

void loop() {
  Serial.print("EEPROM Lenght: ");
  Serial.println(EEPROM.length());
  
  Serial.print("Value on position 2374: ");
  Serial.println(readByteEEPROM(2374));

  Serial.println("Set random value on position 2374: ");
  writeByteEEPROM(2374, random(256));
  
  Serial.print("Value on position 2374: ");
  Serial.println(readByteEEPROM(2374)); 

  delay(15000);
}

void writeByteEEPROM(int position, byte value){
  EEPROM.write(position, value);
}

byte readByteEEPROM(int position){
  return EEPROM.read(position);
}

int lenghtEEPROM(){
  return EEPROM.length();
}
