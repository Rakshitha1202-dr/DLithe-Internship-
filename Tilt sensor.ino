int tilt= A1;
int servo= A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tilt, INPUT);
  pinMode(servo, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int tiltvalue = analogRead(tilt);
  if(tiltvalue>90)
  {
    analogWrite(servo,)
  }

}
