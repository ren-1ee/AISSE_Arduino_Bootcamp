/*
  Author: Crawford Lieu
  Learning Intention: The students will learn how to wire a variable resistor as a pseudo sensor and read analogue data from that PIN.
  Success Criteria:
    1. I can wire a variable resistor in TINKERCAD
    2. I know how to read analogue data from a specific PIN
    3. I know the range of analogue data
    4. I can organise output data so it correctly plots on the serial monitor
    5. I can apply this knowledge to the Light, Sound and Rotary Potentiometer in the sensor kit

  Student Notes: 
    https://www.tinkercad.com/things/2oKJmkuN7Ma-spectacular-tumelo/editel?sharecode=z3oiDYC0aKUurvfWcW_XAEyQ7ZPec-FH0mDOr31zS4o
  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/05.serialRead/Bootcamp-serialRead.png
*/

static unsigned int myVarResistor = A0;
static unsigned int mySoundSensor = A2;
static unsigned int myLightSensor = A3;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial monitor configured to 9600br.");
  Serial.println("------------------------------------------------------");
}

void loop() {
  unsigned int val = analogRead(myVarResistor);
  unsigned int soundVal = analogRead(mySoundSensor);
  unsigned int lightVal = analogRead(myLightSensor);
  Serial.print("PotentiometerValue:");
  Serial.print(val);
  Serial.print(",");
  Serial.print("soundValue:");
  Serial.print(soundVal);
  Serial.print(",");
  Serial.print("lightValue:");
  Serial.println(lightVal);
}