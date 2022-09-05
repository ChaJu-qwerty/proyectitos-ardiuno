int buzzPin = 9;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(buzzPin, 255);
  delay(dt);
  analogWrite(buzzPin, 100);
  delay(dt);
  analogWrite(buzzPin, 50);
  delay(dt);
}
