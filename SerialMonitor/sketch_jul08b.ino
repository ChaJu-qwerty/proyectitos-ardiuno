

int wait = 500;
int radio = 3;
float area;
float Pi = 3.1415;
String men1 = "el area de un circulo con un radio de ";
String men2 = " es de: ";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
area = Pi*radio*radio;

Serial.print(men1);
Serial.print(radio);
Serial.print(men2);
Serial.println(area);
delay(wait);
radio++;  // ese ++ suma 1
//radio = rad + 1;
}
