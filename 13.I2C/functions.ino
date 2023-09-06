void printToOLED (float theTemp, float thePressure) {
  u8g2.clearBuffer();                   // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);   // choose a suitable font
  u8g2.setCursor(0, 10);                // Set cursor to first line
  u8g2.print("Hello World!");           // write something to the internal memory
  u8g2.setCursor(0, 20);
  u8g2.print("Today's temp is: ");      // write something to the internal memory
  u8g2.print(theTemp, 0);
  u8g2.print("C");
  /* u8g2.setCursor(0, 30);
  u8g2.print("The Pressure is: ");       // write something to the internal memory
  u8g2.print(thePressure);
  u8g2.print("hp");
  u8g2.setCursor(0, 40);
  if (thePressure > 1005) {
    u8g2.print("STORM WARNING!"); 
  } else {
    u8g2.print("Good weather."); 
  } */
  u8g2.sendBuffer();                    // transfer internal memory to the display
  Serial.println(theTemp);
}

float myTemp() {
  return bmp280.getTemperature();
}

float myPressure() {
  return bmp280.getPressure();
}

/*
void measureAir() {
  // float myTemp = bmp280.getTemperature();
  // float myPressure = bmp280.getPressure();
  // float myAltitude = bmp280.calcAltitude(myPressure);
  
  //get and print temperatures
  Serial.print("Temp:");
  Serial.print(myTemp,0);
  Serial.println("°C");  // The unit for  Celsius because original arduino don't support speical symbols

  //get and print atmospheric pressure data
  Serial.print("Pressure:");
  Serial.print(myPressure, 0);
  Serial.println("Pa");

  //get and print altitude data
  Serial.print("Altitude:");
  Serial.print(myAltitude);
  Serial.println("m");

  Serial.println("");  //add a line between output of different times.

  delay(1000);  // Add delay.
} */