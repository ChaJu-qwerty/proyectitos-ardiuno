int i;
int dt = 400;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 10; i >= 1; i--) {
    Serial.println(i);
    delay(dt);
  }
  Serial.println();

}
