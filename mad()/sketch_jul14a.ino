int v2;
int ledPin = 3;
int potPin = A0;
int potVal;
int dt = 300;
int luz;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
} 

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  Serial.println(luz);
  luz = map(potVal,0,1023,0,255); 
  analogWrite(ledPin,luz);
  delay(dt);
}
