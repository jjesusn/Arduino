/* 
Programa: Semaforo doble.
Utilidad: Dos semaforos sincronizados entre si.
Programadores: Jorge Franco
               Jesus Navarro
               Gerardo Ramirez
Fecha: 11/03/15
Version: 1.0
Changelog: 
-n/d
*/
 // ------------------------------------------------------------------------------------
 // Declarar salidas
 int verde=10;
 int amarillo=9;
 int rojo=8;
 int verde2=5;
 int amarillo2=6;
 int rojo2=7;
// --------------------------------------------------------------------------------------- 
//Declarar pines como salida
 void setup() {
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(amarillo2,OUTPUT);
  pinMode(rojo2,OUTPUT);
 }
// ---------------------------------------------------------------------------------------
//Semaforos
void loop() {
digitalWrite(verde, HIGH);
digitalWrite(rojo2, HIGH);
delay(5000);
digitalWrite(verde, LOW);
digitalWrite(amarillo, HIGH);
delay(1000);
digitalWrite(amarillo, LOW);
digitalWrite(rojo2, LOW);
digitalWrite(verde2,HIGH);
digitalWrite(rojo,HIGH);
delay(5000);
digitalWrite(verde2, LOW);
digitalWrite(amarillo2, HIGH);
delay(1000);
digitalWrite(amarillo2, LOW);
digitalWrite(rojo, LOW);
}
