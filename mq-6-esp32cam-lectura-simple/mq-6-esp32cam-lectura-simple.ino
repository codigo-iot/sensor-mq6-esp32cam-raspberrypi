/*Fecha: 1 de diciembre de 2021
 *Autor: Hugo Escalpelo
 *
 *Este programa realiza una lectura simple de un pin analogico en el ESP32CAM.
 *Este programa está orientado a realizar la lectura del sensor MQ-6.
 *
 *ESP32CAM    MQ-6
 *3.3v        VCC
 *GND         GND
 *GPIO12      A0
 */

//Bibliotecas

//Constantes
//int sensor = 12;

//Variable

//Configuracion del programa
void setup () {
  //Codigo
  Serial.begin (115200);//Inicia la comunicación serial
  Serial.println ("Programa iniciado");//Mensaje de prueba
  delay (1000);//Espera estandar
}

//Cuerpo del programa
void loop () {
  //Codigo
<<<<<<< HEAD
  //int dato = analogRead (sensor);//Lectura del sensor
  Serial.println ("El valor del sensor es: ");
  //Serial.print (dato);//Se imprimen los datos
=======
  int dato = analogRead (sensor);//Lectura del sensor
  Serial.print ("El valor del sensor es: ");
  Serial.println (dato);//Se imprimen los datos
>>>>>>> 9b909fd2ab63a1262be4a1f33481034e8e0c0d0a
  delay (1000);//Espera estandar
}
