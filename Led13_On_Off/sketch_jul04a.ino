void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT); //establece el pin digital 13 como salida(mandar;enviar informacion)
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH); //le decimos que encienda el pin 13
delay(110); //espera de miliseguntos
digitalWrite(13,LOW); //le decimos que apague el pin 13
delay(110); //espera de miliseguntos
}
