int buzzPin = 9;
int number;
String msg1 = "Por favor introduce un número";
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg1);
  while (Serial.available() == 0) {}

  number = Serial.parseInt();

for (int i = 1; i <= number; i++){
  digitalWrite(buzzPin,HIGH);
  delay(dt);
  digitalWrite(buzzPin,LOW);
  delay(dt);
  }

}
