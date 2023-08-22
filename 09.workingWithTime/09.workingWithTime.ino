/*
  Author: Crawford Lieu
   Learning Intention: The students understand how time is used in microcontrollers and best practices
    1. I understand why delay(1000) whilst easy is not the preferred way of time event management
    2. I can use the millis() method and binary logic to trigger events by time
    3. I can explain the difference and benefits in serial monitor plotting by using millis() compared to delay()
    4. I understand how time can be used to send a communication frequency by using micros()

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/#functions
  Schematic: 
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/09.workingWithTime/Bootcamp-workingWithTime.png
*/

// Set-up LED and bool
static unsigned int myLED = 13;
bool myLEDStatus = false;

// Both as longs
unsigned long myLEDPrevMillis = 0;
const unsigned long myLEDInterval = 2000;

void setup() {
  Serial.begin(9600);
  Serial.println("---");
  Serial.println("SM configured to @9600.");
  Serial.println("--------------------------------");

  // Configure LED
  pinMode(myLED, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  digitalWrite(myLED, myLEDStatus);
  Serial.print(currentMillis);
  Serial.print(",");
  Serial.println(myLEDStatus);

  if (currentMillis - myLEDPrevMillis >= myLEDInterval) {
    myLEDStatus = !myLEDStatus;
    myLEDPrevMillis = currentMillis;
  }
}