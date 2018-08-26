/*
Arduino Control Voice 
By:  http://elprofegarcia.com
Controla por reconocimiento de Voz desde un Telefono android
por medio del bluetooth

Arduino   Bluetooth HC06
  5V        VCC
  GND       GND
  Pin0      TX
  Pin1      RX

Componentes comprados en http://dinastiatecnologica.com

*/

int estado=1; 
void setup(){
Serial.begin(9600); 
pinMode(13,OUTPUT); 
pinMode(12,OUTPUT); 
pinMode(11,OUTPUT); 
pinMode(10,OUTPUT); 
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
}
void loop(){
if(Serial.available()>0){
estado = Serial.read();
}
if (estado =='a'){ 
digitalWrite(13,1);
}
if (estado =='b'){ 
digitalWrite(13,0);
}
if (estado =='c'){ 
digitalWrite(12,1);
}
if (estado =='d'){ 
digitalWrite(12,0);
}
if (estado =='e'){ 
digitalWrite(11,1);
}
if (estado =='f'){ 
digitalWrite(11,0);
}
if (estado =='g'){ 
digitalWrite(10,1);
}
if (estado =='h'){ 
digitalWrite(10,0);
}
if (estado =='i'){ 
digitalWrite(9,1);
}
if (estado =='j'){ 
digitalWrite(9,0);
}
if (estado =='k'){ 
digitalWrite(8,1);
}
if (estado =='l'){ 
digitalWrite(8,0);
}
if (estado =='m'){ 
digitalWrite(7,1);
}
if (estado =='n'){ 
digitalWrite(7,0);
}
if (estado =='o'){ 
digitalWrite(6,1);
}
if (estado =='p'){ 
digitalWrite(6,0);
}
if (estado =='q'){ //all off
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
digitalWrite(6,0);
}
if (estado =='r'){ // all on
digitalWrite(13,1);
digitalWrite(12,1);
digitalWrite(11,1);
digitalWrite(10,1);
digitalWrite(9,1);
digitalWrite(8,1);
digitalWrite(7,1);
digitalWrite(6,1);
}
if (estado =='s'){ // blink
digitalWrite(13,1);
digitalWrite(12,1);
digitalWrite(11,1);
digitalWrite(10,1);
digitalWrite(9,1);
digitalWrite(8,1);
digitalWrite(7,1);
digitalWrite(6,1);
delay(500);
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
digitalWrite(6,0);
delay(500);
}
if (estado =='t'){ //Sequence 1
digitalWrite(13,1);
delay(200);
digitalWrite(12,1);
delay(200);
digitalWrite(11,1);
delay(200);
digitalWrite(10,1);
delay(200);
digitalWrite(9,1);
delay(200);
digitalWrite(8,1);
delay(200);
digitalWrite(7,1);
delay(200);
digitalWrite(6,1);
delay(200);
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0); 
digitalWrite(7,0);
digitalWrite(6,0);
delay(200);
}
if (estado =='u'){ //Sequence 2
}
if (estado =='v'){ //Sequence 3
digitalWrite(13,1);
delay(200);
digitalWrite(13,0);
digitalWrite(12,1);
delay(200);
digitalWrite(12,0);
digitalWrite(11,1);
delay(200);
digitalWrite(11,0);
digitalWrite(10,1);
delay(200);
digitalWrite(10,0);
digitalWrite(9,1);
delay(200);
digitalWrite(9,0);
digitalWrite(8,1);
delay(200);
digitalWrite(8,0); 
digitalWrite(7,1);
delay(200);
digitalWrite(7,0);
digitalWrite(6,1);
delay(200);
digitalWrite(6,0);
digitalWrite(7,1);
delay(200);
digitalWrite(7,0);
digitalWrite(8,1);
delay(200);
digitalWrite(8,0);
digitalWrite(9,1);
delay(200);
digitalWrite(9,0);
digitalWrite(10,1);
delay(200);
digitalWrite(10,0);
digitalWrite(11,1);
delay(200);
digitalWrite(11,0); 
digitalWrite(12,1);
delay(200);
digitalWrite(12,0); 
}
}
