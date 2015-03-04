/*
Descripcion: Encender 4 Leds RGB(Colores predeterminados)
Por: @Jesus Navarro
Version: 1.0
Fecha:20 de ENERO del 2015
*/
//LED1
int ledVerde1 = 12;
int ledAzul1 = 11;
int ledRojo1 = 10;
//LED2
int ledVerde2 = 9;
int ledAzul2 = 8;
int ledRojo2 = 7;
//LED3
int ledVerde3 = 6;
int ledAzul3 = 5;
int ledRojo3 = 4;
//LED4
int ledVerde4 = 3;
int ledAzul4 = 2;
int ledRojo4 = 1;
//Variables extras
int fade = 35;
int tiempo = 1000;
int noRepetir = 0;
int rojo = 0;
int azul = 0;
int verde = 0;
//Funciones
void color(int rojo, int verde, int azul){
  analogWrite(ledRojo1, rojo);
  analogWrite(ledRojo2, rojo);
  analogWrite(ledRojo3, rojo);
  analogWrite(ledRojo4, rojo);
  analogWrite(ledVerde1, verde);
  analogWrite(ledVerde2, verde);
  analogWrite(ledVerde3, verde);
  analogWrite(ledVerde4, verde);
  analogWrite(ledAzul1, azul);
  analogWrite(ledAzul2, azul);
  analogWrite(ledAzul3, azul);
  analogWrite(ledAzul4, azul);
  delay(1000);
}
void setup(){
  pinMode(ledRojo1,OUTPUT);
  pinMode(ledRojo2,OUTPUT);
  pinMode(ledRojo3,OUTPUT);
  pinMode(ledRojo4,OUTPUT);
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledVerde3, OUTPUT);
  pinMode(ledVerde4, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);
  pinMode(ledAzul4, OUTPUT);
}
void loop(){
  if(noRepetir == 0){
   for(int x= 0; x<=255; x++){  //Prendemos ROJO
     analogWrite(ledRojo1, x);
     analogWrite(ledRojo2, x);
     analogWrite(ledRojo3, x);
     analogWrite(ledRojo4, x);
     delay(fade);
   }
   delay(tiempo);
  }
  for(int y=0; y<=255; y++){  //Prendemos VERDE + ROJO = AMARILLO
    analogWrite(ledVerde1, y);
    analogWrite(ledVerde2, y);
    analogWrite(ledVerde3, y);
    analogWrite(ledVerde4, y);
    delay(fade);
    }
    delay(tiempo);
    for(int x=255; x>=0; x--){  //Apagamos ROJO = VERDE
      analogWrite(ledRojo1, x);
      analogWrite(ledRojo2, x);
      analogWrite(ledRojo3, x);
      analogWrite(ledRojo4, x);
      delay(fade);
    }
    delay(tiempo*3);
    for(int x=0; x<=255; x++){  //Prendemos AZUL + VERDE = CELESTE
    analogWrite(ledAzul1, x);
    analogWrite(ledAzul2, x);
    analogWrite(ledAzul3, x);
    analogWrite(ledAzul4, x);
    delay(fade);
    }
    delay(tiempo);
    for(int x=255; x>=0; x--){  //Apagamos VERDE = AZUL
    analogWrite(ledVerde1, x);
    analogWrite(ledVerde2, x);
    analogWrite(ledVerde3, x);
    analogWrite(ledVerde4, x);
    delay(fade);
    }
    delay(tiempo*3);
    for(int x=0; x<=255; x++){  //Prendemos ROJO + AZUL = MORADO
    analogWrite(ledRojo1, x);
    analogWrite(ledRojo2, x);
    analogWrite(ledRojo3, x);
    analogWrite(ledRojo4, x);
    delay(fade);
    }
    delay(tiempo);
    for(int x=0; x<=255; x++){  // Prendemos VERDE + AZUL + ROJO = BLANCO
    analogWrite(ledVerde1, x);
    analogWrite(ledVerde2, x);
    analogWrite(ledVerde3, x);
    analogWrite(ledVerde4, x);
    delay(fade);
 }
    delay(tiempo);
    for(int x=255; x>=0; x--){ //Bajamos VERDE = Azul
    analogWrite(ledVerde1, x);
    analogWrite(ledVerde2, x);
    analogWrite(ledVerde3, x);
    analogWrite(ledVerde4, x);
    delay(fade);  
    }
    delay(tiempo);
    for(int x=255; x>=0; x--){  //Bajamos AZUL = ROJO
    analogWrite(ledAzul1, x);
    analogWrite(ledAzul2, x);
    analogWrite(ledAzul3, x);
    analogWrite(ledAzul4, x);
    delay(fade);
    }
    noRepetir = 1;
    delay(tiempo*3);
}
