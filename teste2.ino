int pinoAnalogico = A0;
int pinoDigital = 4;
int leituraA = 0;
int leituraB = 0;
int limiar = 512;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinoAnalogico, INPUT);
  pinMode(pinoDigital, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leituraA = analogRead(pinoAnalogico);
  leituraB = digitalRead(pinoDigital);
  if(leituraA > limiar){
    Serial.print(leituraA);
    Serial.println(",Linha Detectada!!");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
    Serial.print(leituraA);
    Serial.println(",Linha não Detectada!");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);

  if (leituraB == 1){
    Serial.print(leituraB);
    Serial.println(", linha detectada!");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    Serial.print(leituraB);
    Serial.println(", linha não detectada!");
    digitalWrite(LED_BUILTIN, LOW);
  }
}
