int i = 0;
int dt = 500;
int x =10;
int y = 8;
String operador = " + ";
String igual = " = ";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // es como decir "hey!!!, voy a usar el monitor"
}

void loop() {
  // put your main code here, to run repeatedly:
int z = x + y;

Serial.print(x); // el print solo va a ponerlo en una misma linea
Serial.print(operador);
Serial.print(y);
Serial.print(igual);
Serial.println(z); //println pone lo que le diga y "le da enter"
delay(dt);

}
