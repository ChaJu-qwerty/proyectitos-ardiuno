int i;
int dt = 300;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i=1;i<20;i=i+2){
    Serial.println(i);
    delay(dt);
  }
  Serial.println();

}
