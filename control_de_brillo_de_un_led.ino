/*
Fundacion Kinal
Centro Educativo Tecnico Kinal
Electronica
Grado: Quinto
Curso: Taller de Electronica Digital
Alumno: Roberto Antonio Monterroso Aguilar
Seccion: A
Carne: 2019507
Proyecto: Uso de interrupciones de termporizador
*/
//Directivas del preprocesador
#define pwm_Led   3 //pin 3 para PWM de un led
#define potenciometro A1 //pin 4 para uso del potenciometro

//Variables
int nitidez = 0; // variable entera usar para determinar el brillo.

void setup() 
{
  Serial.begin(9600);  //Inicio la comunicacion serial
  pinMode(pwm_Led, OUTPUT);  //pin donde utilizo el PWM como salida del led.
  pinMode(potenciometro, INPUT); // se define el pin del potenciometro como entrada.
}

void loop() 
{
 nitidez = map(analogRead (potenciometro), 0, 1023, 0, 255); // alterna los valores 
   analogWrite(pwm_Led, nitidez);// regula la intensidad de la LED

}
