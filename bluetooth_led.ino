/*  BUGs en el codigo:
  -Si se insertan mas de dos datos se imprime dos veces la sentencia de la linea 32
  -Si se insertan mas de tres datos se imprime tres veces la sentencia de la linea 32
*/
#include <SoftwareSerial.h> //Se importa la libreria del puerto serial
SoftwareSerial BT(10, 11); // Se activan los puertos 10 y 11 para antena bluetooth
// Se conecta el VCC del Bluetooth al puerto de 5v y el GND al puerto GND de arduino
void setup()  //Sentencias que se ejecutan cuando se reinicia la placa arduino
{
  pinMode(13, OUTPUT);  //Se activa el puerto 13 para el encendido/apagado del Led
  BT.begin(9600); //Se establece la velocidad de transferencia de datos del puerto
  BT.println("Bienvenido al Bluetooth en Arduino"); //El mensaje que se envia cuando se conecta la antena al dispositivo Bluetooth
  BT.println("Oprime 1 para encender y 2 para apagar");
}
char a; // Almacena el caracter entrante del otro dispositivo
void loop() //Sentencias que se ejecutan de manera continua en la placa arduino
{
  if (BT.available())  //Se hace visible la antena Bluetooth en otros dispositivos
  {
    a=(BT.read()); //a comienza a leer lo que le envian por Bluetooth
    if (a=='1')  //Si el dato recibido del puerto serial es 1 entonces encendera el Led
    {
      digitalWrite(13, HIGH);  //Enciende el Led en voltaje ALTO
      BT.println("LED Encendido");  //Devuelve el mensaje al dispositivo que mando el dato
    }
    if (a=='2')  //Si el dato recibido del puerto serial es 2 entonces apagara el Led
    {
      digitalWrite(13, LOW);  //Apaga el Led
      BT.println("LED Apagado");   //Devuelve el mensaje al dispositivo
    }  
    if (a >='3'){ //Si el dato recibido es igual o mayor al 3 entonces te pedira que introduzcas un nuevo valor
      BT.println("Envia una de las opciones correctas");
    }
  }
}


