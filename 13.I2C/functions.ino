//static unsigned int myPotential = A0;

void printToOLED (String theMessage, String theMessage2) {
  //unsigned int XVal = map(analogRead(myPotential), 0, 1023, 10, 60);
  //Serial.println(XVal);
  u8g2.clearBuffer();                       // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);       // choose a suitable font
  u8g2.drawStr(0,10,theMessage.c_str());    // write something to the internal memory
  u8g2.drawStr(0,24,theMessage2.c_str());
  u8g2.sendBuffer();                        // transfer internal memory to the display
  delay(1000);  
}