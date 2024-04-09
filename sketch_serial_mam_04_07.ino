long randNumber;
void setup() {
  // iniciar comunicacion serial a 9600 baudios.
  Serial.begin(9600);
}

void loop() {
  //envia 'Hola, mundo!' over the serial port
  randNumber = random(0, 255);
  Serial.println(randNumber);
  //wait 100 milliseconds so we don't drive ourselves crazy
  delay(100);
}
