/*
Programa: Led Bluetooth
Utilidad: Se enciende y apaga un Led por medio de bluetooth
Programador: Jesus Navarro
Fecha: 15 de Marzo del 2015
Version: 1.0
Changelog:
-n/d
*/
#include <SoftwareSerial.h> //Libreria para la comunicacion Serial
//Variables
char a; //Variable que almacena el numero que se recibe desde el celular
int led = 8;
SoftwareSerial BT(12,13); //Se habilitan los puertos 12 y 13 para la antena
void setup(){
  pinMode(led, OUTPUT);
  BT.begin(9600); //Velocidad de conexion
  BT.available(); //El Bluetooth se hace visible para todos los usuarios
  BT.println("Bienvenido a Arduino");
  BT.println("Oprime 1 para encender y 2 para apagar");
}
void loop(){
  a = BT.read(); //Lee un digito en el teclado del telefono
 // Inicia la comparacion y ejecucion de funciones
  if(a=='1'){
    digitalWrite(led, HIGH);
    BT.println("Led encendido");
  }if(a=='2'){
    digitalWrite(led, LOW);
    BT.println("Led Apagado");
  }if(a >='3'){
    BT.println("Inserta una opcion valida");
  }
}
