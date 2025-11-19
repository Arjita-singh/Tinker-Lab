// C++ code
//
#define LED 8
#define KNOB A0

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(KNOB);
  int ledPower = map(val, 0, 1023, 0 , 255);
  Serial.print("Potentiometer Value: ");
  Serial.println(val);
  Serial.print("LED Brightness (PWM) :  ");
  Serial.println(ledPower);
  analogWrite(LED, ledPower);
  delay(1000);
}
