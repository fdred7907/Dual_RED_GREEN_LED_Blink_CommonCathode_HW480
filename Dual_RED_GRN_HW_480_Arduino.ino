#define GRN_LED 5
#define RED_LED 6

void setup() {
  // put your setup code here, to run once:
  //setting pin moodes
  pinMode(GRN_LED,OUTPUT);
  pinMode(RED_LED,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //RED on
  digitalWrite(RED_LED,HIGH);
  digitalWrite(GRN_LED,LOW);
  delay(1000);
  //GREEN on
  digitalWrite(GRN_LED,HIGH);
  digitalWrite(RED_LED,LOW);
  delay(1000);
  //both on
  digitalWrite(RED_LED,HIGH);
  delay(1000);
  

}
