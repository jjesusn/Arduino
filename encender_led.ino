/*
Programa: Encender led basico
Utilidad: El "Hola mundo" de arduino
Programador: Jesus Navarro
Fecha: 12 de Marzo del 2015
Version: 1.0
Changelog:
- n/d
*/
int led = 13; //Declaramos el puerto de salida
void setup() { //Funcion de inicio
  pinMode(led, OUTPUT); //Se marca como salida la variable
}
void loop() { //Funcion repetitiva
  digitalWrite(led, HIGH); //Encendemos el led
}
