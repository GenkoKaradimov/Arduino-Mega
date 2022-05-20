void setup() {
  Serial.begin(9600);
}

void loop() {
  // is btn pressed
  int valA0 = analogRead(A0);
  if(valA0 > 10) btnPressed(valA0);

  delay(400);
}

void btnPressed(int volt){
  Serial.print(volt);
  
  if (volt >= 1003) { // btn 1 is pressed
    Serial.println("Pressed Button is: 1");
  }  else if (volt >= 964) { // btn 2 is pressed
    Serial.println("Pressed Button is: 2");
  }  else if (volt >= 925) { // btn 3 is pressed
    Serial.println("Pressed Button is: 3");
  }  else if (volt >= 886) { // btn 4 is pressed
    Serial.println("Pressed Button is: 4");
  }  else if (volt >= 849) { // btn 5 is pressed
    Serial.println("Pressed Button is: 5");
  }  else if (volt >= 812) { // btn 6 is pressed
    Serial.println("Pressed Button is: 6");
  }  else if (volt >= 781) { // btn 7 is pressed
    Serial.println("Pressed Button is: 7");
  }  else if (volt >= 754) { // btn 8 is pressed
    Serial.println("Pressed Button is: 8");
  }  else if (volt >= 713) { // btn 9 is pressed
    Serial.println("Pressed Button is: 9");
  }  else if (volt >= 671) { // btn 10 is pressed
    Serial.println("Pressed Button is: 10");
  }else if (volt >= 639) { // btn 11 is pressed
    Serial.println("Pressed Button is: 11");
  }else if (volt >= 608) { // btn 12 is pressed
    Serial.println("Pressed Button is: 12");
  }else if (volt >= 575) { // btn 13 is pressed
    Serial.println("Pressed Button is: 13");
  }else if (volt >= 542) { // btn 14 is pressed
    Serial.println("Pressed Button is: 14");
  }else if (volt >= 509) { // btn 15 is pressed
    Serial.println("Pressed Button is: 15");
  }else if (volt >= 475) { // btn 16 is pressed
    Serial.println("Pressed Button is: 16");;
  }else if (volt >= 441) { // btn 17 is pressed
    Serial.println("Pressed Button is: 17");
  }else if (volt >= 413) { // btn 18 is pressed
    Serial.println("Pressed Button is: 18");
  }else if (volt >= 382) { // btn 19 is pressed
    Serial.println("Pressed Button is: 19");
  }else if (volt >= 358) { // btn 20 is pressed
    Serial.println("Pressed Button is: 20");
  }else if (volt >= 336) { // btn 21 is pressed
    Serial.println("Pressed Button is: 21");
  }else if (volt >= 302) { // btn 22 is pressed
    Serial.println("Pressed Button is: 22");
  }else if (volt >= 254) { // btn 23 is pressed
    Serial.println("Pressed Button is: 23");
  }else if (volt >= 209) { // btn 24 is pressed
    Serial.println("Pressed Button is: 24");
  }else if (volt >= 178) { // btn 25 is pressed
    Serial.println("Pressed Button is: 25");
  }else if (volt >= 146) { // btn 26 is pressed
    Serial.println("Pressed Button is: 26");
  }else if (volt >= 115) { // btn 27 is pressed
    Serial.println("Pressed Button is: 27");
  }else if (volt >= 82) { // btn 28 is pressed
    Serial.println("Pressed Button is: 28");;
  }else if (volt >= 48) { // btn 29 is pressed
    Serial.println("Pressed Button is: 29");
  }else if (volt >= 16) { // btn 30 is pressed
    Serial.println("Pressed Button is: 30");
  }
}
