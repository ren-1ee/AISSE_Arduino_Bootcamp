/*
  Author: Crawford Lieu
  Learning Intention: The students will learn about configuring PINs and how to write binary data to a specific PIN.
  Success Criteria:
    1. I understand how to configure a PIN for outputting data
    2. I know how to write binary data to a specific PIN
    3. I can change the value in the delay method to change time
    4. I understand that LOW = false = 0 = <1.5 volts (or Off) and that HIGH = true = 1 = >3 volts (or On)
    5. I can create and correctly wire a LED in TINKERCAD and prototype my code
    6. I understand that a resistor is needed to reduce the voltage for the LED
    7. I understand what 'static' means before the int declaration
    8. I can organise output data so it correctly plots on the serial monitor
    9. I can apply this knowledge to the LED & Buzzer in the sensor kit

  Student Notes: 
    https://www.tinkercad.com/things/iAjyVRaGk9N-glorious-vihelmo/editel?sharecode=uN1C49l_TY1LJ9fkwMELtqhO8mTEWbHdrw0T6YkuYhM
  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
    https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
    https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-serial-plotter
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/03.digitalWrite/LED_Schedmatic.png

*/

static unsigned int onBoardLED = 13;
static unsigned int onBreadLED = 12;
bool LEDStatus = false;


void setup() {
  Serial.begin(9600);
  Serial.println("Serial monitor configured to 9600br.");
  Serial.println("------------------------------------------------------");
  pinMode(onBreadLED, OUTPUT);
}

void loop() {
  LEDStatus = !LEDStatus;
  digitalWrite(onBreadLED, !LEDStatus);
  Serial.print("onBreadLED value: ");
  Serial.print(digitalRead(onBreadLED));
  Serial.println(",");
  delay(1000);
}

// Old code below

/*
static unsigned int onBoardLED = 13;
bool LEDStatus = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial monitor configured to 9600br.");
  Serial.println("------------------------------------------------------");
  pinMode(onBoardLED, OUTPUT);
}

void loop() {
  LEDStatus = !LEDStatus;
  digitalWrite(onBoardLED, !LEDStatus);
  Serial.print("onBoardLED value: ");
  Serial.print(digitalRead(onBoardLED));
  Serial.println(",");
  delay(100);
}
*/