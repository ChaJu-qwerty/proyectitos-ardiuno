const int BOTTON = 4;
int ledPin = 3;
void setup()
{
  Serial.begin(9600) ;
  pinMode(BOTTON, INPUT) ;
  pinMode(ledPin, OUTPUT);
}
void loop()
{

  Serial.println(digitalRead(BOTTON ));
  delay(10);
  int BOTTONN = digitalRead(BOTTON);
  if (BOTTONN == 1) {
    digitalWrite(ledPin, HIGH);
  }

  else {
    digitalWrite(ledPin, LOW);
  }
}
