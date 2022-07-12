float v2;
int readVal;
int potPin = A0;

int ledG = 3;
int ledY = 6;
int ledR = 9;

int dt =  500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(ledG, OUTPUT);
pinMode(ledY, OUTPUT);
pinMode(ledR, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

readVal = analogRead(potPin);
v2 = (5.*readVal)/1023.;

  if (v2 <=3.0){
    digitalWrite(ledG, HIGH);
    digitalWrite(ledY, LOW);
    digitalWrite(ledR, LOW);
    }
    
  if (v2 >=3.1 && v2<=4.0){
    digitalWrite(ledG, LOW);
    digitalWrite(ledY, HIGH);
    digitalWrite(ledR, LOW);
    }
    
  if (v2 >= 4.1 && v2 <= 5){
    digitalWrite(ledG, LOW);
    digitalWrite(ledY, LOW);
    digitalWrite(ledR, HIGH);
    }
    
Serial.println(v2);
delay(dt);
}
