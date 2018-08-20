int led13=13;
int estado=0;

void setup(){
  Serial.begin(9600);  // inicializa el puerto serial
  pinMode(led13,OUTPUT);  //7 definimos la salida
}

void loop(){
 if(Serial.available()>0){
 estado = Serial.read();
 }
 if (estado =='1'){
   digitalWrite(led13,HIGH);
  }
if(estado=='2'){
   digitalWrite(led13,LOW);
  }
}  
