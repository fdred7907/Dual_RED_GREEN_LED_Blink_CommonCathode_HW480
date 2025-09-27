int sensorPin = 2; // analog pin 2
int value = 0 ; //to initialise value


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(sensorPin);
  Serial.println(value,DEC); // light intenisty
                            // low values for bright environment
                            // high values for dark ambience

  delay(100);
  

}
