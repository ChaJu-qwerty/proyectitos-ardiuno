float vOut;
float vRead;
int dt = 500;
float analogVal;

void setup() {
  // put your setup code here, to run once:
pinMode(vRead, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogVal = analogRead(vRead);
vOut = (5.*analogVal/1023);
Serial.println("El voltage actual es: "+String(vOut)+(" voltios"));
delay(dt);
}
