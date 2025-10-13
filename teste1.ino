int pinoAnalogico = A0;
int leituraA = 0;
int limiar = 512;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinoAnalogico, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leituraA = analogRead(pinoAnalogico);
  if(leituraA > limiar){
    Serial.print(leituraA);
    Serial.println(",Linha Detectada!!");
  }
  else{
    Serial.print(leituraA);
    Serial.println(",Linha não Detectada!");
  }
  delay(2000);
}
