//Configurar los puertos y la placa en la opcion herramientas

// variables
int pinLed = 13;
char opcion = '0'; 

void setup() {
  // put your setup code here, to run once:
  // inicializador de los puertos sensores o actuadores
  pinMode(pinLed,OUTPUT);
  //Trabaja con puertos seriales
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    opcion = Serial.read();
  }

  if(opcion == '1'){
    digitalWrite(pinLed, HIGH);
  }
  else if(opcion == '0'){
    digitalWrite(pinLed, LOW);
  }
  
}
