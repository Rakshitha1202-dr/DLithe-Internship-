#include <Ultrasonic.h>

int IR = 12;
int LED = 42;
int Buzzer = 6;
int V;
void setup() {
  // put your setup code here, to run once:
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int V = digitalRead(IR);

if(V==HIGH)
{
  digitalWrite(LED, HIGH);
 // digitalWrite(Buzzer, HIGH);
  Serial.print("object is detected");

}
else
{
  
  //digitalWrite(LED, LOW);
  digitalWrite(Buzzer, HIGH);
  Serial.println("Object is not detected");
}


}
